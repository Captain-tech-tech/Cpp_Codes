// Question # 03 functions
#include<iostream>
#include "labtask7question3.h"
using namespace std;
// constructor for input data
Employee::Employee()
{
    cout<<"Enter your name : ";
    getline(cin>>ws,name);
    cout<<"Enter your employee ID : ";
    getline(cin>>ws,employee_id);
    cout<<"Enter your basic salary : ";
    cin>>basic_salary;
}
// funtion for calculating bonus based on salary
double Employee::calculate_bonus()
{
    double bonus;
    bonus=basic_salary*0.1;
    return bonus;
}
// function for displaying all details
void Employee::get_details()
{
    cout<<endl<<"Name : "<<name<<endl;
    cout<<"Employee ID : "<<employee_id<<endl;
    cout<<"Basic Salary : "<<basic_salary<<endl;
    cout<<"10% Bonus : "<<calculate_bonus()<<endl;
    cout<<"Final Salary (with 10% bonus) : "<<basic_salary+calculate_bonus()<<endl;
}
