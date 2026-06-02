#include<iostream>
#include "class_header.h"
using namespace std;
int main()
{
    Employee e1; // first object
    cout<<"Enter details of Employee(1)"<<endl;
    e1.set_data();
    Employee e2; // second object
    cout<<"Enter details of Employee(2)"<<endl;
    e2.set_data();
    e1.display_details(),e2.display_details();
    return 0;
}



