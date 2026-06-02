// Question # 03 main function
#include<iostream>
#include "labtask7question3.h"
// start of main function
int main()
{
    cout<<"+------Enter 1 employee data-------+"<<endl;
    Employee e1; // making object of class Employee
    cout<<"+------Enter 2 employee data-------+"<<endl;
    Employee e2;
    cout<<"+------Enter 3 employee data-------+"<<endl;
    Employee e3;
    cout<<"+------Enter 4 employee data-------+"<<endl;
    Employee e4;
    cout<<endl<<"```~~~First Employee~~~```"<<endl;
    e1.get_details(); // displaying emplpoyee details
    cout<<endl<<"```~~~Second Employee~~~```"<<endl;
    e2.get_details();
    cout<<endl<<"```~~~Third Employee~~~```"<<endl;
    e3.get_details();
    cout<<endl<<"```~~~Fourth Employee~~~```"<<endl;
    e4.get_details();
    return 0;
}
