// (.h) file is recommended to be use for class declaration
#include<iostream>
using namespace std;
class Employee
{
    private:
    string name;
    string Employee_ID;// string is used to store number even like 023,00034 as well
    double Basic_salary;
    public:
    void set_data();
    double calculate_bonus();
    void display_details();
};