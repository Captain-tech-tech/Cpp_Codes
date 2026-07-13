// Vector stores everything ( also duplicates )
// UniqueVector stores only unique values
// FrequencyVector stores unique values and their counts separately

#include<iostream>
using namespace std;
class Vector
{
    // protected to safely inherite in derived class
    protected:
    int *array;
    int total_elements_stored;
    int size_of_array;   // array capacity
    public:
    Vector()
    {
        size_of_array=2;
        total_elements_stored=0;
        array=new int[size_of_array];
    }
    void resize()
    {
        size_of_array*=2;
        int *arr1=new int[size_of_array];
        for(int i=0;i<total_elements_stored;i++)
        {
            arr1[i]=array[i];
        }
        delete[] array;   // deleting previous memory,  as to assign new memory address
        array=arr1;  // now both pointers point to new array with double size of previous
    }
    virtual void push_back(int val)
    {
        if(size_of_array==total_elements_stored)
        {
            resize();
        }
        array[total_elements_stored]=val;
        total_elements_stored++;
    }
    // for printing number of current elements present in array
    int find_len()
    {
        return total_elements_stored;
    }
    int get(int num) // num for index number, from where we want to retrieve number
    {
        return array[num];
    }
    // for printing the array
    void print()
    {
        for(int i=0;i<total_elements_stored;i++)
        cout<<array[i]<<" ";
        cout<<endl;
    }
};

// class which store only unique values
class UniqueVector:public Vector
{
    public:
    bool check_uniqueness(int val)  // for checking, if the number is unique or not
    {
        for(int i=0;i<total_elements_stored;i++)
        {
            if(array[i]==val)
            return true;
        }
        return false;
    }
    void push_back(int val)
    {
        if(!check_uniqueness(val)) // if value is unique, it will be stored otherwise it will not be stored
        Vector::push_back(val); 
    }
};
// FrequencyVector stores unique values and their counts separately
class FrequencyVector: public Vector
{
    int * frequency_of_data;  
    public:
    FrequencyVector():Vector()  
    {
        frequency_of_data=new int[size_of_array];
    }
    void resize()
    {
        size_of_array*=2;
        int* newarray=new int[size_of_array];
        int* newfrequency=new int[size_of_array];

        for(int i=0;i<total_elements_stored;i++)
        {
            newarray[i]=array[i];
            newfrequency[i]=frequency_of_data[i];
        }
        delete[] array;
        delete[] frequency_of_data;  // both pointers current memory addresses deleted, to new one

        array=newarray;
        frequency_of_data=newfrequency;
    }
    // method for adding new unique values
    void push_back(int val)
    {
        for(int i=0;i<total_elements_stored;i++)
        {
            if(array[i]==val)
            {
                frequency_of_data[i]++;
                return;
            }
        }
        if(total_elements_stored==size_of_array)
        {
            resize();
        }
        array[total_elements_stored]=val;
        frequency_of_data[total_elements_stored]=1;
        total_elements_stored++;
    }
    // for printing each number frequency
    void printfreq()
    {
        for(int i=0;i<total_elements_stored;i++)
        {
            cout<<frequency_of_data[i]<<" ";
        }
        cout<<endl;
    }
    // it give frequency of a specific number, for which this function is called
    int getfrequency(int val)
    {
        for(int i=0;i<total_elements_stored;i++)
        {
            if(array[i]==val)
            return frequency_of_data[i];
        }
        return 0;
    }
};

int main()
{
    int x;
    cin>>x;
    Vector v;
    for(int i=0;i<x;i++)
    {
        int val;
        cin>>val;
        v.push_back(val);
    }

    int y;
    cin>>y;
    UniqueVector uv;
    for(int i=0;i<y;i++)
    {
        int val;
        cin>>val;
        uv.push_back(val);
    }

    int z;
    cin>>z;
    FrequencyVector fv;
    for(int i=0;i<z;i++)
    {
        int val;
        cin>>val;
        fv.push_back(val);
    }

    int D,E,F;
    cin>>D>>E>>F;

    cout<<"Printing Vector : ";
    v.print();

    cout<<"Printing unique vector : ";
    uv.print();

    cout<<"Printing the frequency vector : ";
    fv.print();

    cout<<fv.getfrequency(D)<<" ";
    cout<<fv.getfrequency(E)<<" ";
    cout<<fv.getfrequency(F)<<" ";    // by giving F(any number), it gives its frequency
    cout<<endl;
    return 0;
}


