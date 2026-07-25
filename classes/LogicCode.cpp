// In OOP, every non-static member function has an implicit pointer called 'this' that points to the current object
// 'this' pointer is present in constructors,normal member functions
// 'this' pointer is not present in static member function
// it stores the address of the object that called the function
// getline(cin>>ws,name);  // it is better programming practice
// here the 'ws' removes leftover \n,space,tab



// briefly understand rule of three, rule of zero, and rule of five ---> first priority


// //simple class to create rectangle with len and width, and set_data,calculate_area, and display_area function members
// #include<iostream>
// using namespace std;
// class Rectangle
// {
//     private:
//     double length;
//     double width;
//     public:
//     void set_data()
//     {
//         cout<<"Enter the length of the rectangle : ";cin>>length;
//         cout<<"Enter the width of the rectangle : ";cin>>width;
//     }
//     void get_data()
//     {
//         cout<<"Length : "<<length<<endl;
//         cout<<"Width : "<<width<<endl;
//     }
//     double calculate_area()
//     {
//         return length*width;
//     }
//     void display_area()
//     {
//         cout<<"The area of rectangle with length : "<<length<<" and width : "<<width<<" is "
//         <<calculate_area()<<endl;
//     }
// };
// int main()
// {
//     Rectangle r1;
//     r1.set_data();
//     r1.get_data();
//     r1.display_area();
//     return 0;
// }


// // create a class for bank account , adding validation for insufficient balance
// #include<iostream>
// using namespace std;
// class Account 
// {
//     private:
//     string account_number;
//     double balance;
//     public:
//     Account()
//     {
//         cout<<"Enter your account number : ";
//         getline(cin,account_number);
//         cout<<"Enter your balance : ";
//         cin>>balance;
//         cin.ignore();
//     }
//     void deposit(double amount)
//     {
//         balance+=amount;
//     }
//     void withdraw(double paisa)
//     {
//         if(paisa>balance)
//         {
//         cout<<"You have insufficient balance!"<<endl;
//         while(paisa>balance)
//         {
//             cout<<"Your current balance --> $"<<balance<<", enter sufficient amount for withdraw : ";
//             cin>>paisa;
//         }
//         }
//         balance-=paisa;
//     }    
//     void show_balance()
//     {
//         cout<<"Your current balance is $"<<balance<<endl;
//     }
// };
// int main()
// {
//     Account a1;
//     a1.show_balance();
//     double deposit;cout<<"Enter your deposit ammount : ";cin>>deposit;
//     a1.deposit(deposit);
//     a1.show_balance();
//     double withdraw;cout<<"Enter your withdraw amount : ";cin>>withdraw;
//     a1.withdraw(withdraw);
//     a1.show_balance();
//     return 0;
// }


// // create a class Book with title,price --> constructor and destructor
// #include<iostream>
// using namespace std;
// class Book
// {
//     string title;
//     double price;
//     public:
//     Book(string t,double p)
//     {
//         title=t;
//         price=p;
//         cout<<"Constructor created successfully!"<<endl;
//     }
//     void display()
//     {
//         cout<<"Book Title : "<<title<<endl;
//         cout<<"Book price : "<<price<<endl;
//     }
//     ~Book()
//     {
//         cout<<"Object is destroyed successfully!\n";
//     }
// };
// int main()
// {
//     string book_name;
//     cout<<"Enter book title : ";
//     getline(cin,book_name);
//     double price;
//     cout<<"Enter the book price : ";
//     cin>>price;
//     Book b1(book_name,price);
//     b1.display();
//     return 0;
// }




// very very important
// //Create a class Employee where constructor parameters have same names as data members, use (this) pointer.
// #include<iostream>
// using namespace std;
// class Employee
// {
//     private: 
//     int id_number; 
//     string name;
//     double salary;
//     public:
//     Employee(string name,int id_number,double salary)// constructor with same parameters name as data members
//     { // id_number,name,salary are local parameters here
//       // this->name, this->id_number, this->salary are data members of the class
//         this->name=name;  // refer to class data member
//         this->id_number=id_number; 
//         this->salary=salary; 
//     }
//     //     // Constructor using initialization list
//     // Employee(string name, int id_number, double salary)
//     //     : name(name), id_number(id_number), salary(salary)
//     // {
//     // }
//     void display()
//     {
//         cout<<"Name : "<<name<<endl;
//         cout<<"ID number : "<<id_number<<endl;
//         cout<<"Salary : "<<salary<<endl;
//     }
// };
// //'this' is an implicit pointer available inside all non-static member functions
// //return current object, pass current object to another function
// int main()
// {
//     string n;int i;double s;
//     cout<<"Enter your name : ";getline(cin,n);
//     cout<<"Enter you id number : ";cin>>i;
//     cout<<"Enter your salary : ";cin>>s;
//     Employee e1(n,i,s);
//     e1.display();
//     return 0;
// }


// In this code, shallow copy is made, two times memory is freed in this code as both objects points to
// the same memory location ---> so that's why deep copies are made
//both the objects have the same memory, changing one affects the other
// #include<iostream>
// using namespace std;
// class Test
// {
//     private:
//     int *data;
//     public:
//     Test(int value)
//     {
//         data=new int(value);
//     }
//     void display()
//     {
//         cout<<data<<endl;
//         cout<<*data<<endl;
//     }
//     ~Test()
//     {
//         delete data;
//     }
// };
// int main()
// {
//     Test t1(10);
//     Test t2=t1;
//     t1.display();
//     t2.display();
//     return 0;
// }





// // deep copy constructor and copy assignment operator
// #include<iostream>
// using namespace std;
// class Test
// {
//     int *data;
//     public:
//     Test(int value)
//     {
//         data =new int(value);
//     }
// // A copy constructor is a special constructor that is automatically called 
// // when one object is initialized using another object of the same class.  
//     // deep copy constructor
//     Test(const Test &obj)//this line means receive another object of class Test safely by reference and do not modify it
//     {
//         data = new int(*obj.data);
//     }// const means to ensures that the original object cannot be modified inside the copy constructor
//     // copy assignment operator
//     Test& operator=(const Test &obj)
//     {
//         if(this != &obj) // self assignment check--> &obj gives the address of object being copied
//         {
//             delete data; // before copying new data, we must free the old memory
//             data = new int(*obj.data); // deep copy allocation 
//         }
//         return *this; // b=c runs --> returns b, then a=b runs
//     }
//     void set_value(int value)
//     {
//         *data=value;
//     }
//     void display()
//     {
//         cout<<*data<<endl;
//     }
//     ~Test()
//     {
//         delete data;
//     }
// };
// int main()
// {
//     Test t1(54);
//     Test t2=t1;  // deep copy uses copy constructor
//     t1.display();
//     t2.display();
//     cout<<endl;
//     t2.set_value(34);
//     t1.display();
//     t2.display();
//     cout<<endl;
//     t1.set_value(598);
//     t1.display();
//     t2.display();
//     cout<<endl;
//     Test t3(39); 
//     t3=t2; // copy assignment operator
//     t2.display();
//     t3.display();
//     return 0;
// }





// dynamically allocating array and making deep copy and = assignment operator
// #include<iostream>
// using namespace std;
// class Student
// {
//     int *arr;
//     int a;
//     public:
//     Student()
//     {
//         cout<<"Enter the size of the array : ";cin>>a;
//         arr=new int[a];
//         for(int i=0;i<a;i++)
//         {
//             cout<<"Enter ("<<i+1<<") integer in array : ";
//             cin>>arr[i];
//         }
//     }
//     Student(const Student &obj)
//     {
//         a=obj.a;
//         arr=new int[a];
//         for(int i=0;i<a;i++)
//         this->arr[i]=obj.arr[i];
//     }
//     Student& operator=(const Student &obj)
//     {
//         if(this!=&obj)
//         {
//         a=obj.a;    
//         delete[] arr;
//         arr=new int[a];
//         for(int i=0;i<a;i++)
//         {
//             this->arr[i]=obj.arr[i];
//         }
//         }
//         return *this;
//     }
//     void display()
//     {
//         cout<<endl<<endl<<endl<<a<<endl;
//         for(int i=0;i<a;i++)
//         {
//             cout<<arr[i]<<" ";
//         }
//     }
//     ~Student()
//     {
//         delete[] arr;
//     }
// };
// int main()
// {
//     Student s1;
//     Student s2=s1;
//     Student s3;
//     s3=s1;
//     s1.display();
//     s2.display();
//     s3.display();
//     return 0;
// }






// // Create a class Array that-->dynamically alocate memory, store size, has contructor and destructor
// #include<iostream>
// using namespace std;
// class Array
// {
//     private:
//     int size;
//     float *array;
//     public:
//     Array()
//     {
//         cout<<"Enter the size of your array : ";cin>>size;
//         array=new float[size];
//         cout<<"Enter "<<size<<" numbers in your array : ";
//         for(int i=0;i<size;i++)
//         {
//             cin>>array[i];
//         }
//     }
//     void display()
//     {
//         cout<<"The size of the array is "<<size<<endl<<"Elements : ";
//         for(int i=0;i<size;i++)
//         {
//             cout<<*(array+i)<<" ";
//         } 
//         cout<<endl;
//     }
//     ~Array()
//     {
//         delete[] array;
//         array=nullptr;
//     }
// };
// int main()
// {
//     Array a1;
//     a1.display();
//     return 0;
// }



// // create a class Student that dynamically stores marks, calculate average,highest marks and uses
// // deep copy constructor
// #include<iostream>
// using namespace std;
// class Student
// {
//     private:
//     string name;
//     float *marks;
//     int papers;
//     public:
//     // constructor
//     Student(int papers)
//     {
//         this->name=name;
//         this->papers=papers;
//         marks=new float[papers];
//         for(int i=0;i<papers;i++)
//          {
//             cout<<"Enter marks of ("<<i+1<<") paper : ";
//             cin>>*(marks+i);
//          }        
//     }
//     // Deep copy creates separate memory for dynamic data so that copied objects do not share the same memory location.
//     // deep copy is required for pointer data members and dynamic memory(new keyword)
//     // deep copy constructor
//     Student(const Student& other)
//     {
//         name=other.name;
//         papers=other.papers;
//         marks=new float[papers]; // new memory allocation
//         for(int i=0;i<papers;i++)
//          {
//             marks[i]=other.marks[i]; // copying values 
//          }
//     }
//     // function to calculate average
//     double average()
//     {
//         double sum=0.0;
//         for(int i=0;i<papers;i++)
//          sum+=*(marks+i);
//         double average=(double)sum/papers;
//         return average;
//     }
//     // function to find highest marks
//     float highest()
//     {
//         float high=*marks;
//         for(int i=0;i<papers;i++)
//          {
//             if(high<*(marks+i))
//              high=marks[i];
//          }
//         return high; 
//     }
//     // function to display average, highest and all marks
//     void display()
//     {
//         cout<<"Marks of the student are : ";
//         for(int i=0;i<papers;i++)
//          {
//             cout<<*(marks+i)<<" ";
//          }
//         cout<<endl<<"Highest marks : "<<highest()<<endl<<"Average marks : "<<average()<<endl; 
//     }
//     // destructor function
//     ~Student()
//     {
//         delete[] marks;
//         marks=nullptr;
//     }
// };
// int main()
// {
//     int p;
//     cout<<"Enter the number of papers : ";
//     cin>>p;
//     Student s1(p); // constructor called
//     s1.display();
//     cout<<"Creating Student Copy!\n";
//     Student s2=s1;// copy constructor called(deep copy) //if deep copy were not made, both s1 and s2 would point to same memory 
//     s2.display();  // and double deletion of same memory would happen which could crash program
//     return 0;
// }




// A deep copy copies the actual data into a new memory location
// A shallow copy copies the values of data members as they are. If a class contains a pointer, only the pointer address is copied, not the actual data it points to.
// So both objects point to the same memory location.
//this causes double deletion,memory leaks,undefined behavior and program may crash


// so there is a rule of three, in case if class contain new,delete,raw pointers,file handling,
// manual resource management-->Destructor,Copy Constructor,Copy Assignment Operator
// syntax---> ~ClassName() { }
//ClassName(const ClassName& other);
//ClassName& operator=(const ClassName& other);





