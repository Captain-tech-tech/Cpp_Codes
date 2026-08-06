#include<iostream>
using namespace std;
int main()
{
    int a,b;
    cout<<"Enter your two numbers for which you wanna find LCM : ";
    cin>>a>>b;int c;
    (a<b) ? c = b : c=a;
    while(true)
    {
        if(c%a == 0 && c%b == 0)
        {
            cout<<"The LCM of "<<a<<" and "<<b<<" is "<<c<<endl;
            break;
        }
        c++;
    }

    return 0;
}






























































