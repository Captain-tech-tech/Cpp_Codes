// Question # 02
// // simple code showing use of constructor and destructor
// #include<iostream>
// using namespace std;
// class Book
// {
//     private:
//     string book_name;
//     string writer;
//     float price;
//     public:
//     Book(string n,string w,float p)
//     {
//         book_name=n;
//         writer=w;
//         price=p;
//     }
//     ~Book()// destructor is called for second object and then called for first object
//     {
//         cout<<endl<<"````----Book Details----````"<<endl;
//         cout<<"Book Title : "<<book_name<<endl;
//         cout<<"Author : "<<writer<<endl;
//         cout<<"Price : "<<price<<endl;
//     }
// };
// int main()
// {
//     string n,w;float p;
//     cout<<"Enter book title : ";
//     getline(cin,n);
//     cout<<"Enter Author name : ";
//     getline(cin,w);
//     cout<<"Enter price of the book : ";
//     cin>>p;
//     cin.ignore();
//     Book b1(n,w,p); // first object 
//     cout<<"Enter book title : ";
//     getline(cin,n);
//     cout<<"Enter Author name : ";
//     getline(cin,w);
//     cout<<"Enter price of the book : ";
//     cin>>p;
//     Book b2(n,w,p); // second object
//     return 0;
// }

// // Question # 03
// #include<iostream>
// using namespace std;
// class Rectangle
// {
//     float length;
//     float width;
//     public:
//     void input()
//     {
//         cout<<"Enter the length of the rectangle : ";
//         cin>>length;
//         cout<<"Enter the width of the rectangle : ";
//         cin>>width;
//     }
//     double calculate_area(float length,float width)
//     {
//         return double(length*width);
//     }
//     void get_area()
//     {
//         cout<<"The area of rectangle with length "<<length<<", and width "<<width<<" is "<<calculate_area(length,width)<<endl;
//     }
// };
// int main()
// {
//     cout<<"Enter the number of rectangles : ";
//     int n;
//     cin>>n;
//     Rectangle arr[n];
//     cout<<"========+Enter data for "<<n<<" rectangles+========\n";
//     for(int i=0;i<n;i++)
//     {
//         cout<<"Rectangle : "<<i+1<<endl;
//         arr[i].input();
//     }
//     for(int i=0;i<n;i++)
//     {
//         (*(arr+i)).get_area();
//     }
//     return 0;
// }


// // Question # 04
// #include<iostream>
// using namespace std;
// class Result
// {
//     private:
//     string name;
//     int r_number;
//     float marks[5];
//     public:
//     // taking student data
//     void set_data()
//     {
//         cin.ignore();
//         cout<<"Enter your name : ";
//         getline(cin,name);
//         cout<<"Enter your roll number : ";
//         cin>>r_number;
//         cout<<"Enter your marks for 5 papers\n";
//         for(int i=0;i<5;i++)
//         {
//             cout<<"Enter "<<i+1<<" paper marks : ";
//             cin>>marks[i];
//             while(marks[i]<0||marks[i]>100)
//             {
//                 cout<<"You have entered wrong marks"<<endl;
//                 cout<<"Enter "<<i+1<<" paper marks (0-100) : ";
//                 cin>>marks[i];
//             }
//         }
//     }
//     // calculating average of five papers of a student
//     double average()
//     {
//         float sum=0.0;
//         for(int i=0;i<5;i++)
//         {
//             sum+=marks[i];
//         }
//         return (double)sum/5;
//     }
//     // method for display whole data of a student and his/her average
//     void get_data()
//     {
//         cout<<"Name : "<<name<<endl;
//         cout<<"Roll number : "<<r_number<<endl;
//         cout<<"~~~+Marks+~~~\n";
//         for(int i=0;i<5;i++)
//         {
//             cout<<i+1<<". Paper : "<<*(marks+i)<<endl;
//         }
//         cout<<"The average marks are : "<<average()<<endl;
//         if(average()>=50)
//         cout<<"Passed!"<<endl;
//         else
//         cout<<"Failed!"<<endl;
//     }
// };
// int main()
// {
//     cout<<"Enter the number of student in your class : ";
//     int s;cin>>s; // taking students number
//     Result r[s];// creating s number of objects
//     for(int i=0;i<s;i++)// taking data of s student one by one
//     {
//         cout<<"------Enter data of Student("<<i+1<<")------"<<endl;
//         r[i].set_data();
//     }
//     for(int i=0;i<s;i++) // displaying data of s students one by one
//     {
//         cout<<"~~~~```Student("<<i+1<<") information```~~~~"<<endl;
//         (*(r+i)).get_data();
//     }
//     return 0;
// }





