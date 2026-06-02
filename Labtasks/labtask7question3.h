// Question # 03 header file
#include<iostream>
using namespace std;
// class declaration
class Employee
{
    // private data members
    private:
    string name;
    string employee_id;
    double basic_salary;
    public:
    //member functions prototypes
    Employee();
    double calculate_bonus();
    void get_details();
};





// for running code in terminal
// g++ hello.cpp  second.cpp -o hello 
// ./hello
