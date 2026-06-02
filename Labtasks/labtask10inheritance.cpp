// Inheritance code
#include <iostream>
using namespace std;
class Person  // Base class
{
    string name;
    int age;

public:
// method for data entry
    void set_personDetails()
    {
        cout << "Enter your name : ";
        getline(cin >> ws, name);
        cout << "Enter your age : ";
        cin >> age;
    }
    void display_personDetails()
    {
        cout << "Student Name : " << name << endl;
        cout << "Student Age  : " << age << endl;
    }
    int cond1() // condition 1 for scholarship
    {
        return age;
    }
};
// child or derived class AcademicRecord from Base class Person
class AcademicRecord : virtual public Person
{
    // private data members of derived class
    float gpa;
    string major;

public:
    void set_AcademicDetails()
    {
        cout << "Enter your GPA : ";
        cin >> gpa;
        cout << "Enter your Major : ";
        getline(cin >> ws, major);
    }
    void display_AcademicDetails()
    {
        cout << "Student GPA : " << gpa << endl;
        cout << "Student Major : " << major << endl;
    }
    float cond2() // condition 2 for scholarship
    {
        return gpa;
    }
};
// derived or child class Scholarship from base class Person and AcademicRecord
class Scholarship : virtual public Person, virtual public AcademicRecord
{
    double scholarshipAmount;

public:
    void evaluate_scholarship()
    {
        set_personDetails();
        set_AcademicDetails();
        if (cond1() < 25 && cond2() >= 3.5)
            scholarshipAmount = 50000;
        else
            scholarshipAmount = 0.0;
    }
    // member function for displaying all data of a student
    void display_scholarship_details()
    {
        cout<<endl<<endl;
        display_personDetails();
        display_AcademicDetails();
        cout<<"Student has been assign "<<scholarshipAmount<<" scholarship per semester"<<endl;
    }
};
// start of main class
int main()
{
    // creating class objects and then evaluating scholarship
    Scholarship S1;
    S1.evaluate_scholarship();
    Scholarship S2;
    S2.evaluate_scholarship();
    Scholarship S3;
    S3.evaluate_scholarship();
    // displaying scholarship details of student 
    S1.display_scholarship_details();
    S2.display_scholarship_details();
    S3.display_scholarship_details();
    return 0;
}






