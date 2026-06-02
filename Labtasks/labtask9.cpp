// Question # 01
// #include<iostream>
// using namespace std;
// class Distance   // class Distance
// {
//     private:
//     float dis_feet;
//     float dis_inches;
//     public:
//     // constructor operator + overloading
//     Distance operator+(const Distance &numA)
//     {
//         Distance temp;
//         temp.dis_feet=this->dis_feet+numA.dis_feet;
//         // condition for correct arrangement of inches
//         if(this->dis_inches+numA.dis_inches<12)
//         {
//             temp.dis_inches=this->dis_inches+numA.dis_inches;
//         }
//         else if(this->dis_inches+numA.dis_inches==12)
//         {
//             temp.dis_feet++;
//             temp.dis_inches=0.0;
//         }
//         else
//         {
//             float tem=this->dis_inches+numA.dis_inches;
//             temp.dis_inches=(int)tem%12;   // % works with integer value, that's why it is type caste
//             temp.dis_feet+=tem/12;
//         }
//         return temp;
//     }
//     // == operator overloading 
//     bool operator==(const Distance &numA)
//     {
//         if(this->dis_feet==numA.dis_feet&&this->dis_inches==numA.dis_inches)
//         return true;
//         else
//         return false;
//     }
//     // setData method for input of data
//     void setData()
//     {
//         cout<<"Enter the number of feets : ";
//         cin>>dis_feet;
//         cout<<"Enter the number of inches : ";
//         cin>>dis_inches;
//     }
//     // show function for display of data
//     void showData()
//     {
//         cout<<"The distance is : "<<dis_feet<<" feet and "<<dis_inches<<" inches "<<endl;
//     }
// };
// // start of main function
// int main()
// {
//     Distance d1,d2;  // creation of two objects of Distance
//     d1.setData();
//     d2.setData();

//     Distance d3=d1+d2;  // adding two objects through + operator overloading
//     cout<<"d1+d2 distance ---> ";
//     d3.showData();

//     if(d1==d2)  // == operator overloading for comparison
//     cout<<"d1 is equal to d2"<<endl;
//     else
//     cout<<"d1 is not equal to d2"<<endl;
//     return 0;
// }






// Question # 02
// #include<iostream>
// // string library for strlen, and strcpy
// #include<cstring>
// using namespace std;
// // Student class
// class Student
// {
//     private:
//     char *name;
//     int roll_number;
//     public:
//     // Constructor
//     Student()
//     {
//         char noom[40];
//         cout<<"Enter Your Name : ";
//         cin.getline(noom,40);
//         name=new char[strlen(noom)];
//         strcpy(name,noom);
//         cout<<"Enter Your Roll Number : ";
//         cin>>roll_number;
//     }
//     // sho_Data method for showing data
//     void show_Data()
//     {
//         cout<<"Your Name is "<<name<<", and Your Roll Number is "<<roll_number<<endl;
//     }
//     // Destructor method
//     ~Student()
//     {
//         delete[] name;
//     }
// };
// // start of main function
// int main()
// {
//     Student S1;
//     Student S2=S1; // creating shallow copy

//     S1.show_Data();
//     S2.show_Data();
//     return 0;
// }





// Question # 03
// #include<iostream>
// #include<cstring>
// using namespace std;
// class Student
// {
//     private:
//     char *name;
//     int roll_number;
//     public:
//     // constructor
//     Student()
//     {
//         char noom[40];
//         cout<<"Enter Your Name : ";
//         cin.getline(noom,40);
//         name=new char[strlen(noom)];
//         strcpy(name,noom);
//         cout<<"Enter Your Roll Number : ";
//         cin>>roll_number;
//     }
//     // for deep copy
//     Student(const Student &numA)
//     {
//         name = new char[strlen(numA.name) + 1];
//         strcpy(name, numA.name);
//         roll_number = numA.roll_number;
//     }
//     // = assignment deep copy constructor
//     Student& operator=(const Student &numA)
//     {
//         if (this != &numA)
//         {
//             delete[] name; // free old memory

//             name = new char[strlen(numA.name) + 1];
//             strcpy(name, numA.name);

//             roll_number = numA.roll_number;
//         }
//         return *this;
//     }
//     // method for showing data
//     void show_Data()
//     {
//         cout<<"Your Name is "<<name<<", and Your Roll Number is "<<roll_number<<endl;
//     }
//     // destructor or freeing data
//     ~Student()
//     {
//         delete[] name;
//     }
// };
// // start of main function
// int main()
// {
//     Student S1;
//     Student S2=S1; // call deep copy constructor
//     cin.ignore();
//     Student S3;
//     S3=S2;

//     S1.show_Data();
//     S2.show_Data();
//     S3.show_Data();
//     return 0;
// }





 
















