//static members belong to the class, not to individual object. Static members must be defined outside class
// Stored in class memory, not per object
// static variables are present in [Data Segment] portion of the memory
// static member function : can only access static data members of the class, not instance members
// Static member functions can be called without creating any class objects
// When a data member is static, there will be only one copy of it in memory, regardless of the
// number of instances of the class that might exist. A single copy of a class’s static member variable
// static member function can be accessed through both class name and object
// it seems like golbal but have only class scope

// Constant members must be initialized using member initializer list



// code for static and const data member declaration and defintion
// #include<iostream>
// using namespace std;
// class Student
// {
//     string name;
//     static int num;
//     const int age;
//     public:
//     Student(int n):age(n)
//     {
//         cout<<"Enter Your Name : ";
//         getline(cin>>ws,name);
//         num++;
//     }
//     static int numm()
//     {
//         return num;
//     }
//     static void Num_increase()
//     {
//         cout<<"Current Student Size is : "<<num<<endl;
//         num+=2;
//         cout<<"2 students were added, now student strength is : "<<num<<endl;
//     }
// };
// int Student::num=0;
// int main()
// {
//     cout<<Student::numm();   // when cout<<Student::numm;   is written, it gives unspected value based on comppiler
//     cout<<endl;
//     Student S1(22);
//     cout<<endl;
//     cout<<Student::numm();
//     cout<<endl;
//     Student S2(45);
//     cout<<Student::numm();
//     S1.Num_increase();
//     cout<<Student::numm()<<endl;
//     return 0;
// }



// code showing use of static data member
// #include<iostream>
// using namespace std;
// class Student
// {
//     public:
//     string name;
//     static int stu_count;
//     Student(string n)
//     {
//         name=n;
//         stu_count++;    
//     }
// };
// int Student::stu_count=0; // definition and initialization outside the class, b/c to allocate memory
// // :: means access the static variable 'stu_count' inside the 'Student' class.
// int main()
// {
//     Student s1("Muhammad Atif");
//     Student s2("Muhammad Ammar");
//     cout<<"Total Students : "<<Student::stu_count<<endl;
//     return 0;
// }


// code showing static member function
// #include<iostream>
// using namespace std;
// class Student
// {
//     private:
//     static int stu_count;
//     string name;
//     public:
//     static void display() // static member function can't access name, b/c it is nonstatic data member
//     {
//         cout<<"Student Count : "<<stu_count<<endl;
//     }
//     void dis()
//     {
//         cout<<stu_count<<endl;
//     }
// };
// int Student::stu_count=5;
// int main()
// {
//     // can be accessed through both class name and object name
//     Student::display();
//     Student s1;
//     s1.display();
//     s1.dis();
//     return 0;
// }



// very very important code  
// static function can be call through class name, while non-static function call through class name gives error
// #include<iostream>
// using namespace std;
// class Student
// {
//     private:
//     static int count;
//     public:
//     static int dis_count()
//     {
//         return count;
//         count++;
//     }
//     void dis()
//     {
//         cout<<"Your count : "<<count<<endl;
//     }
//     int diss()    // this will give an error, as invalid use of non-static member function
//     {
//         return count;
//     }
// };
// int Student::count=0;
// int main()
// {
//     cout<<Student::dis_count()<<endl;
//     Student S1;
//     S1.dis();
//     cout<<S1.diss()<<endl;
//     // cout<<Student::diss<<endl; // this call will give error
//     return 0;
// }



// code showing list initializer      constructors has no return type 
// #include<iostream>
// using namespace std;
// class Test
// {
//     private:
//     float paper1;
//     float paper2;
//     float total_marks;
//     public:
//     Test();
// // inline list initialiazer
//     Test(float p1,float p2):paper1(p1),paper2(p2),total_marks(p1+p2){}
//     void get_data()
//     {
//         cout<<"Paper (1) marks : "<<paper1<<endl;
//         cout<<"Paper (2) marks : "<<paper2<<endl;
//         cout<<"Total marks : "<<total_marks<<endl;
//     }
// };
// // out of line list initializer
// Test::Test():paper1(0.0),paper2(0.0),total_marks(paper1+paper2){}
// int main()
// {
//     Test t1(56.45,65.3);
//     Test t2(89.23,82.5);
//     t1.get_data();
//     t2.get_data();
//     return 0;
// }


// very very important code of list initializer
// #include<iostream>
// using namespace std;
// class Test
// {
//     private:
//     int num1;
//     int num2;
//     public:
//     // Test(int i, int j):num1(i),num2(j)
//     // Test(int i, int j):num1(i),num2(i+j)
//     // Test(int i, int j):num1(i),num2(2*j)
//     // Test(int i, int j):num1(i),num2(num1+j)
//     Test(int i, int j):num2(j),num1(i+num2) //this will create problem, here num1 will store garbage value b/c num1 will be initialized first, as in private member it is writtien first 
//     {
//         cout<<"Constructor executed"<<endl;
//         cout<<"Marks of subject (1) : "<<num1<<endl;
//         cout<<"Marks if subject (2) ; "<<num2<<endl;
//     }
// };
// int main()
// {
//     int n1,n2;
//     cout<<"Enter two numbers : ";
//     cin>>n1>>n2;
//     Test t1(n1,n2);
//     return 0;
// }


// properties of friend function
// 1) not in the scope of class
// 2) since it is not in the scope of class, it cannot be called from the object of that class, c1.sumcomplex()=Invalid.
// 3) can be invoked without the help of any object
// 4) usually contain the objects as arguments
// 5) can be declared inside the public or private section of the class
// 6) friend function can't access the member of class directly by name, and need object_name.member_name to access any member



// adding two complex number through friend function
// #include<iostream>
// using namespace std;
// class Complex
// {
//   friend Complex sum_complex(Complex,Complex);  
//   private:
//   int num1;
//   int num2;
//   public:
//   void set_data()
//   {
//     cout<<"Marks (1) : ";
//     cin>>num1;
//     cout<<"Marks (2) : ";
//     cin>>num2;
//   }  
//   void display()
//   {
//     cout<<endl<<num1<<"   "<<num2<<endl;
//   }
// };
// Complex sum_complex(Complex o1,Complex o2)
// {
//     Complex o3;
//     o3.num1=o1.num1+o2.num1;
//     o3.num2=o1.num2+o2.num2;
//     return o3;
// }
// int main()
// {
//     Complex C1,C2;
//     cout<<"Enter first object data "<<endl;
//     C1.set_data();
//     cout<<"Enter second object data "<<endl;
//     C2.set_data();
//     Complex C3=sum_complex(C1,C2);
//     C1.display();
//     C2.display();
//     C3.display();
//     return 0;
// }



// adding values in a function from two different classes
// #include<iostream>
// using namespace std;
// class Y;
// class X
// {
//     int data1;
//     public:
//     friend void sum(X,Y);
//     void set()
//     {
//         cout<<"Enter data1 value : ";
//         cin>>data1;
//     }
//     void display()
//     {
//         cout<<"data1 : "<<data1<<endl;
//     }
//     ~X()
//     {
//         cout<<endl<<"X destructor"<<endl;
//     }
// };
// class Y
// {
//     friend void sum(X,Y);
//     int data2;
//     public:
//     void set()
//     {
//         cout<<"Enter data2 value : ";
//         cin>>data2;
//     }
//     void display()
//     {
//         cout<<"data2 : "<<data2<<endl;
//     }
//     ~Y()
//     {
//         cout<<"Y destructor"<<endl;
//     }
// };
// void sum(X o1,Y o2)
// {
//     cout<<"The sum of data1 and data2 : "<<o1.data1+o2.data2;
// }
// int main()
// {
//     X x1;
//     x1.set();
//     Y y1;
//     y1.set();
//     x1.display();
//     y1.display();
//     sum(x1,y1);
//     return 0;
// }

// swipping without using third variable
// #include<iostream>
// using namespace std;
// int main()
// {
//     int a=23;
//     int b=54;
//     a=a+b; // 1 2 = 3
//     b=a-b;  // 3 - 2 = 1
//     a=a-b;  // 3 - 1 = 2
//     cout<<a<<endl<<b<<endl;
//     return 0;
// }

// swipping values of two classes data members by using friend function and reference passing
// #include<iostream>
// using namespace std;
// class Y;
// class X
// {
//     friend void swip(X &,Y &);
//     int data1;
//     public:
//     void set()
//     {
//         cout<<"Enter data1 : ";
//         cin>>data1;
//     }
//     void display()
//     {
//         cout<<"data1 : "<<data1<<endl;
//     }
// };
// class Y
// {
//     int data2;
//     public:
//     friend void swip(X &,Y &);
//     void set()
//     {
//         cout<<"Enter data2 : ";
//         cin>>data2;
//     }
//     void display()
//     {
//         cout<<"data2 : "<<data2<<endl;
//     }
// };
// void swip(X &o1,Y &o2) // objects should be passed by reference, otherwise swipping will not occur
// {
//     int temp=o1.data1;
//     o1.data1=o2.data2;
//     o2.data2=temp;
// }
// int main()
// {
//     X x1;x1.set();
//     Y y1;y1.set();
//     cout<<"Before Swipping"<<endl;
//     x1.display();
//     y1.display();
//     cout<<"After Swipping"<<endl;
//     swip(x1,y1);
//     x1.display();
//     y1.display();
// }





// very very important
// adding real part of complex number
// #include<iostream>
// using namespace std;
// // forward declaration
// class Complex;
// class Calculator
// {
//     int a,b;
//     public:
//     int add(int a, int b)
//     {
//         return (a+b);
//     }
//     int sumrealcomplex(Complex ,Complex);
// };
// class Complex
// {
//     private:
//     int a,b;
//     friend int Calculator::sumrealcomplex(Complex,Complex);
//     public:
//     void set_number(int n1, int n2)
//     {
//         a=n1;
//         b=n2;
//     }
//     void display()
//     {
//         cout<<"Your number is "<<a<<" + "<<b<<"i"<<endl;
//     }
// };
// int Calculator::sumrealcomplex(Complex o1, Complex o2)
// {
//     return (o1.a+o2.a);
// }
// int main()
// {
//     Complex o1,o2;
//     o1.set_number(5,3);
//     o2.set_number(7,9);
//     Calculator cal;
//     int real_part=cal.sumrealcomplex(o1,o2);
//     cout<<"The sum of real part of o1 and o2 is "<<real_part<<endl;
//     return 0;
// }

