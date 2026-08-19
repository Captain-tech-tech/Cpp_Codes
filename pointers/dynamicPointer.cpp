#include<iostream>
using namespace std;
int main()
{
    float *ptr = new float(49.45);
    cout<<ptr<<endl<<*ptr<<endl;

    int *p = new int[6]{45,57,45,34,576,76};

    *(p+3) = 3463;
    for(int i=0;i<6;i++)
    {
        cout<<&p[i]<<endl;
        cout<<p[i]<<endl;
    }

    delete ptr;
    delete[] p;
    return 0;
}

