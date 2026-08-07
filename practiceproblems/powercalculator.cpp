#include<iostream>
using namespace std;
int main()
{
    long long int base,exponent;
    cout<<"Enter base: ";cin>>base;int temp = base;
    cout<<"Enter exponent: ";cin>>exponent;
    for(int i=1;i<exponent;i++)
    {
        base = base*temp;
    }
    cout<<temp<<"^"<<exponent<<" = "<<base<<endl;
    return 0;
}
