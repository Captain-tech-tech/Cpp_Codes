// .cpp is recommended to be use for class implementation
#include<iostream>
#include "class_header.h"
using namespace std;
void Employee :: set_data()
{
    cout<<"Enter your name : ";
    getline(cin,name);
    cout<<"Enter your ID number : ";
    getline(cin,Employee_ID);
    cout<<"Enter your basic salary : ";
    cin>>Basic_salary;
    cin.ignore();
}
// functon for to calculate bonus of the employee
double Employee :: calculate_bonus()
{
    double bonus=Basic_salary*0.10; // 10% bonus
    return bonus;
}
// method or function for displaying information of employee
void Employee :: display_details()
{
    cout<<endl<<"Name : "<<name<<endl;
    cout<<"Employee ID number : "<<Employee_ID<<endl;
    cout<<"Basis Salary : "<<Basic_salary<<endl;
    cout<<"Bonus : "<<calculate_bonus();
    cout<<endl<<"Final Salary ; "<<Basic_salary+calculate_bonus();
}












