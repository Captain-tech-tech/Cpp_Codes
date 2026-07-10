// Concept	      Relationship	  Ownership	            Lifetime Dependency
// Association	  Uses	          No ownership	        Independent
// Aggregation	  Has-A	          Weak ownership	    Independent
// Composition	  Part-Of	      Strong ownership	    Dependent

// Association means two independent classes are related to each other, but both can exist separately.
// Teacher and Student
// #include <iostream>
// using namespace std;
// class Student
// {
// public:
//     string name;
//     Student(string n)
//     {
//         name = n;
//     }
//     void display()
//     {
//         cout << "Student Name: " << name << endl;
//     }
// };
// class Teacher
// {
// public:
//     string teacherName;
//     Teacher(string t)
//     {
//         teacherName = t;
//     }
//     void teach(Student &s)
//     {
//         cout << teacherName << " is teaching " << s.name << endl;
//     }
// };
// int main()
// {
//     Student s1("Atif");
//     Teacher t1("Sir Ahmed");
//     s1.display();
//     t1.teach(s1);
//     return 0;
// }



// Doctor and Patient
// #include <iostream>
// using namespace std;

// class Patient
// {
// public:
//     string patientName;

//     Patient(string p)
//     {
//         patientName = p;
//     }
// };

// class Doctor
// {
// public:
//     string doctorName;

//     Doctor(string d)
//     {
//         doctorName = d;
//     }

//     void treatPatient(Patient &p)
//     {
//         cout << "Doctor " << doctorName
//              << " is treating "
//              << p.patientName << endl;
//     }
// };

// int main()
// {
//     Patient p1("Ali");
//     Doctor d1("Dr. Khan");

//     d1.treatPatient(p1);

//     return 0;
// }



// Aggregation means:One class contains another class object/reference, but contained object can still exist independently.
// It is called: HAS-A relationship, Weak ownership

// Department and teacher
// #include <iostream>
// using namespace std;

// class Teacher
// {
// public:
//     string name;

//     Teacher(string n)
//     {
//         name = n;
//     }
// };

// class Department
// {
// private:
//     Teacher *teacher;

// public:
//     Department(Teacher *t)
//     {
//         teacher = t;
//     }

//     void display()
//     {
//         cout << "Department Teacher: "
//              << teacher->name << endl;
//     }
// };

// int main()
// {
//     Teacher t1("Sir Ahmed");

//     Department d1(&t1);

//     d1.display();

//     return 0;
// }



// Library and Book 
// #include <iostream>
// using namespace std;

// class Book
// {
// public:
//     string title;

//     Book(string t)
//     {
//         title = t;
//     }
// };

// class Library
// {
// private:
//     Book *book;

// public:
//     Library(Book *b)
//     {
//         book = b;
//     }

//     void showBook()
//     {
//         cout << "Library Book: "
//              << book->title << endl;
//     }
// };

// int main()
// {
//     Book b1("C++ Programming");

//     Library l1(&b1);

//     l1.showBook();

//     return 0;
// }



// Composition means:One class completely owns another class object.
// Strong relationship. If container destroyed → contained object also destroyed.

// Car and Engine
// #include <iostream>
// using namespace std;

// class Engine
// {
// public:
//     Engine()
//     {
//         cout << "Engine Created" << endl;
//     }

//     void start()
//     {
//         cout << "Engine Started" << endl;
//     }

//     ~Engine()
//     {
//         cout << "Engine Destroyed" << endl;
//     }
// };

// class Car
// {
// private:
//     Engine e; // Composition

// public:
//     Car()
//     {
//         cout << "Car Created" << endl;
//     }

//     void run()
//     {
//         e.start();
//         cout << "Car Running" << endl;
//     }

//     ~Car()
//     {
//         cout << "Car Destroyed" << endl;
//     }
// };

// int main()
// {
//     Car c1;

//     c1.run();

//     return 0;
// }



// House and Room
// #include <iostream>
// using namespace std;

// class Room
// {
// public:
//     Room()
//     {
//         cout << "Room Constructed" << endl;
//     }

//     ~Room()
//     {
//         cout << "Room Destroyed" << endl;
//     }
// };

// class House
// {
// private:
//     Room r1;
//     Room r2;

// public:
//     House()
//     {
//         cout << "House Constructed" << endl;
//     }

//     ~House()
//     {
//         cout << "House Destroyed" << endl;
//     }
// };

// int main()
// {
//     House h1;

//     return 0;
// }






// association
// #include<iostream>
// using namespace std;
// class Student
// {
//     public:
//     string name;
//     Student(string n)
//     {
//         name=n;
//     }
// };
// class Teacher
// {
//     string name;
//     public:
//     Teacher(string n)
//     {
//         name=n;
//     }
//     void display(Student s)
//     {
//         cout<<name<<" is the teacher of student "<<s.name<<endl;
//     }
// };
// int main()
// {
//     Student s1("Atif");
//     Teacher t1("Ehtisham");
//     t1.display(s1);
//     return 0;
// }



// Aggregation Code
// #include<iostream>
// #include<cstring>
// using namespace std;
// class Employee
// {
//     char* ename;
//     public:
//     Employee(const char *name)
//     {
//         ename=new char[strlen(name)+1];
//         strcpy(ename,name);
//     }
//     char* dis()
//     {
//         cout<<endl<<endl;
//         return (ename);
//     }
// };
// class Company
// {
//     char* cname;
//     Employee* emp;
//     public:
//     Company(const char* com,Employee* e)
//     {
//         cname=new char[strlen(com)+1];
//         strcpy(cname,com);
//         this->emp=e;
//     }
// };
// int main()
// {
//     {
//         cout<<"Here is the start of Employee scope"<<endl;
//         Employee emp("ABC");
//         cout<<emp.dis()<<endl;
//         {
//             Company comp("XYZ",&emp);
//         }
//         cout<<"Here company limits are end after the above curly braces"<<endl;
//         cout<<emp.dis()<<endl;
//     }
//     return 0;
// }


// compsition
// #include<iostream>
// using namespace std;
// class Option
// {
//     string optiontext;
//     public:
//     Option(string op)
//     {
//         optiontext=op;
//     }
//     void showoption()
//     {
//             cout<<optiontext<<endl;
//     }
// };
// class Question
// {
//     private:
//     string statement;
//     Option o1,o2,o3,o4;
//     public:
//     Question(string s,string a,string b,string c,string d):statement(s),o1(a),o2(b),o3(c),o4(d){}
//     void display()
//     {
//         cout<<"Question : "<<statement<<endl;
//         o1.showoption();
//         o2.showoption();
//         o3.showoption();
//         o4.showoption();
//     }
// };
// int main()
// {
//     Question q1(
//         "C++","True","False","May True","May False"
//     );
//     q1.display();
//     return 0;
// }


