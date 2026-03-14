// Why is it important to declare the type of the variable that a pointer points to ?
// The type tells the compiler how many bytes to read or write, after dereferencing.
// What kind of data lives at that address, how big it is, and how to safely use it.
// If “p” is a character-pointer then “p++” will increment “p” by
// one byte (next location)
// if “p” is an integer-pointer its value on “p++” would be
// incremented by 4 bytes (next loc.)


// #include<iostream>
// using namespace std;
// int main()
// {
//     const int *p;//1
//     p=new int(78);
//     cout<<p<<endl<<*p;
//     const int a=10;//2
//     p=&a;
//     cout<<endl<<p<<endl<<&a<<endl<<*p<<endl<<a;
//     const int b=20;//3
//     p=&b;
//     cout<<endl<<p<<endl<<&b<<endl<<*p<<endl<<b;
//     const int *p1;//4
//     int num=23;
//     p1=&num;
//     cout<<endl<<endl<<&num<<endl<<p1<<endl<<*p1<<endl<<num<<endl;
//     int *p2;//5
//     int marks=345; // you can't store address of const int in non-const pointer // const int marks=345; can't be used
//     p2=&marks;
//     cout<<endl<<endl<<&marks<<endl<<p2<<endl<<*p2<<endl<<marks<<endl;
//     return 0;
// }


// #include<iostream>
// using namespace std;
// int main()
// {
//     int *p;
//     cout<<p<<endl;  //0x1
//     int *q=NULL;
//     cout<<q<<endl; // 0
//     // repeatedly gives the same values
//     return 0;
// }


// #include<iostream>
// using namespace std;
// int main()
// {
//     int *p=new(nothrow) int;//When we use “nothrow” with new operator, 
//     if(!p)                  //it will either return a valid address or return 0 (NULL).
//     {
//        cout<<"Memory allocation failed!\n";
//     }
//        cout<<"Memory is successfully reserved!"<<endl;
//     return 0;
// }


// #include<iostream>
// using namespace std;
// int main()
// {
//     int *p1=new(nothrow) int;
//     if(p1!=NULL)
//     {
//     *p1=34;
//     delete p1;
//     p1=nullptr; // nullptr is best programming than NULL   
//     }
//     return 0;
// }


// #include<iostream>
// using namespace std;
// int* add(void)
// {
//     int y=10;
//     cout<<&y<<endl<<y<<endl;
//     return &y; // this return address of local variable
// }
// //y is created on the stack. when add() finishes, its stack frame is destroyed.
// // y no longer exists. &y becomes a dangling pointer.
// int main()
// {
//     int *a=add();
//     cout<<*a<<endl<<a<<endl;
//     return 0;
// }


// // int const *p; means Pointer to constant int
// // int *const p; allows changing the value but not the address
// // const int *const p means both pointer and value are const
// // const applies to what’s immediately on its left
// // If nothing is on the left, it applies to the right
// #include<iostream>
// using namespace std;
// int main()
// {  // only 2 and 3 are correct
//     int a = 10;
//     int b = 20;
// //Q1
//    const int *p=&a;
//    *p=15;
// //Q2
//    const int *p=&a; 
//    p=&b;
// // Q3
//    int *const p=&a;
//    *p=30;
// //Q4
//    int *const p=&a;
//    p=&b;
// //Q5
//    const int *const p=&a;
//    *p=40;
// //Q6
//    const int *const p=&a;
//    p=&b;
//     return 0;
// }


// // A void pointer is a pointer that can store the address of any data type.
// // It knows where the data is, but not what type of data is.
// // Pointer arithmetic is NOT allowed on void*, because size is unknown.like ptr++
// #include<iostream>
// using namespace std;
// void printValue(void* data, char type)
// {
//     if(type=='i')
//       cout<<*(int*)data<<endl;
//     else if(type=='f')
//       cout<<*(float*)data<<endl;
// }
// int main()
// {
//     int a=21;
//     void *ptr;
//     ptr=&a;
//     cout<<ptr<<endl<<&a<<endl<<a<<endl<<*(int*)ptr<<endl;//first * is used for dereference
//     float b=67.34;                                      //second * is used for type casting      
//     ptr=&b;
//     // cout<<*ptr; you can't deference void pointer directly
//     cout<<ptr<<endl<<&b<<endl<<b<<endl<<*(float*)ptr<<endl;
//     int arr[3]={10,20,30};
//     void* ptr1=arr;
//     cout<<((int*)ptr1)[0]<<endl; 
//     cout<<((int*)ptr1)[1]<<endl; 
//     cout<<((int*)ptr1)[2]<<endl;
//     int c=5;
//     float d=2.5;
//     printValue(&c,'i');
//     printValue(&d,'f');
//     int x=100;
//     int *am=&x;
//     char *pm;
//     pm=(char*)am;
//     cout<<am<<endl<<pm<<endl;
//     return 0;
// }


// relation b/w array and pointer
// #include<iostream>
// using namespace std;
// int main()
// {
//     int arr[6];
//     cout<<"Enter elements of your array : ";
//     for(int i=0;i<6;i++)
//      cin>>arr[i];
//     cout<<endl<<"Your entered array is : ";
//     for(int i=0;i<6;i++)
//      cout<<arr[i]<<" ";
//     cout<<endl<<"Your entered array addresses : ";
//     for(int i=0;i<6;i++)
//      cout<<&arr[i]<<" ";     
//      cout<<endl<<"Your array access through pointer : " ;
//      int *ptr=arr;
//     for(int i=0;i<6;i++)
//      cout<<*(ptr+i)<<" ";
//      cout<<endl;
//      cout<<"Your array addresses through pointer : ";
//      for(int i=0;i<6;i++)
//      cout<<(ptr+i)<<" ";
//      cout<<endl;
//     return 0;
// }


// arithmetic operations
// #include<iostream>
// using namespace std;
// int main()
// {
//     int arr[]={34,7,24,35};
//     int *ptr=arr;
//     cout<<*(ptr+1)<<endl<<*(1+ptr)<<endl;
//     // cout<<*(ptr+ptr)<<endl; is wrong
//     cout<<*((ptr++)-1)<<endl;
//     // cout<<*(1-ptr)>>endl; is wrong
//     cout<<(ptr+3)-(ptr)<<endl;//it shows the number of spaces, higher address is subtracted 
//                 //from lower address and then divided by size of respective dat type
//     cout<<(ptr==ptr)<<endl<<(ptr==(ptr+1))<<endl;
//     //cout<<(1==ptr)<<endl; is wrong, C++ forbids comparison between pointer and integer
//     cout<<(ptr==0)<<endl<<(ptr==NULL)<<endl<<(ptr==nullptr)<<endl;           
//     return 0;
// }


// pointer array
// #include<iostream>
// using namespace std;
// int main()
// {
//     int arr[4]={34,54,13,64};
//     int *ptr[4];
//     for(int i=0;i<4;i++)
//      {
//         ptr[i]=&arr[i];
//      }
//     for(int i=0;i<4;i++)
//      {
//         cout<<ptr[i]<<endl<<&arr[i]<<endl;
//         cout<<*ptr[i]<<endl<<arr[i]<<endl;
//      } 
//     return 0;
// }


// accessing matrix elements through pointer array
// #include<iostream>
// using namespace std;
// int main()
// {
//     int arr[3][4];
//     cout<<"Enter elements in your 2D array!\n";
//     for(int i=0;i<3;i++)
//      {
//         cout<<"Enter 4 elements in "<<i+1<<" row : ";
//         for(int j=0;j<4;j++)
//          cin>>arr[i][j];
//      }
//      int *ptr[3];
//      for(int i=0;i<3;i++)
//       {
//         ptr[i]=&arr[i][0];
//       }
//      cout<<*(*(ptr+1)+2)<<endl; 
//      cout<<*(*(ptr+2)+3);
//     return 0;
// }


// dynamically allocate memory for 2D array in C++
// #include<iostream>
// using namespace std;
// #define M 3
// #define N 4
// int main()
// {
//     int *ptr=new(nothrow) int[M*N];
//     if(ptr==nullptr)
//      cout<<"Memory allocation failed!\n"<<endl;
//     else
//      cout<<"Memory allocated successfully!\n"<<endl;
//     for(int i=0;i<M;i++)
//      {
//         for(int j=0;j<N;j++)
//          *((ptr+i*N)+j)=rand()%100; // %1000
//      }  
//     for(int i=0;i<M;i++)
//      {
//         for(int j=0;j<N;j++) 
//           cout<<*((ptr+i*N)+j)<<" "; // or ((ptr+i*N)[j])
//           cout<<endl;
//      } 
//      delete[] ptr;
//     return 0;
// }


// creating dynamic 2D array (using single pointer)
// #include<iostream>
// using namespace std;
// int main()
// {
//     int *ptr[2];
//     ptr[0]=new int[4]{34,12,57,35};
//     ptr[1]=new int[4]{54,23,46,32};
//     for(int i=0;i<2;i++)
//      {
//         for(int j=0;j<4;j++)
//          cout<<ptr[i][j]<<" "; // or cout<<*(*(ptr+i)+j)<<" ";
//         cout<<endl; 
//      }
//      delete[] ptr[0];
//      delete[] ptr[1];
//     return 0;
// }


// creating dynamic 2D array (using double pointers)
// #include<iostream>
// using namespace std;
// int main()
// {
//     int **p1=new int*[4];
//     for(int i=0;i<4;i++)
//      {
//         p1[i]=new int[3];
//         for(int j=0;j<3;j++)
//          *(*(p1+i)+j)=i*2+j*2;
//      }
//     for(int i=0;i<4;i++)
//      {
//         for(int j=0;j<3;j++)
//          cout<<*(*(p1+i)+j)<<" "; //p1[i][j];
//         cout<<endl; 
//      } 
//     for(int i=0;i<3;i++)
//       delete[] p1[i];
//       delete p1;
//     return 0;
// }


// #include <iostream>
// using namespace std;
// int main() {
//     char str[50];
//     char ch;
//     int i = 0;
//     while ((ch = getchar()) != '\n' && i < 49) {
//         str[i++] = ch;
//     }
//     str[i] = '\0';
//     cout << str;
//     return 0;
// }




