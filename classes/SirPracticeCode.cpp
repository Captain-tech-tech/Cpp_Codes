// // In C++, when you define a member function inside the class, 
// // the compiler treats the entire class as one unit, that means all member
// // functions are known to the compiler regardless of their order inside the class.

// // const value can't be assign inside the constructor

// // Initializer lists (: book_id(...)) are ONLY allowed in constructors

#include<iostream>
#include<cstring>
using namespace std;
// start of the class
class Book
{
    private:
    const string book_id;
    char *title;
    char *auther;
    static int book_count;
    public:
    // constructor
    Book():book_id(getbookid()) // initializer list
    {
        cout<<"Enter book name : ";
        char temp1[40];
        cin.getline(temp1,40);
        title=new char[strlen(temp1)+1]; // strlen does not count '\0' that's why +1 is added
        strcpy(title,temp1);
        cout<<"Enter author name : ";
        char temp2[40];
        cin.getline(temp2,40);
        auther=new char[strlen(temp2)+1];
        strcpy(auther,temp2);
        book_count++;
    }
    // deep copy constructor
    Book(const Book &object):book_id(object.book_id) 
    {
        // book_id=object.book_id; this is wrong, const data member can't assign value inside constructor
        title=new char[strlen(object.title)];
        title=object.title;
        auther=new char[strlen(object.auther)];
        auther=object.auther;
        book_count++;
    }
    // for taking unique book id, which can't be change once assigned
    static string getbookid()
    {
        string id;
        cout<<"Enter your book unique id : ";
        getline(cin>>ws,id);
        return id;
    }
    // setter function for changing value if needed by user
    void Set_data()
    {
        
    }
    // destructor to free dynamic memory
    Book()
    {
        delete[] title;
        delete[] auther;
    }
};
int Book::book_count=0;
int main()
{

    return 0;
}


































// global and local ojects of a class ===> very important
// #include<iostream>
// using namespace std;
// class Exam
// {
//     int marks;
//     public:
//     Exam(int x):marks(x)
//     {
//         cout<<"Constructor "<<marks<<endl;
//     }
//     ~Exam()
//     {
//         cout<<"Destructor "<<marks<<endl;
//     }
// };
// Exam obj1(56);
// void create()
// {
//     Exam obj2[3]{45,57,23};
// }
// int main()
// {
//     Exam obj3(89);
//     create();
//     Exam obj4(78);
//     return 0;
// }





