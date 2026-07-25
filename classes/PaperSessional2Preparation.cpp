// final oop lab preparation




















































// static data member
// #include<iostream>
// #include<string>
// using namespace std;
// class LibraryBook
// {
// private:
//     string bookName;
//     static int counter;
// public:
//     // Constructor
//     LibraryBook(string name)
//     {
//         if(counter < 5)
//         {
//             bookName = name;
//             counter++;
//             cout << "Book Added : " << bookName << endl;
//             cout << "Current Books = " << counter << endl;
//         }
//         else
//         {
//             cout << "Library is full, cannot add more books." << endl;
//         }
//     }
//     // Destructor
//     ~LibraryBook()
//     {
//         if(counter > 0)
//         {
//             cout << "Book Removed : " << bookName << endl;
//             counter--;
//             cout << "Current Books = " << counter << endl;
//         }
//     }
//     // Static Function
//     static void showBooksCount()
//     {
//         cout << "Total Books in Library : " << counter << endl;
//     }
// };
// // Static variable initialization
// int LibraryBook::counter = 0;
// int main()
// {
//     LibraryBook b1("C++");
//     LibraryBook b2("OOP");
//     LibraryBook b3("DSA");
//     LibraryBook b4("AI");
//     LibraryBook b5("DBMS");
//     // This one should not be added
//     LibraryBook b6("OS");
//     cout << endl;
//     LibraryBook::showBooksCount();
//     return 0;
// }





// // A const member function is read-only, cannot change the value of any attribute
// class Rectangle
// {
// private:
// double width;
// public:
// void changeWidth() const {
// width++; //ERROR }
// };




// slide number 43



// 'A' class having const and static variables
// #include<iostream>
// using namespace std;
// class A
// {
//     const int a;
//     static int b;
//     static float c;
//     public:
//     A(int x):a(x)
//     {
//         b++;
//         c++;
//     }
//     void display()
//     {
//         cout<<a<<endl<<b<<endl<<c<<endl<<endl<<endl;
//     }
// };
// float A::c=0.0;
// int A::b=0;
// int main()
// {
//     A a1(89);
//     a1.display();
//     A a2(67);
//     a2.display();
//     A a3(56);
//     A a4(78);
//     A a5(231);
//     A a6(98);
//     a1.display();
//     a2.display();
//     a3.display();
//     a4.display();
//     a5.display();
//     a6.display();
//     return 0;
// }




// #include<iostream>
// using namespace std;
// class Employee
// {
//     string id;
//     int months;
//     double *salary;
//     public:
//     Employee()
//     {
//         cout<<"Enter your ID : ";
//         cin>>id;
//         cout<<"Enter number of months : ";
//         cin>>months;
//         salary=new double[months];
//         cout<<"Enter salaries for "<<months<<" months : ";
//         for(int i=0;i<months;i++)
//         {
//             cin>>salary[i];
//         }
//     }
//     Employee(const Employee &obj)
//     {
//         id=obj.id;
//         months=obj.months;
//         salary=new double[months];
//         for(int i=0;i<months;i++)
//         {
//             salary[i]=obj.salary[i];
//         }
//     }
//     // = assignment operator
//     Employee& operator=(const Employee &obj)
//     {
//         if(this==&obj)
//         return *this;
//         else
//         {
//             id=obj.id;
//             months=obj.months;
//             delete[] salary;
//             salary=new double[months];
//             for(int i=0;i<months;i++)
//             {
//                 salary[i]=obj.salary[i];
//             }
//         }
//         return *this;
//     }
//     void display()
//     {
//         cout<<"ID : "<<id<<endl;
//         cout<<"Months : "<<months<<endl;
//         cout<<"Salaries : ";
//         for(int i=0;i<months;i++)
//         {
//             cout<<salary[i]<<", ";
//         }
//         cout<<endl;
//     }
//     ~Employee()
//     {
//         delete[] salary;
//         salary=nullptr;
//     }
// };
// int main()
// {
//     Employee a1;
//     Employee a2=a1;
//     Employee a3;
//     a3=a2;
//     a1.display();
//     a2.display();
//     a3.display();
//     return 0;
// }



// cascading
// #include<iostream>
// using namespace std;
// class Employee
// {
//     int id;
//     float salary;
//     string name;
// public:
//     Employee& setid(int x)
//     {
//         id = x;
//         return *this;
//     }
//     Employee& setsalary(float y)
//     {
//         salary = y;
//         return *this;
//     }
//     Employee& setname(string n)
//     {
//         name = n;
//         return *this;
//     }
//     void display()
//     {
//         cout<<"Name : "<<name<<endl;
//         cout<<"Salary : "<<salary<<endl;
//         cout<<"ID : "<<id<<endl;
//     }
// };
// int main()
// {
//     Employee e1;
//     e1.setid(45).setsalary(6879.23).setname("Atif").display();
//     return 0;
// }




// friend function
// class ClassName {
    // friend return_type functionName(arguments);
// };
// Friend function definition (outside the class)
// return_type functionName(arguments) {
    // Body of the function
    // Can access private members of ClassName using an object
// }






// code for class A value by class C indirectly through class B
// #include<iostream>
// using namespace std;
// class B;
// class C;
// class A
// {
//     int a;
//     public:
//     A()
//     {
//         a=0;
//     }
//     void display()
//     {
//         cout<<"'A' class 'a' data member value : "<<a<<endl;
//     }
//     friend class B;
// };
// class B
// {
//     public:
//     bool check(int value,A &obj)
//     {
//         if(value>=0 && value<=100)
//         {
//             obj.a=value;
//             return true;
//         }
//         else 
//         return false;
//     }
//     friend class C;
// };
// class C
// {
//     int num;
//     public:
//     C(int x)
//     {
//         num=x;
//     }
//     void process(B &b,A &a)
//     {
//         if(b.check(num,a))
//         cout<<"Value Updated successfully!"<<endl;
//         else
//         cout<<"Invalid Input, out of range(0-100)!"<<endl;
//     }
// };
// int main()
// {
//     A a;
//     B b;
//     C c1(232);
//     C c2(34);
//     a.display();
//     c1.process(b,a);
//     a.display();
//     c2.process(b,a);
//     a.display();
//     return 0;
// }















// output code
// #include<iostream>
// #include<cstring>
// using namespace std;
// int main()
// {
//     char c[10];
//     strcpy(c,"Hello");
//     cout<<&c[0]<<endl;
//     // cout<<c<<endl;
//     // cout<<&c[1]<<endl;
//     return 0;
// }




















