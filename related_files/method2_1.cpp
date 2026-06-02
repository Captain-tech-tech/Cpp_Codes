#include<iostream>
#include<string>
#include "module2.h"
using namespace std;
int main()
{
    Account person1;
    string name;
    cout<<"Enter your name : ";
    getline(cin,name);
    double amount;
    cout<<"Enter your bank amount : ";
    cin>>amount;
    person1.set_data(name,amount);
    person1.get_data();
    person1.deposit(1000.23);
    person1.withdraw(300.45);
    person1.get_data();
    return 0;
}