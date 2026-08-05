#include<iostream>
using namespace std;
int main()
{
    float n1, n2;
    char opera;
    cout<<"Enter your two operands : ";  cin>>n1>>n2;
    cout<<"Enter which type of operation you wanna perform, for add(+), for sub(-), for mult(*),"
    <<"for division(/), for modu(%) : "; cin>>opera;
    if (opera == '+')
    cout<<n1<<" + "<<n2<<" = "<<n1+n2<<endl;
    else if(opera == '-')
    cout<<n1<<" - "<<n2<<" = "<<n1-n2<<endl;
    else if(opera == '*')
    cout<<n1<<" * "<<n2<<" = "<<n1*n2<<endl;
    else if(opera == '/')
    cout<<n1<<" / "<<n2<<" = "<<n1/n2<<endl;
    else if(opera == '%')
    {
        int n3 = int(n1);
        int n4 = int(n2);
        cout<<n1<<" % "<<n2<<" = "<<n3%n4<<endl; // if both values are float then % does not work
    }
    return 0;
}

















