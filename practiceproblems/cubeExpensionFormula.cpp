// (a - b)^3 = a^3 - b^3 - 3ab(a - b)

#include<iostream>
#include<cmath>
using namespace std;
int main()
{
    float a,b;
    cout<<"Enter value(float) of 'a' : ";cin>>a;
    cout<<"Enter value(float) of 'b' : ";cin>>b;
    cout<<"Your output according to the formula (a - b)^3 = a^3 - b^3 - 3ab(a - b) : ";
    cout<<pow(a,3)-pow(b,3)-3*a*b*(a-b)<<endl;
    return 0;
}







