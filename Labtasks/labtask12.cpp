// compostion question
// #include<iostream>
// using namespace std;
// // Class to store medical record details
// class MedicalRecord
// {
//     // Data members
//     string disname;          // Disease name
//     double roomcharges;      // Charges for hospital room
//     double treatmentcost;    // Cost of treatment
//     double totalcharges;     // Total charges
//     public:
//     // Parameterized constructor
//     // Initializes disease name, room charges, treatment cost
//     // and calculates total charges
//     MedicalRecord(string d,double r,double t)
//     {
//         disname=d;
//         roomcharges=r;
//         treatmentcost=t;
//         // Calculating total charges
//         totalcharges=roomcharges+treatmentcost;
//     }
//     // Function to display medical record details
//     void display()
//     {
//         cout<<"Disease Name : "<<disname<<endl;
//         cout<<"Room Charges : "<<roomcharges<<endl;
//         cout<<"Treatment Cost : "<<treatmentcost<<endl;
//         cout<<"Total Cost : "<<totalcharges<<endl;
//     }
// };
// // Class to store patient admission details
// class PatientAdmission
// {
//     // Data members
//     string admissionid;      // Admission ID of patient
//     string patientname;      // Name of patient
//     // Composition:
//     // PatientAdmission class contains an object of MedicalRecord class
//     MedicalRecord med;
//     public:
//     // Parameterized constructor
//     // Uses initializer list to initialize MedicalRecord object
//     PatientAdmission(string a,string b,string c,double r,double t)
//         : med(a,r,t)
//     {
//         admissionid=b;
//         patientname=c;
//     }
//     // Function to display patient admission data
//     void showdata()
//     {
//         // Display medical record details
//         med.display();
//         // Display admission information
//         cout<<admissionid<<endl;
//         cout<<patientname<<endl;
//     }
// };
// // Main function
// int main()
// {
//     // Creating object of PatientAdmission class
//     PatientAdmission pa("Corona","h#i3v23","No Body",34532,2352);
//     // Calling function to display complete information
//     pa.showdata();
//     return 0;
// }

#include<iostream>
using namespace std;
// Class representing a Professor
class Professor
{
    // Data members
    string id;        // Professor ID
    string name;      // Professor name
    string special;   // Specialization / qualification
    public:
    // Parameterized constructor
    // Uses initializer list to initialize data members
    Professor(string i,string n,string s):id(i),name(n),special(s){}
    // Function to display professor information
    void dis()
    {
        cout<<id<<endl;
        cout<<name<<endl;
        cout<<special<<endl;
    }
};
// Class representing a Department
class Department
{
    // Data members
    string name;       // Department name
    // Pointer to Professor object
    // This represents Aggregation relationship
    // Department uses Professor object but does not own it
    Professor *pro;
    public:
    // Parameterized constructor
    // Receives department name and address of Professor object
    Department(string n,Professor* p)
    {
        name=n; 
        pro=p;
    }
    // Function to display department information
    void dis()
    {
        cout<<name<<endl;
        // Calling Professor class display function
        // using pointer operator
        pro->dis();
    }
};
// Main function
int main()
{
    // Creating Professor object
    Professor p("3345g#qrv","Zakria Bacha","MS Computer Science");
    // Displaying professor information
    p.dis();
    {
        // Creating Department object
        // Passing address of Professor object
        Department dep("Artificial Intelligence",&p);
        // Displaying department information
        dep.dis();
    }
    // Professor object still exists after Department object is destroyed
    // This proves Aggregation relationship
    p.dis();
    return 0;
}
