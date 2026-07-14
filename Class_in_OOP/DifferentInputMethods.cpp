// Input Using Public Data Members (Direct Access) // it breaks incapsulation, bad practice
// #include<iostream>
// using namespace std;
// class student 
// {
//     public:
//     float id_number;
//     string name;
// };
// int main()
// {
//     student s1;
//     cout<<"Enter your id number : ";
//     cin>>s1.id_number;
//     cin.ignore();
//     cout<<"Enter your name : ";
//     getline(cin,s1.name);
//     cout<<endl<<s1.id_number<<endl<<s1.name<<endl;
//     return 0;
// }



// // Input Using Member Function (Setter Function)
// #include<iostream>
// using namespace std;
// class Student
// {
//     private:
//     string name;
//     string id_number;
//     char school[50];
//     float marks;
//     int papers;
//     public:
//     void set_data()
//     {
//         cout<<"Enter your name : ";
//         getline(cin,name);
//         cout<<"Enter your registration id : ";
//         getline(cin,id_number);
//         cout<<"Enter your school name : ";
//         cin.getline(school,50);
//         cout<<"Enter number of papers : ";
//         cin>>papers;
//         cout<<"Enter your total marks : ";
//         cin>>marks;
//         cin.ignore(); // if multiple objects are formed, cin.ignore() is necesary to clean buffer from \n
//     }
//     void get_data()
//     {
//         cout<<"Student ---> "<<name<<"  information "<<endl;
//         cout<<"Registration id : "<<id_number<<endl;
//         cout<<"Papers : "<<papers<<endl;;
//         cout<<"Total Marks : "<<marks<<endl;
//     }
// };
// int main()
// {
//     Student s1;
//     s1.set_data();
//     s1.get_data();
//     Student s2;
//     s2.set_data();
//     s2.get_data();
//     return 0;
// } 



// // code showing constructor and destructor with static int member
// #include<iostream>
// using namespace std;
// class Student 
// {
//     private:
//     string name;
//     string r_number;
//     int papers;
//     static int num;
//     public:
//     Student()
//     {
//         cout<<"Enter your name : ";
//         getline(cin,name);
//         cout<<"Enter your roll number : ";
//         getline(cin,r_number);
//         cout<<"Enter total number of papers : ";
//         cin>>papers;
//         cin.ignore();
//         num++;
//     }
//     ~Student()
//     {
//         cout<<"Name : "<<name<<endl;
//         cout<<"Roll number : "<<r_number<<endl;
//         cout<<"Total Papers : "<<papers<<endl;
//         cout<<"Student number : "<<num<<endl;
//     }
// };
// int Student::num=0;
// int main()
// {
//     int stu;
//     cout<<"Enter the number of student : ";
//     cin>>stu;
//     cin.ignore();
//     Student arr[stu];
//     return 0;
// }




// very very important concept of assigning data
// default and parametarize constructor, setter and getter member functions,
// #include<iostream>
// using namespace std;
// class Car
// {
//     private:
//     string company_name;
//     string model_name;
//     double price;
//     public:
//     Car(string n1="Mercedes",string n2="Brand new model 2026",double p=43624535.624)
//     {
//         company_name=n1;
//         model_name=n2;
//         price=p;
//     }
//     void Set_data()
//     {
//         cout<<"Enter car company name : ";
//         getline(cin,company_name);
//         cout<<"Enter car model name : ";
//         getline(cin,model_name);
//         cout<<"Enter car price : ";
//         cin>>price;
//     }
//     void Get_data()
//     {
//         cout<<"Company Name : "<<company_name<<endl;
//         cout<<"Model Name : "<<model_name<<endl;
//         cout<<"Price : "<<price<<endl<<endl;
//     }
// };
// int main()
// {
//     Car c1;
//     Car c2("Mercedes","G wagon 2025",3563234.234);
//     // Car c3("Bently",26245.25);  // defaults only work from right to left, not skipping the middle
//     // Car c4(454564.4); // that's why c3 and c4 is wrong syntax, you can only leave parameters from the end, not from the middle
//     Car c5("Lambhoghini");
//     Car c6("Audi","A4");
//     c1.Set_data();
//     c1.Get_data();
//     c2.Get_data();
//     c5.Get_data();
//     c6.Get_data();
//     return 0;
// }




// very important
// two constructors that can act as default constructors create ambiguity and give an error,
// one constructor at a time can be used, as both are default constructor
// #include<iostream>
// using namespace std;
// class Student 
// {
//     string name;
//     double clas;
//     int num;
//     public:
//     Student()
//     {
//         name="Hello";
//         clas=3423.24;
//         num=534;
//     }
//     // Student(string n="hii",double c=3435.43,int no=342)
//     // {
//     //     name=n;
//     //     clas=c;
//     //     num=no;
//     // }
//     ~Student()
//     {
//         cout<<name<<endl<<clas<<endl<<num<<endl;
//     }
// };
// int main()
// {
//     Student S1;
//     return 0;
// }








// // constructors are special member functions
// // default constructor
// #include<iostream>
// using namespace std;
// class Car
// {
//     string name;
//     string model;
//     float price;
//     public:
//     Car() // this is default constructor
//     { // called when zero arguments are passed
//         name="Muhammad Atif";
//         model="Mercedes";
//         price=2443323.453;
//     }
//     Car(string n,string m,float p) // this is parametarize constructor
//     { 
//         name=n;
//         model=m;
//         price=p;
//     }
//     void get_data()
//     {
//         cout<<"Owner name : "<<name<<endl;
//         cout<<"Model : "<<model<<endl;
//         cout<<"Price : "<<price<<endl;
//     }
// };
// int main()
// {
//     Car benz;
//     benz.get_data();
//     Car corolla("Ishdaq","Corolla",289474.23);;
//     corolla.get_data();
//     return 0;
// }





// very very important concept of default constructor
// parametarize default constructor 
// #include<iostream>
// using namespace std;
// class Car
// {
//     string name;
//     string model;
//     float price;
//     public:
// // Car(string n="Captain",string m="Hovel",float p)   // wrong-->default parameters must start from the rightmost side
//     Car(string n,string m="New model 2025",float p=35745.345)  // If a parameter constructor has a default value, all parameters to its right must also have default values.
//     { 
//         name=n;
//         model=m;
//         price=p;
//     }
//     void get_data()
//     {
//         cout<<"Name of car : "<<name<<endl;
//         cout<<"Model : "<<model<<endl;
//         cout<<"Price : "<<price<<endl<<endl;
//     }
// };
// int main()
// {
//     Car audi("Hovel");
//     audi.get_data();
//     Car mercedes("Benz","2023 model");
//     mercedes.get_data();
//     Car Honda("Civic","2026 model",347884.34);
//     Honda.get_data();
//     return 0;
// }





// //Input Using Constructor
// #include<iostream>
// using namespace std;
// class student 
// {
//     private:
//     string name;
//     int id_number;
//     public:
//     student(string n,int i)
//     {
//         name=n;
//         id_number=i;
//     }
//     void display()
//     {
//         cout<<"Name : "<<name<<endl;
//         cout<<"ID number : "<<id_number<<endl;
//     }
// };
// int main()
// {
//     string n;
//     int i;
//     cout<<"Enter your name : ";
//     getline(cin,n);
//     cout<<"Enter your id number : ";
//     cin>>i;
//     student s1(n,i); // passing values to contructor. Constructor is called automatically when object is created
//     s1.display();
//     return 0;
// }


// very very important
// // char data with pointer and use of strcpy
// #include<iostream>
// #include<cstring>
// using namespace std;
// class Employee
// {
//     private:
//     char company[50];
//     string name;
//     string id_number;
//     string position;
//     float salary;
//     public:
//     Employee()
//     {
//         cout<<"Enter your company name : ";
//         cin.getline(company,50);
//         cout<<"Enter your full name : ";
//         getline(cin,name);
//         cout<<"Enter your ID number : ";
//         getline(cin,id_number);
//         cout<<"Enter your position in "<<company<<" : ";
//         getline(cin,position);
//         cout<<"Enter your salary : $";
//         cin>>salary;
//         cin.ignore();
//     }
//     Employee(const char* c,string n,string i,string p,float s)  // writing const with char* c is very important, without it, it gives warning
//     //  and code does not run,   b/c without 'const'   string to char* conversion occurs, which is not possible
//     {
//         strcpy(company,c);
//         name=n;
//         id_number=i;
//         position=p;
//         salary=s;
//     }
//     void get_data()
//     {
//         cout<<company<<endl<<name<<endl<<id_number<<endl<<position<<endl<<salary<<endl;
//     }
// };
// int main()
// { 
//     Employee e1("Google","Ali Khan","1234","Manager",80349.34);
//     Employee e2;
//     e2.get_data();
//     e1.get_data();
//     return 0;
// }


// // Input Using Parameterized Function
// #include<iostream>
// using namespace std;
// class Student
// {
//     private:
//     string name;
//     string r_number;
//     double fees;
//     public:
//     void data_entry(string n,string r,double f)
//     {
//         name=n;
//         r_number=r;
//         fees=f;
//     }
//     void get_data()
//     {
//         cout<<"Name : "<<name<<endl;
//         cout<<"Roll number : "<<r_number<<endl;
//         cout<<"Fees : "<<fees<<endl<<endl;
//     }
// };
// int main()
// {
//     int n;
//     cout<<"Enter the number of students in class : ";
//     cin>>n;
//     cin.ignore();
//     string name,r_number;
//     double fees;
//     Student s[n]; // array of 'n' student
//     for(int i=0;i<n;i++)
//     {
//         cout<<"Enter "<<i+1<<" student information"<<endl;
//         cout<<"Name : ";getline(cin,name);
//         cout<<"Roll number : ";getline(cin,r_number);
//         cout<<"Fee : ";cin>>fees;
//         s[i].data_entry(name,r_number,fees);
//         cin.ignore();
//     }
//     cout<<endl;
//     for(int i=0;i<n;i++)
//     {
//         cout<<"+++++=Student "<<i+1<<" data=+++++"<<endl;
//         s[i].get_data();
//     }
//     return 0;
// }







// different terms use in classes
// class is the blue print to create objects
// an object is an instance of a class
// access specifier control visibility of class member-->private can be access only inside the class while public can be access outside of the class
// protected are accessible inside class and derived classes
// construtor(initializes object) is the special function with the same name as the class--->automatically called when object is created
// destructor(destroys object) Special function that destroys objects, same name as class with ~ sign, called automatically when object goes out of scope.
// encapsulation(data hiding) is wrapping data and function inside class
// abstraction-->Hiding implementation details and showing only essential features, achieved using access specifiers.
// inheritance--> one class acquiring properties of another class
// polymorphism--> one function behaving differently in different situations
// (a)-->FUNCTION OVERLOADING --> same function name, different parameters
// (b)-->FUNCTION OVERRIDING--> redefining base class function in derived class
// this pointer --> a pointer that refers to the calling object (this->marks=marks;)
// static members --> shared among all objects of the class
// Friend function --> a function that can access private members of a class
// inline function --> defined inside class and suggested to compiler for inline expansion
// nested --> a class defined inside another class
// by using heap memory pointer to object is created, not the object itself
// dot operator has a higher precedence than * that's why () are used, like---->(*ptr).name;









