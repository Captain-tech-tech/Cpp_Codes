#include<iostream>
using namespace std;
int main()
{
    int first,last;
    cout<<"Enter the first and last number of the range in which you wanna find prime numbers :";
    cin>>first>>last;

    int count=0;
    int flag;
    for(int i=first;i<=last;i++)
    {
        flag = 0;
        for(int j = 2;j < i;j++)
        {
            if(i % j == 0)
            {
                flag = 1;
                break;
            }
        }
        if(flag == 0)
        {
            count++;
            cout<<i<<"  ";
        }
    }
    cout<<endl<<"There are total "<<count<<" prime numbers between "<<first<<" and "<<last<<endl;
    cout<<endl;
    return 0;
}




































