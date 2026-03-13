// printf and scanf works in iostream but in c++ language, we will use cin and cout 
// <<endl means jump into next line
// cout // << is called the insertion operator 

// there are three types of datatypes : built-in(int,float(decimal numbers od low precision),char,bool,short,
//long int,double(decimal numbers of high precision)), user defined(struct,union,enum), and 
//derived(array,function,pointer) data types

// in "iostream" stream means sequece of bytes

//when new keyword is used, new send request to heap memory, if there is any space free it is reserved and its address is returned


// global and local variables can have same name in c++ language
// also local variable have a higher precendence than global variable
// #include<iostream>
// using namespace std;
// int global=30;
// int main()
// {
//   int global=40;// higher means 40 will be printed instead of 30
//   cout<<global;
//   return 0;
// }

// #include<iostream>
// using namespace std;
// int glo=45;
// void print()
// {
//     cout<<"Here global value will be printed b/c it is out of local variable range : "<<glo;
// }
// int main()
// {
//     int glo=34;
//     print();
//     cout<<"\n";
//     cout<<"Here local variable value will be printed b/c it has a higher precedence : "<<glo;
//     return 0;
// }

// cin // >> is called the extration operator// << insertion operator
// #include<iostream> // press ctrl and then click on iostream, to see the iostream, iostream is system header file
// using namespace std;
// int main()
// {
//     int num1,num2;
//     cout<<"Enter value of num1 : ";
//     cin>>num1;
//     cout<<"Enter value of num2 : ";
//     cin>>num2;
//     cout<<"The sum of num1 and num2 is "<<num1+num2;
//     return 0;
// }

// system header file : it comes with compiler
// user defined header file : it is written by the programmer
//#include "this.h" this will produce an error, if it is not present in the current directory
// for example
// #include<iostream>
// #include"this.h"
// using namespace std;
// int main()
// {
//   cout<<"Hellooo brother!";
//   return 0;
// }
// cpp reference for header file, search this on google


//comparison operator
// #include<iostream>
// using namespace std;
// int main()
// {
//     int a=34,b=56;
//     cout<<"The value of a==b is "<<(a==b)<<endl;    
//     cout<<"The value of a!=b is "<<(a!=b)<<endl;    
//     cout<<"The value of a<=b is "<<(a<=b)<<endl;    
//     cout<<"The value of a>=b is "<<(a>=b)<<endl;    
//     cout<<"The value of a<b is "<<(a<b)<<endl;    
//     cout<<"The value of a>b is "<<(a>b)<<endl;  
//     return 0;  
// }

/*#include<iostream>
using namespace std;
int c = 35;
int main()
{
    // ============ Build in data types ============
    int a,b,c;
    cout<<"Enter your first number : ";
    cin>>a;
    cout<<"Enter your second number : ";
    cin>>b;
    cout<<"The sum of two numbers is : ";
    c=a+b;
    cout<<c<<endl;
    cout<<"The global c value is "<<::c;
    // ============= float, long double and double literals ============
    float num1=3.14f; // f is used with the floating number, if it is not used, it is considered 
                     // by the compiler as double, by writing f it does not create any impact on output

    long double num2=3.14l;// similarly l is used here, l means long double, writing l and f is necessary when we do function overloading
                        // we can also use F and L

    cout<<"The float number is : "<<num1<<endl<<"The double number is : "<<num2;

    return 0;

}*/

// ============= float, long double and double literals ============
// #include<iostream>
// using namespace std;
// int main()
// {
//    cout<<"The size of 34.4 is : "<<sizeof(34.4)<<endl;// when l or f is not used, it is considered as double which takes 8 byte  s
//    cout<<"The size of 34.4f is : "<<sizeof(34.4f)<<endl;// float takes 4 bytes 
//    cout<<"The size of 34.4F is : "<<sizeof(34.4F)<<endl; // same
//    cout<<"The size of 34.4l is : "<<sizeof(34.4l)<<endl; // long double takes 16 bytes
//    cout<<"The size of 34.4L is : "<<sizeof(34.4L)<<endl; // same
//    return 0;
// }


// #include<iostream>
// using namespace std;
// int main()
// {
//    // =========== reference variables =============
//    float x=342;
//    float &y=x; // here &y is a reference variable
//     // by using y it means, y is a copy of x. Modifying y does not affect x. Here y is considered to be as an independent variable initialized with value of x
//     // y gets its own memory location.
//     // if &y is used it means, any modification to y will change x, and vice versa.y is declared as a reference to x
//     // y does not get its own memory address to store a new value. Instead, y points to the exact same memory location as x.           
//    cout<<x<<endl<<y<<endl;   
//    cout<<&x<<endl<<&y<<endl;
//    return 0;
// }

// manipulators in C++ language
// endl is present in iostream, setw is present in iomanip
// #include<iostream>
// #include<iomanip>
// using namespace std;
// int main()
// {
//    int a=2,b=89,c=787,d=34123;
//    cout<<setw(4)<<a<<endl; // setw means setwidth, adds leading spaces (by default) if the output's length is less than the setw value.
//    cout<<setw(4)<<b<<endl; 
//    cout<<setw(4)<<c<<endl; 
//    cout<<setw(4)<<d<<endl; 
//    cout<<a<<endl; 
//    cout<<b<<endl; 
//    cout<<c<<endl;
//    cout<<d<<endl;
//    return 0; 
// }


// continue and break
// #include<iostream>
// using namespace std;
// int main()
// {
//    for(int i=0;i<40;i++)
//     {
//        if(i%2==0)
//         continue;
//        cout<<i<<endl;  
//     } 
//    cout<<endl; 
//    for(int i=0;i<10;i++)
//     {
//         if(i==7)
//          break;
//         cout<<i<<endl; 
//     } 
//    return 0; 
// }

// & is address of operator and * is dereference operator
// arrays
// #include<iostream>
// using namespace std;
// int main()
// {
//    int total_marks[6]={312,865,685,809,345,123};
//    int physics_marks[6];
//    physics_marks[0]= 64; 
//    physics_marks[1]= 84; 
//    physics_marks[2]= 34; 
//    physics_marks[3]= 87; 
//    physics_marks[4]= 23; 
//    physics_marks[5]= 59;  
//    cout<<"The total marks are ----->"<<endl;
//    for(int i=0;i<6;i++)
//     {
//        cout<<total_marks[i]<<endl; 
//     }
//    cout<<"The physics marks are ---->"<<endl; 
//    for(int i=0;i<6;i++) 
//     {
//        cout<<physics_marks[i]<<endl;
//     } 
//    return 0; 
// }

// pointers
// #include<iostream>
// using namespace std;
// int main()
// {
//    int marks[]={45,23,76,21,76};
//    int *p=marks;
//    cout<<"Address of marks : "<<&marks<<"  "<<marks<<"   "<<&marks[0]<<endl;
//    cout<<"Address in p now : "<<p<<endl; 
//    for(int i=0;i<5;i++)
//     {
//        cout<<*(p+i)<<endl; 
//     } 
//    cout<<"Address in p now : "<<p<<endl; 
//    for(int i=0;i<5;i++)
//     {
//        cout<<*p<<endl;
//        p++; 
//     }
//    cout<<"Address in p now : "<<p<<endl;
//    /*for(int i=0;i<5;i++)
//     {
//        cout<<*p<<endl;
//        p++; 
//     } // The address in p should be return to its base address otherwise it will print garbage values*/
//    p-=5;
//    cout<<"Address in p now : "<<p<<endl;         
//    return 0; 
// }


// call by reference
// #include<iostream>
// using namespace std;
// void swip_byreference(int *p1,int *p2)
// {
//    int temp=*p1;
//    *p1=*p2;
//    *p2=temp; 
// }
// void swip_byreferencevariable(int &a,int &b)
// {
//    int temp=a;
//    a=b;
//    b=temp; 
// }
// int main()
// {
//    int num1,num2;
//    cout<<"Enter two numbers : ";
//    cin>>num1>>num2;
//    cout<<"num1 : "<<num1<<". num2 : "<<num2<<". before swipping"<<endl;
//    swip_byreference(&num1,&num2); 
//    cout<<"num1 : "<<num1<<". num2 : "<<num2<<". After first swipping"<<endl;
//    swip_byreferencevariable(num1,num2);
//    cout<<"num1 : "<<num1<<". num2 : "<<num2<<". After second swipping"<<endl;
//    return 0;
// }

// 1
// #include<iostream>
// using namespace std;
// void print(const int x)
// {  
//    cout<<x<<endl; 
// }
// int main()
// {
//    int a=10;
//    print(a);
//    cout<<a<<endl;
//    return 0; 
// }

// 2
// #include<iostream>
// using namespace std;
// int main()
// {   // 1
//     // int a = 20;
//     // int &b = a;
//     // cout<<"Value of a is:"<<a<<endl;
//     // cout<<"Value of b is:"<<b<<endl;
//     // cout<<"Address of a is:"<<&a<<endl;
//     // cout<<"Address of b is:"<<&b<<endl;
//     // 2..... uninitialized references is not allowed
//     // like
//     // int x=23;
//     // int &y; //reference of : you have to initialize as well at the time of declaration 
//     // 3..... you can't change the reference from one variable to another like
//     // int p=56,r=67;
//     // int &q=p;
//     // q=r;
//     // 4.... you can't reference a  constant by variable name
//     // int &g=(5+3);// you can't do this
//     // const int &g=(5+3); //this is right way of reference to a constant
//     // int i=90;
//     // int &h=i; 
//     // 5..... we can change value at that address by any name of that address
//     // int e=67;
//     // int &f=e;
//     // cout<<e<<"\t"<<f<<endl;
//     // e++;
//     // cout<<e<<"\t"<<f<<endl;
//     // f=78;
//     // cout<<e<<"\t"<<f<<endl;
//     return 0;
// }



// #include<iostream>
// using namespace std;
// int & swipReferenceVar(int &a,int &b)
// {
//    int temp=a;
//    a=b;
//    b=temp;
//    return a; 
// }
// int main()
// {
//    int x=54,y=12;
//    swipReferenceVar(x,y)=789;
//    //Function returns reference to a, which is actually x.  
//   //= 789 assigns 789 to the returned reference → x = 789.   
//  //Returning a reference allows the function call to appear on the left side of an assignment.
// //This is powerful but should be used carefully to avoid confusing code. 
//    cout<<"The value of x is : "<<x<<". The value of y : "<<y<<endl;
//    return 0;
// }

// inline functions
// #include<iostream>
// using namespace std;
// inline int add(int a,int b) // Inline functions are used to reduce function call overhead and improve performance for small, frequently called functions.
// {    // when we write inline, the compiler replaces the function call with the function body, it means that function call is replaced by a+b,...no call, no return, faster execution.
//    return a+b; 
// }
// int main()
// {
//    int x,y;
//    cout<<"Enter two numbers : ";
//    cin>>x>>y;
//    cout<<"The sum of x and y : "<<add(x,y)<<endl; 
//    cout<<"The sum of x and y : "<<add(x,y)<<endl; 
//    cout<<"The sum of x and y : "<<add(x,y)<<endl;  // inline function is used when a simple code is called multiple times
//    cout<<"The sum of x and y : "<<add(x,y)<<endl; // it is not a good practice as it can create memory related problems if inline is used with large functions,recursive functions, functions called rarely, functions with complex logic
//    cout<<"The sum of x and y : "<<add(x,y)<<endl; 
//    cout<<"The sum of x and y : "<<add(x,y)<<endl; 
//    cout<<"The sum of x and y : "<<add(x,y)<<endl; 
//    cout<<"The sum of x and y : "<<add(x,y)<<endl; 
//    cout<<"The sum of x and y : "<<add(x,y)<<endl; 
//    cout<<"The sum of x and y : "<<add(x,y)<<endl; 
//    cout<<"The sum of x and y : "<<add(x,y)<<endl; 
//    cout<<"The sum of x and y : "<<add(x,y)<<endl; 
//    cout<<"The sum of x and y : "<<add(x,y)<<endl; 
//    cout<<"The sum of x and y : "<<add(x,y)<<endl; 
//    cout<<"The sum of x and y : "<<add(x,y)<<endl; 
//    return 0;
// }

// static variable
// #include<iostream>
// using namespace std;
// int add(int a,int b) // it is not a good practice to use inline and static combinly
// {
//     static int c=0; //when static is used, it means the variable will be initialized once during the execution of code.
//     c=c+1;          //when this function is called again (static int c=0) will not be executed, means c will not be initialized with 0 again, c value will remain the same.
//     return a+b+c;   //every time when function is called, c value is increased by 1.
// }
// int main()
// {
//    int x,y;
//    cout<<"Enter two numbers : ";
//    cin>>x>>y;
//    cout<<"The sum of x and y : "<<add(x,y)<<endl; 
//    cout<<"The sum of x and y : "<<add(x,y)<<endl; 
//    cout<<"The sum of x and y : "<<add(x,y)<<endl;  
//    cout<<"The sum of x and y : "<<add(x,y)<<endl; 
//    cout<<"The sum of x and y : "<<add(x,y)<<endl; 
//    cout<<"The sum of x and y : "<<add(x,y)<<endl; 
//    cout<<"The sum of x and y : "<<add(x,y)<<endl; 
//    cout<<"The sum of x and y : "<<add(x,y)<<endl; 
//    cout<<"The sum of x and y : "<<add(x,y)<<endl; 
//    cout<<"The sum of x and y : "<<add(x,y)<<endl; 
//    cout<<"The sum of x and y : "<<add(x,y)<<endl; 
//    cout<<"The sum of x and y : "<<add(x,y)<<endl; 
//    cout<<"The sum of x and y : "<<add(x,y)<<endl; 
//    return 0;
// }


// default arguments
// #include<iostream>
// using namespace std;
// float moneyEarned(int paisa,float interest_rate = 1.04) //interest_rate=1.04 is called default value
// {                            // default arguments are written at right side, like (float interest_rate=1.04,int paisa) is not allowed
//    return paisa*interest_rate;
// }
// int main()
// {
//    int money;
//    cout<<"Enter how much money you are wishing to invest : ";
//    cin>>money; 
//    cout<<"If you have money : "<<money<<". Your profit per annum will be : "<<moneyEarned(money)<<endl; 
//    cout<<"If you have money : "<<money<<". Your profit per annum will be : "<<moneyEarned(money,1.10)<<endl;
//    // if you don't manually give interest rate, it will consider interest rate by default 
//    return 0; 
// }


//1 factorial of a number through recursion
// #include<iostream>
// using namespace std;
// int factorial(int n)
// {
//    if(n<=1)
//     return 1; 
//    return n*factorial(n-1); 
// }
// // Step by step calculation of factorial(4)
// // factorial(4)=4*factorial(3);
// // factorial(4)=4*3*factorial(2);
// // factorial(4)=4*3*2*factorial(1);
// // factorial(4)=4*3*2*1; // = 24
// int main()
// {
//    // factorial of a number, like n!=n*(n-1)!
//    int num;
//    cout<<"Enter a number : ";
//    cin>>num;
//    cout<<"The factorial of "<<num<<" is "<<factorial(num)<<endl;
//    return 0; 
// }


// new and delete reserved keywords
// #include<iostream>
// using namespace std;
// int main()
// {
//    // 1 
//    int *p= new int(34);
//    cout<<"The value of *p : "<<*p<<endl<<"The address inside p : "<<p<<endl<<"The address of p : "<<&p<<endl;
//    cout<<(0x164a5ac1450); 
//    delete p;
//   // 2
//    int *arr=new int[4];
//    arr[0]=43;  
//    arr[1]=54;  // or  *(arr+1)=54;
//    arr[2]=89; // or  *(arr+2)=89;
//    arr[3]=23;// or *(arr+3)=23;  
//    for(int i=0;i<4;i++)
//     cout<<arr[i]<<endl;
//    delete[] arr; 
//    cout<<arr[0];
//    return 0; 
// }






