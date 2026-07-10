// 1) Default visibility mode is private
// 2) Public visibility mode : Public members of the base class becomes the pulic members of the derived class
// 3) Private visibility mode : Public member of the base class becomes the private member of the derived class
// 4) private member are never inherited
// visibility mode shows the type of derivation

//                         Public derivation      Private derivation        Protected derivation
// private member          not inherited          not inherited             not inherited 
// public member           publilc                private                  protected 
// protected member        protected              private                   protected  
// we use protected when you want to hide data from outside, but still allow child classes to use it
// syntax
// class derived_class_name : visibility_mode Base_class_name
//Constructors, destructors and = operator are not inherited


/*
The default constructor and the destructor of the base class are always called when a new object of a derived class is created or destroyed.
When you create an object of a derived (child) class, two things happen automatically:
The base (parent) class constructor runs first
Then the derived class constructor runs
And when the object is destroyed:
The derived class destructor runs first
Then the base class destructor runs
*/



// code showing the call of destructor and constructor of base and derived class
// #include<iostream>
// using namespace std;
// class Base
// {
//     int a;
//     public:
//     Base()
//     {
//         cout<<"Constructor of the base class is called!"<<endl;
//     }
//     ~Base()
//     {
//         cout<<"Destructor of the base class is called!"<<endl;
//     }
// };
// class Derived : public Base
// {
//     public:
//     Derived()
//     {
//         cout<<"Constructor of derived class is called!"<<endl;
//     }
//     ~Derived()
//     {
//         cout<<"Destructor of the derived class is called!"<<endl;
//     }
// };
// int main()
// {
//     Derived der1;
//     return 0;
// }


/*
You can also specify a constructor of the base class other than the default constructor
DerivedClassCon ( derivedClass args ) : BaseClassCon ( baseClass args )
{ DerivedClass constructor body }
*/

// code in which Derived class explicitly call Base class parametarized constructor
// #include<iostream>
// using namespace std;
// class Student
// {
//     int age;
//     double marks;
//     string name;
//     public:
//     Student(int a,double m,string n):age(a),marks(m),name(n)
//     {
//         cout<<"You are now inside Student constructor"<<endl;
//     }
//     void display()
//     {
//         cout<<"Name : "<<name<<"     Marks : "<<marks<<"     Name : "<<name<<endl;
//     }
//     ~Student()
//     {
//         cout<<"Base class destructor"<<endl;
//     }
// };
// class Atif:public Student
// {
//     public:
//     Atif(int a,double m, string n):Student(a,m,n)
//     {
//         cout<<"You are now inside Atif constructor"<<endl;
//     }
//     ~Atif()
//     {
//         cout<<"Derived class destructor"<<endl;
//     }
// };
// int main()
// {
//     Atif khan(22,1190,"Muhammad Atif");
//     khan.display();
//     return 0;
// }




// code in which derived class explicitly call base class parametarized constructor
// #include<iostream>
// using namespace std;
// class Base
// {
//     private:
//     int a;
//     public:
//     Base(int x)
//     {
//         a=x;
//         cout<<"The constructor of base class (a value) : "<<a<<endl;
//     }
// };
// class Derived : public Base
// {
//     private:
//     int b;
//     int c;
//     public:
//     Derived(int x,int y) : Base(x)
//     {
//         b=x,c=y;
//         cout<<"The cconstructor of the derived class (b value, c vlaue) : "<<b<<", "<<c<<endl;
//     }
// };
// int main()
// {
//     Derived first(34,56);
//     return 0;
// }



// code using 'this' pointer and show access of private and public data member
// #include<iostream>
// using namespace std;
// class Employee
// {
//     double salary;
//     public:
//     int id;
//     Employee(int id)
//     {
//         this->id=id;
//         salary=35.23;
//     }
//     void display()
//     {
//         cout<<"Your ID : "<<id<<endl;
//         cout<<"Your salary : "<<salary<<endl;
//     }
//     // without making default constructor, it gives us error when it is actually called by derived class
//     Employee()
//     {}
// };
// class Assistant : Employee
// {
//     public:
//     Assistant(int inpid)
//     {
//         id=inpid;
//     }
//     void get_id()
//     {
//         cout<<"Yooour ID : "<<id<<endl;
//     }
//     int languagecode=9;
// };
// int main()
// {
//     Employee Aizaz(1),Brar(2);
//     Assistant a1(100);
//     Aizaz.display();
//     Brar.display();
//     a1.get_id();
//     cout<<"Language Code : "<<a1.languagecode<<endl;
//     return 0;
// }


// derived and base class with same function name
// #include<iostream>
// using namespace std;
// class Person
// {
//     string name;
//     int age;
//     public:
//     Person(string name,int age)
//     {
//         this->name=name;
//         this->age=age;
//     }
//     string get_name()
//     {
//         return name;
//     }
//     int get_age()
//     {
//         return age;
//     }
//     void display()
//     {
//         cout<<"Name : "<<name<<"    Age : "<<age<<endl;
//     }
// };
// class Student:public Person
// {
//     int marks;
//     public:
//     Student(string name,int age):Person(name,age)
//     {
//         cout<<"Enter your marks : ";
//         cin>>marks;
//     }
//     void display()    // if derived class and base class function has same name, by calling, the derived
//     // class function is actually called
//     {
//         cout<<"(1) : "<<get_name()<<endl;
//         cout<<"(2) : "<<get_age()<<endl;
//         cout<<"(3) : "<<marks<<endl;
//         // Person::display();
//     }
// };
// int main()
// {
//     Student s1("Muhammad Atif",21);
//     s1.display();
//     return 0;
// }


// data accessing
// #include<iostream>
// using namespace std;
// class Base
// {
//     int num1;
//     string name;
//     public:
//     Base(int n1,string n):num1(n1),name(n)
//     {}
//     int get_num1()
//     {
//         return num1;
//     }
//     string get_name()
//     {
//         return name;
//     }
// };
// class Derived : private Base
// {
//     public:
//     Derived(int n1,string n):Base(n1,n){};
//     int display_num1()
//     {
//         int num1=get_num1();
//         return num1;
//     }
//     string display_name()
//     {
//         string name=get_name();
//         return name;
//     }
// };
// class Grandson : private Derived
// {
//     public:
//     Grandson(int n1,string n):Derived(n1,n){}
//     int give_num1()
//     {
//         int num1=display_num1();
//         return num1;
//     }
//     string give_name()
//     {
//         string name=display_name();
//         return name;
//     }
// };
// int main()
// {
//     Grandson g1(456,"Hello");
//     int n=g1.give_num1();
//     string n1=g1.give_name();
//     cout<<n<<endl<<n1<<endl;
//     return 0;
// }


// practice code for access data private of base class
// #include<iostream>
// using namespace std;
// class Person
// {
//     private:
//     string name;
//     int age;
//     public:
//         Person(string n,int a)
//         {
//             name=n;
//             age=a;
//         }
//         void display_info()
//         {
//             cout<<"The person name is "<<name<<endl;
//             cout<<"The age of "<<name<<" is "<<age<<endl;
//         }
//         string show_name()
//         {
//             return name;
//         }
// };
// class Student : public Person
// {
//     private:
//     string roll_number;
//     public:
//     Student(string name,int age,string r_n) : Person(name,age)
//     {
//         roll_number=r_n;
//     }    
//     void display_RollNumber()
//     {
//         cout<<show_name();
//         cout<<"'s roll number is "<<roll_number<<endl;
//     }      
// };
// int main()
// {
//     Student fast_student("Muhammad Atif",20,"25-p-0053");
//     fast_student.display_info();
//     fast_student.display_RollNumber();
//     return 0;
// }




// Single inheretance


//  #include<iostream>
//  using namespace std;
//  class Base
//  {
//     int data1;
//     public:
//     int data2;
//     void setdata();
//     int getdata1();
//     int getdata2();
//  };

// void Base::setdata(void)
// {
//     data1=23;
//     data2=57;
// }
// int Base::getdata1(void)
// {
//     return data1;
// }
// int Base::getdata2(void)
// {
//     return data2;
// }

//  class Derived : public Base
//  {
//     int data3;
//     public:
//     void process();
//     void display();
//  };

// void Derived::process()
// {
//     data3=data2*getdata1();
// }
// void Derived::display()
// {
//         cout<<"Value of data 1 is "<<getdata1()<<endl;
//         cout<<"Value of data 2 is "<<data2<<endl;
//         cout<<"Value of data 3 is "<<data3<<endl;
// }

// int main()
// {
//     Derived d1;
//     d1.setdata();
//     d1.process();
//     d1.display();
//     return 0;
// }








// this code and the above code are the same, except it has private visibility mode and the other has public visibility mode

// #include<iostream>
//  using namespace std;
//  class Base
//  {
//     int data1;
//     public:
//     int data2;
//     void setdata();
//     int getdata1();
//     int getdata2();
//  };

// void Base::setdata(void)
// {
//     data1=23;
//     data2=57;
// }
// int Base::getdata1(void)
// {
//     return data1;
// }
// int Base::getdata2(void)
// {
//     return data2;
// }

//  class Derived : private Base
//  {
//     int data3;
//     public:
//     void process();
//     void display();
//  };

// void Derived::process()
// {
//     setdata();
//     data3=data2*getdata1();
// }
// void Derived::display()
// {
//         cout<<"Value of data 1 is "<<getdata1()<<endl;
//         cout<<"Value of data 2 is "<<data2<<endl;
//         cout<<"Value of data 3 is "<<data3<<endl;
// }

// int main()
// {
//     Derived d1;
//     // d1.setdata();
//     d1.process();
//     d1.display();
//     return 0;
// }




// code showing protected access specifier use
// #include<iostream>
// using namespace std;
// class Base
// {
//     protected: // protected data member are same as private, but it can be inhereted
//     int a;
//     private:
//     int b;
// };
// class Derived :  Base
// {  
// };
// int main()
// {
//     Base b1;
//     Derived d1;
//     // b1.a=12;    these both will not run as the 'a' is a protected member 
//     // di.a=56;
//     return 0;
// }





// multilevel inherentance

// special case, if A-->B-->C then C obj c1(2,45,65,23,65,34) can be used with C class constructor like
// C(int a1,int  a2,int a3,int a4,int a5,int a6):A(a1,a2),B(a3,a4)   {num1=a5,num2=a6}

// code showing multiple inheritance
// #include<iostream>
// using namespace std;
// class Student
// {
//     protected:
//     int r_number;
//     public:
//     void set_data(int);
//     void get_data(void);
// };
// void Student::set_data(int r)
// {
//     r_number=r;
// }
// void Student::get_data(void)
// {
//     cout<<"Roll Number : "<<r_number<<endl;
// }
// class Exam : public Student
// {
//     protected:
//     float maths;
//     float physics;
//     public:
//     void set_marks(float,float);
//     void get_marks(void);
// };
// void Exam::set_marks(float m1,float m2)
// {
//     maths=m1;
//     physics=m2;
// }
// void Exam::get_marks()
// {
//     cout<<"Physics marks : "<<physics<<endl;
//     cout<<"Maths marks ; "<<maths<<endl;
// }
// class Result : public Exam
// {
//     float percentage;
//     public:
//     void displayResult();
// };
// void Result::displayResult()
// {
//     percentage=(float)(maths+physics)/2;
//     get_marks();
//     get_data(); // function to get roll number
//     cout<<"Your percentage is : "<<percentage<<endl;
// }
// int main()
// {
//     Result atif;
//     atif.set_data(34553);
//     atif.set_marks(90.43,78.034);
//     atif.displayResult();
//     return 0;
// }







// multiple inheritance

// in multiple inheritance, the constructors are executed in the order of inheritance

// syntax
// class derived_class_name : visibility_mode base1, visibility_mode base2
// {};



// #include<iostream>
// using namespace std;
// class base1
// {
//     protected:
//     int base1int;
//     public:
//     void set_data1(int a)
//     {
//         base1int=a;
//     }
// };
// class base2
// {
//     protected:
//     int base2int;
//     public:
//     void set_data2(int b)
//     {
//         base2int=b;
//     }
// };
// class derived : public base1, public base2
// {
//     public:
//     void show()
//     {
//         cout<<"The value of base 1 is "<<base1int<<endl;
//         cout<<"The value of base 2 is "<<base2int<<endl;
//         cout<<"The sum of base1 and base2 int values is "<<base1int+base2int<<endl;
//     }
// };
// int main()
// {
//     derived atif;
//     atif.set_data1(78);
//     atif.set_data2(45);
//     atif.show();
//     return 0;
// }




// Ambiguity Resolution

// very very important
// #include<iostream>
// using namespace std;
// class base1
// {
//     public:
//     void greet()
//     {
//         cout<<"How are you!"<<endl;
//     }
// };
// class base2
// {
//     public:
//     void greet()
//     {
//         cout<<"I am okay, what about you, what are you doing now-a-days!"<<endl;
//     }    
// };
// class der:public base1,public base2
// {
//     public:
//     void greet()
//     {
//         base2::greet();
//     }
// };
// int main()
// {
//     der d1;
//     d1.greet();
//     d1.base1::greet();
//     d1.base2::greet();
//     return 0;
// }



// Ambiguity # 01
// #include<iostream>
// using namespace std;
// class base1
// {
//     public:
//     void greet()
//     {
//         cout<<"How are you brother!"<<endl;
//     }
// };
// class base2
// {
//     public:
//     void greet()
//     {
//         cout<<"What's up, what are you doing now-a-days!"<<endl;
//     }
// };
// class derived : public base1, public base2
// {
//     int a;
//     public:
//     void greet()
//     {
//         base1::greet();
//     }
// };
// int main()
// {
//     base1 obj1;
//     base2 obj2;
//     obj1.greet();
//     obj2.greet();
//     derived der;
//     der.greet();
//     return 0;
// }


// Ambiguity # 02

// #include<iostream>
// using namespace std;
// class B
// {
//     public:
//     void greet()
//     {
//         cout<<"Hello, how are you!"<<endl;
//     }
// };
// class D1 : public B
// {
//     public:
//     void greet()
//     {
//         cout<<"Assalamalikum"<<endl;
//     }    
// };
// class D2 : public B
// {
//     int a;
// };
// // in this code the ambiguity is resolved by itself, if greet() function is present in derived class so derived class greet() will
// // used, otherwise base class greet() will be used
// int main()
// {
//     B b1;
//     b1.greet();
//     D1 der1;
//     der1.greet();
//     D2 der2;
//     der2.greet();
// }


// virtual base class
//  The constructors for virtual base classes are invoked before a non-virtual base class
// if there are multiple virtual base classes, they are invoked in the order declared
// any non-virtual base class are then constructed before the derived class constructor is executed


// #include<iostream>
// using namespace std;
// class Student 
// {
//     protected:
//     int r_number;
//     public:
//     void setData(int a)
//     {
//         r_number=a;
//     }
//     void print_rnumber(void)
//     {
//         cout<<endl<<"Your Roll Number is : "<<r_number<<endl;
//     }
// };
// class Test : virtual public Student   // virtual public = public virtual     it gives no error same
// {
//     protected:
//     float maths,physics;
//     public:
//     void set_marks(float m1,float m2)
//     {
//         maths=m1;
//         physics=m2;
//     }
//     void print_marks()
//     {
//         cout<<"Maths marks : "<<maths<<endl;
//         cout<<"Physics marks : "<<physics<<endl;
//     }
// };
// class Sports : public virtual Student 
// {
//     protected:
//     float score;
//     public:
//     void set_score(float sc)
//     {
//         score=sc;
//     }
//     void print_score(void)
//     {
//         cout<<"Your Score is : "<<score<<endl;
//     }
// };
// class Result : public Test, public Sports
// {
//     private:
//     float total;
//     public:
//     void display()
//     {
//         total=maths+physics+score;
//         print_score();
//         print_marks();
//         print_rnumber();
//         cout<<"Your total score is : "<<total<<endl;
//     }
// };
// int main()
// {
//     Result atif;
//     atif.set_marks(78,34);
//     atif.setData(4530);
//     atif.set_score(2);
//     atif.display();
//     return 0;
// }


// Function overriding in C++ occurs when a derived (child) class provides its own implementation of a function that is already defined in the base (parent) class, using the same function name and parameters.

// key rules
// Function name must be the same
// Parameters must be the same
// Must use inheritance
// Base class function should be virtual
// Called using object of derived class (or base pointer)


// very very most important code    
// #include<iostream>
// using namespace std;
// class Base
// {
// public:
//     virtual void show()   // base class function
//     {
//         cout<<"This is Base class show function"<<endl;
//     }
// };
// class Derived : public Base
// {
// public:
//     void show()   // overriding function
//     {
//         cout<<"This is Derived class show function"<<endl;
//     }
// };
// int main()
// {
//     //ptr can store the address of any object of type Base
//     //Because of inheritance, it can also point to a Derived object
//     //a base class pointer can point to a derived class object, but the reverse is not allowed
//     Base* ptr;
//     Derived d;
//     ptr = &d;
//     ptr->show();    // ptr base class pointer, but pointing to an derived object
//     // calls Derived's version (runtime decision)
//     return 0;
// }




// function overloading
// Same function name, different parameters 
// no inheritance required
// virtual keyword not required
// #include<iostream>
// using namespace std;
// class Demo
// {
// public:
//     void add(int a, int b)
//     {
//         cout << a + b << endl;
//     }
//     void add(int a, int b, int c)
//     {
//         cout << a + b + c << endl;
//     }
// };
// int main()
// {
//     Demo d;
//     d.add(2, 3);
//     d.add(2, 3, 4);
// }


// function overriding 
// Same function name, same parameters
// it requires inheritance
// virtual keyword required in base class 
// #include<iostream>
// using namespace std;
// class Base
// {
// public:
//     virtual void show()
//     {
//         cout << "Base class" << endl;
//     }
// };
// class Derived : public Base
// {
// public:
//     void show()
//     {
//         cout << "Derived class" << endl;
//     }
// };
// int main()
// {
//     Base* ptr;
//     Derived d;
//     ptr = &d;
//     ptr->show();  // calls Derived version
// }

