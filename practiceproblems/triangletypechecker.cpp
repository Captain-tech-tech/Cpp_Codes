#include<iostream>
using namespace std;
int main()
{
    float s1,s2,s3;
    cout<<"Enter the values of the sides of the triangle : ";
    cin>>s1>>s2>>s3;
    s1 == s2 && s2 ==s3 ? cout<<"This is an equilateral triangle!" : (s1 == s2 && s3 != s1) || (s1 != s2 && s2 == s3)? 
    cout<<"This is an isoceles triangle!":cout<<"This is a scalene triangle!"<<endl;

    cout<<endl;
    return 0;
}




