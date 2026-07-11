// Polymorphism can also be understood as the ability of an object to take many forms --> for eample
// Your Mobile can be used to make a call , view coding videos , playing games , etc.
// one name, multiple forms ----> polymorphism :
// POLYMORPHISM IN C++ CAN BE OF TWO TYPES 
// (1) compile time polymorphism   --> it can be achieved using 
// 1.1  function overloading
// 1.2  operator overloading
// (2) run time polymorphism   --> it can be achieved using
// 2.1 virtual functions


// pointer to derived classes

// #include<iostream>
// using namespace std;
// class BaseClass
// {
//     public:
//     int var1;
//     void display()
//     {
//         cout<<"Displaying base class variable var1 : "<<var1<<endl;
//     }
// };
// class DerivedClass:public BaseClass
// {
//     public:
//     int var2;
//     void display()
//     {
//         cout<<"(derived class display) Displaying base class variable var1 :"<<var1<<endl;
//         cout<<"(derived class display) Displaying derived class variable var2 : "<<var2<<endl;
//     }
// };
// // derived class pointer can't store base class object address while base class pointer can store derived class object address
// int main()
// {
//     BaseClass *base_class_pointer;   // it is a base class pointer, pointed to derived class
//     // this pointer will display base class on calling --> this is called late binding
//     BaseClass objbase;
//     DerivedClass objderived;
//     base_class_pointer=&objderived; 
//     base_class_pointer->var1=3423;
//     // base_class_pointer->var2=245; // this will give an error
//     base_class_pointer->display();  // here binding is with base class
//     DerivedClass *derived_class_pointer;
//     derived_class_pointer=&objderived; 
//     derived_class_pointer->var2=980;
//     derived_class_pointer->display(); // here binding is with derived class
//     derived_class_pointer->var1=0.0;
//     base_class_pointer->display();
//     return 0;
// }


// virtual functions


// #include<iostream>
// using namespace std;
// class BaseClass
// {
//     public:
//     int var1;   // virtual is written only for overwriting the default behaviour of pointer
//     virtual void display()  // by writing virtual, if base class pointer is pointed to derived class
//     // object, it will display the derived class function
//     {
//         cout<<"Displaying base class variable var1 : "<<var1<<endl;
//     }
// };
// class DerivedClass:public BaseClass
// {
//     public:
//     int var2;
//     void display()
//     {
//         cout<<"(derived class display) Displaying base class variable var1 :"<<var1<<endl;
//         cout<<"(derived class display) Displaying derived class variable var2 : "<<var2<<endl;
//     }
// };
// int main()
// {
//     BaseClass *base_class_pointer; 
//     BaseClass objbase;
//     DerivedClass objderived;
//     base_class_pointer=&objderived;
//     base_class_pointer->var1=34;     // by writing virtual, I can now access it ---> while like in the above code, I couldn't
//     // base_class_pointer->var2=65;  // it can't be done even now after making it virtual, can only be accessed by derived class pointer
//     base_class_pointer->display();   
//     return 0;
// }


// rules for virtual function
// they cannot be static
// they are accessed by object pointers
// virtual function can be a friend of another class
// a virtual function in base class might not be used
// if a virtual function is defined in a base class, there is no necessity of redefining it in the derived class


// virtual function
// #include<iostream>
// #include<cstring>
// using namespace std;
// class CWH
// {
//     protected:
//     string title;
//     float rating;
//     public:
//     CWH(string s,float r)
//     {
//         title=s;
//         rating=r;
//     }
//     virtual void display()
//     {
//         cout<<"BOgus COde!"<<endl;
//     }
// };
// class CWHvideo : public CWH
// {
//     float videolength;
//     public:
//     CWHvideo(string s,float r,float vl):CWH(s,r)
//     {
//         videolength=vl;
//     }
//     void display()
//     {
//         cout<<"This is an amazing video with title "<<title<<endl;
//         cout<<"This video rating is "<<rating<<" out of 10"<<endl;
//         cout<<"Length of this video is "<<videolength<<" minutes"<<endl;
//     }
// };
// class CWHtext : public CWH
// {
//     int wordscount;
//     public:
//     CWHtext(string s,float r,int wc):CWH(s,r)
//     {
//         wordscount=wc;
//     }
//     void display()
//     {
//         cout<<"This is an amazing text tutorial with title "<<title<<endl;
//         cout<<"This text rating is "<<rating<<" out of 10"<<endl;
//         cout<<"Length of this text is "<<wordscount<<" minutes"<<endl;
//     }
// };
// int main()
// {
//     string title;
//     float rating,videolength;
//     int words;
//     // for video class
//     title="Amazing tutorial";
//     videolength=4.56;
//     rating=8.8;
//     CWHvideo video(title,rating,videolength);
//     // video.display();
//     // for text class
//     title="Amazing tutorial text";
//     int wc=456;
//     float rrating=8.3;
//     CWHtext text(title,rrating,wc);
//     // text.display();
//     // CWH pinters
//     CWH* ptr1[2];
//     ptr1[0]=&video;
//     ptr1[1]=&text;
//     ptr1[0]->display();
//     ptr1[1]->display();
//     return 0;
// }


// pure virtual function or do-nothing function
// #include<iostream>
// #include<cstring>
// using namespace std;
// // abstract base class  b/c it contain pure virtual function
// class CWH
// {
//     protected:
//     string title;
//     float rating;
//     public:
//     CWH(string s,float r)
//     {
//         title=s;
//         rating=r;
//     }
//     virtual void display()=0; // do-nothing function ---> pure virtual function
//     // when pure virtual function is made, it is necesary to make function in derived class
// };
// class CWHvideo : public CWH
// {
//     float videolength;
//     public:
//     CWHvideo(string s,float r,float vl):CWH(s,r)
//     {
//         videolength=vl;
//     }
//     void display()
//     {
//         cout<<"This is an amazing video with title "<<title<<endl;
//         cout<<"This video rating is "<<rating<<" out of 10"<<endl;
//         cout<<"Length of this video is "<<videolength<<" minutes"<<endl;
//     }
// };
// class CWHtext : public CWH
// {
//     int wordscount;
//     public:
//     CWHtext(string s,float r,int wc):CWH(s,r)
//     {
//         wordscount=wc;
//     }
//     void display()
//     {
//         cout<<"This is an amazing text tutorial with title "<<title<<endl;
//         cout<<"This text rating is "<<rating<<" out of 10"<<endl;
//         cout<<"Length of this text is "<<wordscount<<" minutes"<<endl;
//     }
// };
// int main()
// {
//     // CWH obj;    // give error ---> as CWH is abstract class, it means you can't create its objects
//     CWH *ptr;   // its pointer can be made
//     string title;
//     float rating,videolength;
//     int words;
//     // for video class
//     title="Amazing tutorial";
//     videolength=4.56;
//     rating=8.8;
//     CWHvideo video(title,rating,videolength);
//     // video.display();
//     // for text class
//     title="Amazing tutorial text";
//     int wc=456;
//     float rrating=8.3;
//     CWHtext text(title,rrating,wc);
//     // text.display();
//     // CWH pinters
//     CWH* ptr1[2];
//     ptr1[0]=&video;
//     ptr1[1]=&text;
//     ptr1[0]->display();
//     ptr1[1]->display();
//     return 0;
// }

// runtime polymorphism 
// #include<iostream>
// using namespace std;
// class Base
// {
//     int num;
//     public:
//     virtual void display()=0;
//     virtual ~Base()
//     {
//         cout<<"1"<<endl;
//     }
// };
// class Der : public Base
// {
//     int n;
//     public:
//     void display()
//     {
//         cout<<"Hello World"<<endl;
//     }
//     ~Der()
//     {
//         cout<<"2"<<endl;
//     }
// };
// class der : public Base
// {
//     int u;
//     public:
//     void display()
//     {
//         cout<<"Why are you here"<<endl;
//     }
//     ~der()
//     {
//         cout<<"3"<<endl;
//     }
// };
// int main()
// {
//     Base *ptr[2];
//     ptr[0]=new Der;
//     ptr[1]=new der;
//     ptr[0]->display();
//     ptr[1]->display();
//     // delete[0] ptr;  // you can't do this
//     delete ptr[0];
//     delete ptr[1];
//     return 0;
// }

// virtual destructor
// #include<iostream>
// using namespace std;
// class Base {
// public:
//     virtual ~Base() // if destructor is not virtual, so base class pointer in which derived class object is
//     // dynamically stored, then for derived class object, the derived class destructor is not called
//     { 
//         cout << "Base destroyed" << endl;
//     }
// };
// class Derv : public Base {
// public:
//     ~Derv()
//     {
//         cout << "Derv destroyed" << endl;
//     }
// };
// int main() {
//     Base* pBase = new Derv;
//     delete pBase;
//     Base *ptr;
//     Derv der;
//     ptr=&der;
//     return 0;
// }



// virtual destructor
// #include<iostream>
// using namespace std;
// class A
// {
//     public:
//     virtual ~A()
//     {
//         cout<<"Hello brothers and sisters"<<endl;
//     }
// };
// class B : public A
// {
//     public:
//     ~B()
//     {
//         cout<<"I know but why, how are you bro"<<endl;
//     }
// };
// int main()
// {
//     A *ptr=new B;
//     delete ptr; // when it is used the destructors are called, otherwise destructors are not called
//     return 0;
// }



// Sir Zakria Bacha Code
// #include<iostream>
// using namespace std;
// // Abstract Base Class
// class Person
// {
// protected:
//     int id;
//     char first_character_name;
// public:
//     // Pure Virtual Functions
//     virtual void show_data() = 0;
//     virtual void get_data() = 0;
// };
// // Derived Class Student
// class Student : public Person
// {
// protected:
//     int total_marks;
// public:
//     // Function to input student data
//     void get_data() override
//     {
//         cout << "Enter Student ID : ";
//         cin >> id;
//         cout << "Enter First Character of Name : ";
//         cin >> first_character_name;
//         cout << "Enter Total Marks : ";
//         cin >> total_marks;
//     }
//     // Function to display student data
//     void show_data() override
//     {
//         cout << endl;
//         cout << "===== Student Data =====" << endl;
//         cout << "Student ID : " << id << endl;
//         cout << "First Character Name : " << first_character_name << endl;
//         cout << "Total Marks : " << total_marks << endl;
//     }
// };
// // Derived Class Employee
// class Employee : public Person
// {
// protected:
//     float salary;
// public:
//     // Function to input employee data
//     void get_data() override
//     {
//         cout << "Enter Employee ID : ";
//         cin >> id;
//         cout << "Enter First Character of Name : ";
//         cin >> first_character_name;
//         cout << "Enter Salary : ";
//         cin >> salary;
//     }
//     // Function to display employee data
//     void show_data() override
//     {
//         cout << endl;
//         cout << "===== Employee Data =====" << endl;
//         cout << "Employee ID : " << id << endl;
//         cout << "First Character Name : " << first_character_name << endl;
//         cout << "Salary : " << salary << endl;
//     }
// };
// int main()
// {
//     // Base Class Pointer
//     Person *pr;
//     // Objects of Derived Classes
//     Student st;
//     Employee emp;
//     char option;
//     char check_again;
//     do
//     {
//         cout << endl;
//         cout << "Enter s for Student or e for Employee : ";
//         cin >> option;
//         // Runtime Polymorphism
//         if(option == 's')
//         {
//             pr = &st;
//             pr->get_data();
//             pr->show_data();
//         }
//         else if(option == 'e')
//         {
//             pr = &emp;
//             pr->get_data();
//             pr->show_data();
//         }
//         else
//         {
//             cout << "Invalid Option" << endl;
//         }
//         cout << endl;
//         cout << "Press x to Exit or any other key to Continue : ";
//         cin >> check_again;
//     } while(check_again != 'x');
//     return 0;
// }



