// in operator overloading the function must be non-static



//  + operator overloading   important code
// #include<iostream>
// using namespace std;
// class Complex
// {
//     private:
//     int real,imag;
//     public:
//     Complex()
//     {}
//     Complex(int r,int i):real(r),imag(i)
//     {}
//     // + operator overloading without creating the obj in method
//     // Complex operator+(const Complex num)
//     // {
//     //     return Complex(real+num.real,imag+num.imag);
//     // }
//     // by creating the object
//     Complex operator+(const Complex num)
//     {
//         Complex temp;
//         temp.real=this->real+num.real;
//         temp.imag=this->imag+num.imag;
//         return temp;
//     }
//     void display()
//     {
//         cout<<"The complex number is "<<real<<"+"<<imag<<"i"<<endl;
//     }
// };
// int main()
// {
//     Complex c1(23,56),c2(90,12),c3=c1+c2;
//     c1.display();
//     c2.display();
//     c3.display();
//     return 0;
// }



// == operator overloading
// #include<iostream>
// using namespace std;
// class checking
// {
//     int num1,num2;
//     public:
//     checking(int n1,int n2):num1(n1),num2(n2)
//     {}
//     bool operator==(const checking &num)
//     {
//         return (num1==num.num1 && num2==num.num2);
//     }
// };
// int main()
// {
//     checking c1(1,2),c2(1,2),c3(1,4);
//     if(c1==c2)
//     cout<<"True 1"<<endl;
//     else
//     cout<<"False 1"<<endl;
//     if(c2==c3)
//     cout<<"True 2"<<endl;
//     else
//     cout<<"False 2"<<endl;
//     return 0;
// }

// object + int   operator overloading
// #include<iostream>
// using namespace std;
// class Addition
// {
//     int num1;
//     public:
//     Addition(int n):num1(n)
//     {}
//     int operator+(int num)
//     {
//         return (this->num1+num);
//     }
//     int get()
//     {
//         return num1;
//     }
// };
// int main()
// {
//     Addition obj1(56);
//     int a=34;
//     int b=obj1+a;  // here obj1 is the calling oject and the a is the parameter
//     // int c=a+obj1;   // this will give an error b/c mismatch types
//     cout<<a<<endl;
//     cout<<obj1.get()<<endl;
//     cout<<b<<endl;
//     return 0;
// }

// object+object and returning int
// #include<iostream>
// using namespace std;
// class myClass
// {
//     int value;
// public:
//     myClass(int v = 0)
//     {
//         value = v;
//     }
//     // Operator overloading (+)
//     int operator+(myClass &a)
//     {
//         return value + a.value;
//     }
// };
// int main()
// {
//     int result;
//     myClass object1(10);   // value = 10
//     myClass object2(20);   // value = 20
//     result = object1 + object2;   // calls operator+
//     cout << "Sum = " << result << endl;
//     return 0;
// }

// obj+int and return object
// #include<iostream>
// using namespace std;
// class myClass
// {
//     int value;
// public:
//     // Constructor
//     myClass(int v = 0)
//     {
//         value = v;
//     }
//     // Operator overloading: object + int
//     myClass operator+(int a)
//     {
//         myClass temp;
//         temp.value = value + a;
//         return temp;
//     }
//     // Display function
//     void display()
//     {
//         cout << "Value = " << value << endl;
//     }
// };
// int main()
// {
//     int a = 5;
//     myClass object1(10);
//     myClass object2;
//     object2 = object1 + a;   // calls operator+(int)
//     object2.display();
//     return 0;
// }

// obj+obj  and return object
// #include<iostream>
// using namespace std;
// class myClass
// {
//     int value;
// public:
//     // Constructor
//     myClass(int v = 0)
//     {
//         value = v;
//     }
//     // Operator overloading
//     myClass operator+(myClass &a)
//     {
//         myClass temp;
//         temp.value = value + a.value;
//         return temp;
//     }
//     // Display function
//     void display()
//     {
//         cout << "Value = " << value << endl;
//     }
// };
// int main()
// {
//     myClass object1(10);
//     myClass object2(20);
//     myClass object3;
//     object3 = object1 + object2;   // operator call
//     object3.display();
//     return 0;
// }


// this code  contain an error which should be resolved
// #include <iostream>
// using namespace std;
// class Employee
// {
// private:
//     int idNum;
//     double salary;
// public:
//     Employee(int id, double salary)
//     {
//         idNum=id;
//         this->salary=salary;
//     }
//     double addTwo(Employee &emp);
//     double operator+(Employee &emp);
//     double getSalary() const { return salary; }
// };
// double Employee::addTwo(Employee &emp)
// {
//     double total;
//     total = this->salary + emp.getSalary();
//     return total;
// }
// // operator overloading notation
// double Employee::operator+(Employee &emp)
// {
//     double total;
//     total = this->salary + emp.getSalary();
//     return total;
// }
// int main()
// {
//     double sum;
//     Employee Clerk(111, 10000), Driver(222, 6000);
//     // these three statements do the same thing
//     sum = Clerk.addTwo(Driver);
//     sum = Clerk.operator+(Driver);
//     sum = Clerk + Driver;
//     // the syntax for the last one is the most natural
//     // and is easy to remember because it is consistent
//     // with how the + operator works for everything else
//     return 0;
// }


// Start


// assignment operator =
// #include<iostream>
// #include<cstring>
// using namespace std;

// class Student
// {
//     char *name;

//     public:

//     Student(const char *n)
//     {
//         name = new char[strlen(n)+1];
//         strcpy(name,n);
//     }

//     // Assignment Operator Overloading
//     Student& operator=(const Student &obj)
//     {
//         // Self assignment check
//         if(this != &obj)
//         {
//             delete[] name;

//             name = new char[strlen(obj.name)+1];
//             strcpy(name,obj.name);
//         }

//         return *this;
//     }

//     void display()
//     {
//         cout<<"Name : "<<name<<endl;
//     }

//     ~Student()
//     {
//         delete[] name;
//     }
// };

// int main()
// {
//     Student s1("Atif");
//     Student s2("Ali");

//     s2 = s1;

//     s1.display();
//     s2.display();
// }



// address operator &
// #include<iostream>
// using namespace std;

// class Box
// {
//     int value;

//     public:

//     Box(int v)
//     {
//         value = v;
//     }

//     // Overloading &
//     Box* operator&()
//     {
//         cout<<"Custom Address Operator Called"<<endl;

//         return this;
//     }

//     void display()
//     {
//         cout<<"Value : "<<value<<endl;
//     }
// };

// int main()
// {
//     Box b1(100);

//     Box *ptr = &b1;

//     ptr->display();
// }



// addition operator +
// #include<iostream>
// using namespace std;

// class Complex
// {
//     int real;
//     int imag;

//     public:

//     Complex(int r=0,int i=0)
//     {
//         real = r;
//         imag = i;
//     }

//     Complex operator+(const Complex &obj)
//     {
//         Complex temp;

//         temp.real = real + obj.real;
//         temp.imag = imag + obj.imag;

//         return temp;
//     }

//     void display()
//     {
//         cout<<real<<" + "<<imag<<"i"<<endl;
//     }
// };

// int main()
// {
//     Complex c1(2,3);
//     Complex c2(4,5);

//     Complex c3 = c1 + c2;

//     c3.display();
// }



// subtraction operator -
// #include<iostream>
// using namespace std;

// class Vector
// {
//     int x,y;

//     public:

//     Vector(int a=0,int b=0)
//     {
//         x = a;
//         y = b;
//     }

//     Vector operator-(const Vector &v)
//     {
//         return Vector(x-v.x , y-v.y);
//     }

//     void display()
//     {
//         cout<<"("<<x<<","<<y<<")"<<endl;
//     }
// };

// int main()
// {
//     Vector v1(10,8);
//     Vector v2(3,2);

//     Vector v3 = v1 - v2;

//     v3.display();
// }



// insertion operator <<
// #include<iostream>
// using namespace std;

// class Employee
// {
//     int id;
//     float salary;

//     public:

//     Employee(int i,float s)
//     {
//         id = i;
//         salary = s;
//     }

//     friend ostream& operator<<(ostream &out,const Employee &e);
// };

// ostream& operator<<(ostream &out,const Employee &e)
// {
//     out<<"Employee ID : "<<e.id<<endl;
//     out<<"Salary : "<<e.salary<<endl;

//     return out;
// }

// int main()
// {
//     Employee e1(101,50000);

//     cout<<e1;
// }



// extraction operator >>
// #include<iostream>
// using namespace std;

// class Product
// {
//     int id;
//     float price;

//     public:

//     friend istream& operator>>(istream &in,Product &p);

//     void display()
//     {
//         cout<<"ID : "<<id<<endl;
//         cout<<"Price : "<<price<<endl;
//     }
// };

// istream& operator>>(istream &in,Product &p)
// {
//     cout<<"Enter ID : ";
//     in>>p.id;

//     cout<<"Enter Price : ";
//     in>>p.price;

//     return in;
// }

// int main()
// {
//     Product p1;

//     cin>>p1;

//     p1.display();
// }



// array subscript operator []
// #include<iostream>
// using namespace std;

// class SafeArray
// {
//     int arr[5];

//     public:

//     SafeArray()
//     {
//         for(int i=0;i<5;i++)
//             arr[i]=0;
//     }

//     int& operator[](int index)
//     {
//         if(index<0 || index>=5)
//         {
//             cout<<"Index Out of Bounds"<<endl;
//             exit(0);
//         }

//         return arr[index];
//     }

//     void display()
//     {
//         for(int i=0;i<5;i++)
//             cout<<arr[i]<<" ";

//         cout<<endl;
//     }
// };

// int main()
// {
//     SafeArray s;

//     s[0]=10;
//     s[1]=20;
//     s[2]=30;

//     s.display();

//     cout<<s[1];
// }




// study slides number 27 and 28

// Multiplying two Complex objects    * operator
// #include<iostream>
// using namespace std;
// class Complex 
// {
//     protected:
//     int real,imaginary;
//     public:
//     Complex(int r=0,int i=0):real(r),imaginary(i){}
//     Complex operator*(const Complex &obj)
//     {
//         return Complex(
//             (real*obj.real)-(imaginary*obj.imaginary),
//             (real*obj.imaginary)+(imaginary*obj.real)
//         );
//     }
//     void display()
//     {
//         cout<<"Your Complex Number is "<<real<<"+"<<imaginary<<"i"<<endl;
//     }
// };
// int main()
// {
//     Complex c1(3,4);
//     Complex c2(2,3);
//     Complex c3=c1*c2;
//     c1.display();
//     c2.display();
//     c3.display();
//     return 0;
// }


// pre and post increment operator overloading
// #include<iostream>
// using namespace std;
// class Counter
// {
//     int value;
//     public:
//     Counter(int v):value(v){}
//     Counter operator++()
//     {
//         value++;
//         return *this;
//     }
//     Counter operator++(int)
//     {
//         Counter temp=*this;
//         value++;
//         return temp;
//     }
//     void display()
//     {
//         cout<<"The value : "<<value<<endl;
//     }
// };
// int main()
// {
//     Counter c1(4);
//     Counter c2=++c1; // a = 5, c = 6  (prefix)
//     Counter c3=c1++; // b = 5, c = 6  (postfix)
//     c1.display();
//     c2.display();
//     c3.display();
//     return 0;
// }


// insertion and extraction opeator overloading
// #include<iostream>
// using namespace std;
// class Point
// {
//     int n,m;
//     public:
//     Point(int a=0,int b=0):n(a),m(b){}  // if it is not prameterized, in main Point p2 can be created
//     friend ostream& operator<<(ostream& out,const Point &obj) // it(out) can be any name like a,ou,o etc
//     {
//         out<<"Your number is "<<obj.n<<" "<<obj.m<<endl;
//         return out;
//     }
//     friend istream& operator>>(istream& in,Point & obj) // the Point class obj can't be const, as we are entering values into it
//     {
//         in>>obj.n>>obj.m;
//         return in;
//     }
// };
// int main()
// {
//     Point p1(3,4);
//     Point p2;
//     cout<<"Enter Points : ";cin>>p2;
//     cout<<p1<<endl;
//     cout<<p2<<endl;
//     return 0;
// }


// subscript [] operator overloading
// #include<iostream>
// using namespace std;
// class Array
// {
//     int data[100];
//     int size;
//     public:
//     Array(int s):size(s){}
//     int & operator[](int index)
//     {
//         if(index<0 || index >= size)
//         {
//             cout<<endl<<"Index out of bounds!"<<endl;
//             exit(1);
//         }
//         return data[index];
//     }
// };
// int main()
// {
//     Array arr(10);
//     arr[0]=42;
//     cout<<arr[0]<<endl;
//     arr[1]=34;
//     cout<<arr[1]<<endl;
//     cout<<arr[10]<<endl;
//     return 0;
// }

// >> and << operator overloading
// #include<iostream>
// using namespace std;
// class Student
// {
//     string name;
//     float gpa;
//     double marks;
//     public:
//     Student(string n="",float g=0.0,double m=0.0):name(n),gpa(g),marks(m){}
//     friend ostream& operator<<(ostream& out,const Student &obj)
//     {
//         out<<"+++++++======+++++++"<<endl;
//         out<<"Name : "<<obj.name<<endl;
//         out<<"GPA : "<<obj.gpa<<endl;
//         out<<"Marks : "<<obj.marks<<endl;
//         out<<"+++++++======+++++++"<<endl;
//         return out;
//     }
//     friend istream& operator>>(istream& in,Student &obj)
//     {
//         cout<<"Enter your name : ";getline(cin>>ws,obj.name);
//         cout<<"Enter your GPA : ";in>>obj.gpa;
//         cout<<"Enter your marks : ";in>>obj.marks;
//         return in;
//     }
// };
// int main()
// {
//     Student s1;
//     cin>>s1;
//     cout<<s1;
//     return 0;
// }


// [] operator overloading
// #include<iostream>
// using namespace std;
// class Student
// {
//     int data[100];
//     int size;
//     public:
//     Student(int s):size(s){}
//     int& operator[](int index)
//     {
//         if(index<0 || index>=size)
//         {
//             cout<<"Out of bounds!"<<endl;
//             exit(1);
//         }
//         return data[index];
//     }
// };
// int main()
// {
//     Student arr(3);
//     arr[0]=23;arr[1]=34,arr[2]=45,arr[3]=56;
//     cout<<arr[0]<<endl<<arr[1]<<endl<<arr[2]<<endl<<arr[3]<<endl;
// }



// NON MEMBER OPERATOR OVERLOADING FUNCTION
// #include<iostream>
// using namespace std;
// class Myclass
// {
//     int x;
//     public:
//     Myclass(int a=0):x(a){}
//     // getter function
//     int get()
//     {
//         return x;
//     }
//     void set(int x)
//     {
//         this->x=x;
//     }
// };
// Myclass operator+(Myclass &a,Myclass &b)
// {
//     Myclass temp;
//     temp.set(a.get()+b.get());
//     return temp;
// }
// int main()
// {
//     Myclass m1,m2,m3;
//     m1.set(34);
//     m2.set(78);
//     m3=m2+m1;
//     cout<<m3.get()<<endl;
//     return 0;
// }




















