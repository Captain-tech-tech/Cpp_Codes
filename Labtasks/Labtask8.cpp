// // Question # 01
// #include<iostream>
// using namespace std;
// class BankAccount
// {
//     private:
//     static double total_balance;
//     double initial_deposit;
//     public:
// // constructor function
//     BankAccount(double num)
//     {
//         initial_deposit=num;
//         total_balance+=initial_deposit;
//     }
// // static function for showing total balance
//     static void display_total_amount()
//     {
//         cout<<"The total balance in all the account is : $"<<total_balance<<endl;
//     }
// // destructor function
//     ~BankAccount()
//     {
//         cout<<"Bank Account Closed!"<<endl;
//     }
// };
// // static data member initialization
// double BankAccount::total_balance=0.0;
// int main()
// {
//     BankAccount b1(5678); 
//     b1.display_total_amount();
//     BankAccount b2(678);
//     b2.display_total_amount();
//     BankAccount b3(9023);
//     b3.display_total_amount();
//     return 0;
// }




// Question # 02
// #include<iostream>
// using namespace std;
// class LibraryBook
// {
//     private:
//     static int counter;
//     bool add;
//     public:
// // constructor function
//     LibraryBook()
//     {
//         if(counter>=5)
//         {
//             cout<<"Library is full, cannot add more book!"<<endl;
//             add=false;
//         }
//         else if(counter<5)
//         {
//             counter++;
//             add=true;
//         }
//     }
// // static function for showing counter number
//     static void display_books_count()
//     {
//         cout<<"The total number of book are : "<<counter<<endl;
//     }
// // destructor method
//     ~LibraryBook()
//     {
//         if(add)
//         {
//             cout<<counter<<endl;
//             counter--;
//         }    
//     }
// };
// // initializing counter static member
// int LibraryBook::counter=0;
// int main()
// {
//     LibraryBook l1;
//     LibraryBook::display_books_count();
//     LibraryBook l2;
//     LibraryBook::display_books_count();
//     LibraryBook l3;
//     LibraryBook::display_books_count();
//     LibraryBook l4;
//     LibraryBook::display_books_count();
//     LibraryBook l5;
//     LibraryBook::display_books_count();
//     LibraryBook l6;
//     LibraryBook::display_books_count();
//     return 0;
// }




// Question # 03
#include<iostream>
using namespace std;
// class employee
class Employee
{
    private:
    static int counter; // static variable for storing employee number
    bool condition;
    public:
// constructor function
    Employee()
    {
        if(counter<10)
        {
            cout<<"Class Object successfully created!"<<endl;
            condition=true;
            counter++;
        }
        else if(counter>=10)
        {
            cout<<"No more employees can be added!"<<endl;
            condition=false;
        }
    }
// static method
    static void display_counter()
    {
        cout<<"There are now total "<<counter<<" employee"<<endl;
    }
// destructor
    ~Employee()
    {
        if(condition)
        {
            cout<<"counter : "<<counter<<endl;
            counter--;
        }
    }
};
// definition and initialization of counter static member
int Employee::counter=0;
int main()
{
// creating objects
    Employee e1;
    Employee::display_counter();
    Employee e2;
    Employee::display_counter();
    Employee e3;
    Employee::display_counter();
    Employee e4;
    Employee::display_counter(); 
    Employee e5;
    Employee::display_counter();
    Employee e6;
    Employee::display_counter();
    Employee e7;
    Employee::display_counter();
    Employee e8;
    Employee::display_counter();
    Employee e9;
    Employee::display_counter();
    Employee e10;
    Employee::display_counter();
    Employee e11;
    Employee::display_counter();
    Employee e12;
    Employee::display_counter();
    Employee e13;
    Employee::display_counter();
    Employee e14;
    Employee::display_counter();
    return 0;
}




































