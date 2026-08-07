#include<iostream>
using namespace std;
int main()
{
    int subjects;cout<<"Enter the number of subjects : ";cin>>subjects;
    char grades[subjects];
    int credit_hours[subjects];
    float sum1 = 0,sum2 = 0,grade_points=0;

    cout<<"------ Enter your grades in 'A,B,C,D,E' form ------"<<endl;
    for(int i=0;i<subjects;i++)
    {
        cout<<"Enter the grades for "<<i+1<<" subject :";cin>>grades[i];
        cout<<"Enter the credit hours for "<<i+1<<" subject :";cin>>credit_hours[i];
        
        if(grades[i]=='A')
        grade_points = 4.0*credit_hours[i];
        if(grades[i]=='B')
        grade_points = 3.0*credit_hours[i];
        if(grades[i]=='C')
        grade_points = 2.0*credit_hours[i];
        if(grades[i]=='D')
        grade_points = 1.0*credit_hours[i];
        if(grades[i]=='F')
        grade_points = 0.0*credit_hours[i];
        
        sum1+=credit_hours[i];
        sum2+=grade_points;
    }

    cout<<"Your Credit hours : "<<sum1<<endl;
    cout<<"Your grade points : "<<sum2<<endl;
    cout<<"Your GPA is equal is "<<sum2/sum1<<endl;
    return 0;
}

