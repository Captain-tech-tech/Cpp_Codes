#include<string>
#include<iostream>
using namespace std;
class Account
{
    // data members
    string name;
    double balance;
    public:
    // member functions 
    void set_data(string n,double amount) // inline function
     {
        name=n;
        balance=amount;
     }
    void get_data()// inline function
    {
        cout<<"Name : "<<name<<endl;
        cout<<"Balance : $"<<balance<<endl;
    } 
    void withdraw(double amount);// out of line function
    void deposit(double amount); // out of line function
};


sd