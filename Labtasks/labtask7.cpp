// Question # 01
// Program showing Constructor overloading
// #include<iostream>
// using namespace std;
// // start of the class
// class Student
// {
//     private:
//     string name;
//     string roll_number; // string data type is used to store all kind of roll_numbers
//     double marks;
//     public:
//     // Default constructot
//     Student()
//     {
//         name="Excellent Student";
//         roll_number="25-p-0053";
//         marks=1080;
//     }
//     // parametarize constructor
//     Student(string n,string r,double m)
//     {
//         name=n;
//         roll_number=r;
//         marks=m;
//     }
//     // getter function for displaying details
//     void get_data()
//     {
//         cout<<endl<<"Name : "<<name<<endl;
//         cout<<"Roll Number : "<<roll_number<<endl;
//         cout<<"Marks : "<<marks<<endl;
//     }
// };
// // start of main function
// int main()
// {
//     Student s1; // calling default constructor
//     Student s2("Muhammad Atif","25-p-0001",1074.45); // calling parametrize constructor
//     Student s3("Muhammad Adeel","25-p-9023",1023.34);
//     s1.get_data(); // calling setter function
//     s2.get_data();
//     s3.get_data();
//     return 0;
// }


//  Question # 02
// Constructor overloading
// #include <iostream>
// using namespace std;
// // start of the class
// class Result 
// {
//     private: 
//     // private data members
//     string name;
//     int rollNo;
//     float marks[5];
//     public:
//     // Default constructor
//     Result() 
//     {
//         name = "New Student";
//         rollNo = 8909;
//         for (int i = 0; i < 5; i++) {
//             marks[i] = 0.0;
//         }
//     }
//     // Parameterized constructor
//     Result(string n, int r, float m[]) 
//     {
//         name = n;
//         rollNo = r;
//         for (int i = 0; i < 5; i++) {
//             marks[i] = m[i];
//         }
//     }
//     // Method to calculate average
//     float calculateAverage() 
//     {
//         float sum = 0;
//         for (int i = 0; i < 5; i++) {
//             sum += marks[i];
//         }
//         return sum / 5;
//     }
//     // Method to display result
//     void displayResult() 
//     {
//         cout <<endl<< "Student Name: " << name;
//         cout <<endl<< "Roll Number: " << rollNo;
//         cout <<endl<< "Marks in 5 subjects: ";
//         for (int i = 0; i < 5; i++) {
//             cout<<marks[i]<<" ";
//         }
//         float avg=calculateAverage();
//         cout << "\nAverage Marks: " << avg;
//         if (avg >= 50)
//             cout<<endl<< "Status: Pass";
//         else
//             cout<<endl<< "Status: Fail";
//         cout<<endl;
//     }
// };
// // start of main function
// int main() 
// {
//     // Using default constructor
//     Result student1;
//     // Using parameterized constructor
//     float marks[5] = {60, 70, 55, 80, 65};
//     Result student2("Ali", 101, marks);
//     // Display results
//     cout<<endl<< "Student 1";
//     student1.displayResult();
//     cout<<endl<< "Student 2 ";
//     student2.displayResult();
//     return 0;
// }


