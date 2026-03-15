// 01
// #include<iostream>
// using namespace std;
// int main()
// {
//     int arr[][3]=
//     {
//         {34,23,35},
//         {54,12,78},
//         {89,78,76}
//     };
//     int m=3,n=3;
//     // int *arr1=&arr[0][0];
//     for(int i=0;i<m;i++)
//     {
//         for(int j=0;j<n;j++)
//         // cout<<*((arr1+i*n)+j)<<" "; // these two formulai are used for only pointers.
//         cout<<*(((int*)arr+i*n)+j)<<" ";
//         cout<<endl;
//     }
//     cout<<endl<<endl;
//     for(int i=0;i<3;i++)
//      {
//         for(int j=0;j<3;j++)
//          cout<<arr[i][j]<<" ";
//         cout<<endl; 
//      }
//     return 0;
// }   

// 02
// #include<iostream>
// using namespace std;
// int main()
// {
//     void * ptr;
//     int a=34;
//     ptr=&a;
//     cout<<*(int*)ptr<<endl<<ptr<<endl;
//     char b='r';
//     ptr=&b;
//     cout<<*(char*)ptr<<endl<<ptr<<endl;
//     float c=34.32;
//     ptr=&c;
//     cout<<*(float*)ptr<<endl<<ptr<<endl;
//     return 0;
// }

// 03
// #include<iostream>
// using namespace std;
// int main()
// {
//     int numbers[]={34,45,23,45,23,45,56};
//     cout<<numbers[0]<<endl;
//     cout<<numbers<<endl;
//     cout<<*numbers<<endl;
//     return 0;
// }


// creating 2D array 
// Two basic methods---> (1) Using a single Pointer, (2) using a Array of Pointers
// through single pointer is the question 01



// // while using a single pointer
// #include<iostream>
// using namespace std;
// int main()
// {
//     int arr[][3]=
//     {
//         {34,45,23},
//         {56,34,64},
//         {76,89,78}
//     };
//     int m=3,n=3;
//     int *arr1=arr[0];
//     for(int i=0;i<m;i++)
//     {
//         for(int j=0;j<n;j++)
//         cout<<*((arr1+i*n)+j)<<" ";
//         cout<<endl;
//     }
//     cout<<endl<<endl;
//     for(int i=0;i<m;i++)
//     {
//         for(int j=0;j<n;j++)
//         cout<<*(((int*)arr+i*n)+j)<<" ";
//         cout<<endl;
//     }
//     return 0;
// }


// 2D array through pointer array
// #include<iostream>
// using namespace std;
// int main()
// {
//     int size;
//     cout<<"Enter the size of pointer array : ";
//     cin>>size;
//     int *p[size];
//     for(int i=0;i<size;i++)
//     {
//         p[i]=new int[5];
//     }
//     for(int i=0;i<size;i++)
//     {
//         cout<<"Enter elements in your "<<i+1<<" row : ";
//         for(int j=0;j<5;j++)
//         cin>>*(*(p+i)+j);
//     }
//     for(int i=0;i<size;i++)
//     {
//         for(int j=0;j<5;j++)
//         {
//             cout<<*(*(p+i)+j)<<" ";
//         }
//         cout<<endl;
//     }
//     for(int i=0;i<size;i++)
//     delete[] p[i];
//     return 0;
// }


// 2D array which asks for number of rows and then ask for number of elements in each row and take numbers
// from user and then print the 2D array 
// #include<iostream>
// using namespace std;
// int main()
// {
//     int r;
//     cout<<"Enter the number of rows : ";
//     cin>>r;
//     int **p=new int* [r];
//     int c;
//     int *row_size=new int[r];
//     for(int i=0;i<r;i++)
//     {
//         cout<<"Enter the number of elements in "<<i+1<<" row : ";
//         cin>>c;
//         p[i]=new int[c];  
//         *(row_size+i)=c; 
//     }
//     for(int i=0;i<r;i++)
//     {       
//         cout<<"Enter "<<*(row_size+i)<<" numbers in "<<i+1<<" row : ";
//         for(int j=0;j<*(row_size+i);j++)
//         cin>>*(*(p+i)+j); 
//     }
//     for(int i=0;i<r;i++)
//     {
//         for(int j=0;j<*(row_size+i);j++)
//         cout<<*(*(p+i)+j)<<" ";
//         cout<<endl;
//     } 
//     for(int i=0;i<r;i++)
//     delete[] p[i];
//     delete[] p;
//     p=nullptr;
//     delete[] row_size;
//     row_size=nullptr;
//     return 0;
// }






// three ways to declare structure
// #include<iostream>
// #include<cstring>
// using namespace std;
// struct Student
// {
//     string id_number;
//     char name[40];
//     float fee;
//     int semester;
//     float gpa;
// };
// int main()
// {
//     Student s1;
//     s1.id_number="0053AA";
//     strcpy(s1.name,"Muhammad Atif");
//     s1.fee=3423.212;
//     s1.semester=2;
//     s1.gpa=3.48;
//     Student s2={"90IUUI0","Muhammad Kashif",23241.23,8,3.90};
//     Student s3;
//     cout<<"Enter your ID number : ";
//     getline(cin,s3.id_number);
//     cout<<"Enter your name : ";
//     cin.getline(s3.name,40);
//     cout<<"Enter you fee : ";
//     cin>>s3.fee;
//     cout<<"Enter your semester : ";
//     cin>>s3.semester;
//     cout<<"Enter your GPA : ";
//     cin>>s3.gpa;
//     cout<<"s1"<<endl<<s1.id_number<<endl<<s1.name<<endl<<s1.fee<<endl<<s1.semester<<endl<<s1.gpa<<endl;
//     cout<<"s2"<<endl<<s2.id_number<<endl<<s2.name<<endl<<s2.fee<<endl<<s2.semester<<endl<<s2.gpa<<endl;
//     cout<<"s3"<<endl<<s3.id_number<<endl<<s3.name<<endl<<s3.fee<<endl<<s3.semester<<endl<<s3.gpa<<endl;
//     return 0;
// }


// array as a structure member and array of structure
// #include<iostream>
// #include<cstring>
// using namespace std;
// struct Employee // 01
// {
//     string id;
//     string name;
//     float salary;
// };
// struct Student // 02
// {
//     char name[40];
//     string roll_number;
//     int semester;
//     float marks[5];
// };
// struct UniStudent  // 03
// {
//     string name;
//     int papers;
//     float *marks;
// };
// int main()
// {
//     // structure # 03
//     UniStudent u1;
//     cout<<"Enter name of university student : ";
//     getline(cin,u1.name);
//     cout<<"Enter the number of papers : ";
//     cin>>u1.papers;
//     u1.marks=new float[u1.papers];
//     cout<<"Enter marks for "<<u1.papers<<" papers : ";
//     for(int i=0;i<u1.papers;i++)
//     {
//         cin>>u1.marks[i];
//     }
//     delete[] u1.marks;
//     // structure # 02
//     // Student s1;
//     // cout<<"Enter your name : ";
//     // cin.getline(s1.name,40);
//     // cout<<"Enter roll number : ";
//     // getline(cin,s1.roll_number);
//     // cout<<"Enter your semester : ";
//     // cin>>s1.semester;
//     // cout<<"Enter marks of five papers : ";
//     // for(int i=0;i<5;i++)
//     // {
//     //     cin>>s1.marks[i];
//     // }
//     // structure # 01
//     // Employee e1={"343230sd","Ahmad Ali",34543.34};
//     // Employee e2=e1;
//     // cout<<e1.id<<endl<<e2.name<<endl<<e2.salary<<endl;
//     // cout<<"Enter the number of employee in your company : ";
//     // int num;
//     // cin>>num;
//     // Employee e[num];
//     // for(int i=0;i<num;i++)
//     // {
//     //     cin.ignore();
//     //     cout<<"Enter ID number of "<<i+1<<" employee : ";
//     //     getline(cin,e[i].id);
//     //     cout<<"Enter name of ("<<i+1<<") employee : ";
//     //     getline(cin,e[i].name);
//     //     cout<<"Enter salary of "<<i+1<<" employee : ";
//     //     cin>>e[i].salary;
//     // }
//     // for(int i=0;i<num;i++)
//     // {
//     //     cout<<"Employee : "<<i+1<<endl;
//     //     cout<<e[i].id<<endl<<e[i].name<<endl<<e[i].salary<<endl;
//     // } 
//     return 0;
// }



// nested structure, Q1
// #include<iostream>
// using namespace std;
// struct Address
// {
//     string country;
//     string city;
// };
// struct Student
// {
//     string name;
//     string r_number;
//     int semester;
//     Address location;
// };
// int main()
// {
//     Student s1;
//     cout<<"Enter your name : ";
//     getline(cin,s1.name);
//     cout<<"Enter your roll number : ";
//     getline(cin,s1.r_number);
//     cout<<"Enter your semester : ";
//     cin>>s1.semester;
//     cin.ignore();
//     cout<<"Enter your country name : ";
//     getline(cin,s1.location.country);
//     cout<<"Enter your city name : ";
//     getline(cin,s1.location.city);
//     cout<<endl<<"Name : "<<s1.name<<endl<<"Roll number : "<<s1.r_number<<endl;
//     cout<<"Semester : "<<s1.semester<<endl;
//     cout<<"Address : "<<s1.location.city<<","<<s1.location.country<<endl;
//     return 0;
// }


// Student Result System Q2 
// #include<iostream>
// using namespace std;
// struct Subject
// {
//     string subject_name;
//     float marks;
// };
// struct Student 
// {
//     string name;
//     string r_number;
//     int semester;
//     int total_subjects;
//     Subject *subjects;
// };
// int main()
// {
//     Student s1;
//     cout<<"Enter your name : ";
//     getline(cin,s1.name);
//     cout<<"Enter your roll  number : ";
//     getline(cin,s1.r_number);
//     cout<<"Enter your semester : ";
//     cin>>s1.semester;
//     cout<<"Enter total number of subjects : ";
//     cin>>s1.total_subjects;
//     s1.subjects=new Subject[s1.total_subjects];
//     int sum=0; // for finding average of the student
//     for(int i=0;i<s1.total_subjects;i++)
//     {
//         cin.ignore();
//         cout<<"Enter ("<<i+1<<") subject name : ";
//         getline(cin,s1.subjects[i].subject_name);
//         cout<<"Enter marks for subject --> "<<s1.subjects[i].subject_name<<" : ";
//         cin>>s1.subjects[i].marks;
//         sum+=s1.subjects[i].marks;
//     }
//     float average=(float)sum/s1.total_subjects;
//     cout<<endl<<"+++++++STUDENT INFORMATION+++++++"<<endl;
//     cout<<"Name : "<<s1.name<<endl<<"Roll number : "<<s1.r_number<<endl;
//     cout<<"Semester : "<<s1.semester<<endl<<"Total subjects : "<<s1.total_subjects<<endl;
//     for(int i=0;i<s1.total_subjects;i++)
//     {
//         cout<<i+1<<". Paper--> Name : "<<s1.subjects[i].subject_name<<endl;
//         cout<<i+1<<". Paper--> marks : "<<s1.subjects[i].marks<<endl;
//     }
//     cout<<endl;
//     delete[] s1.subjects;
//     s1.subjects=nullptr;
//     return 0;
// }


// // Company Employee Record System Q3
// #include<iostream>
// using namespace std;
// struct Date
// {
//     string day; // strings are used here to store date of any format
//     string month;
//     string year;
// };
// struct Department
// {
//     string department_name;
//     string manager_name;
// };
// struct Employee
// {
//     string name;
//     string id;
//     float salary;
//     Date joining_date;
//     Department dept;
// };
// int main()
// {
//     int n; // for number of employee
//     cout<<"Enter number of employee : ";
//     cin>>n;
//     Employee e[n];
//     cin.ignore();
//     for(int i=0;i<n;i++)
//     {
//         cout<<"Enter name of "<<i+1<<" employee : ";
//         getline(cin,e[i].name);
//         cout<<"Enter id number of "<<i+1<<" employee : ";
//         getline(cin,e[i].id);
//         cout<<"Enter salary of "<<i+1<<" employee : ";
//         cin>>e[i].salary;  
//         cin.ignore();
//         cout<<"Enter joining date of "<<i+1<<" employee : ";
//         getline(cin,e[i].joining_date.day);
//         cout<<"Enter joining month of "<<i+1<<" employee : ";
//         getline(cin,e[i].joining_date.month);
//         cout<<"Enter joining year of "<<i+1<<" employee : ";
//         getline(cin,e[i].joining_date.year);
//         cout<<"Enter department name of the employee : ";
//         getline(cin,e[i].dept.department_name);
//         cout<<"Enter the department --> "<<e[i].dept.department_name<<", Manager name : ";
//         getline(cin,e[i].dept.manager_name);   
//     }
//     cout<<endl<<"===++++Displaying Overall Information++++==="<<endl;
//     for(int i=0;i<n;i++)
//     {
//         cout<<"*****Employee number "<<i+1<<" *****";
//         cout<<endl<<"Name : "<<e[i].name<<endl<<"ID : "<<e[i].id<<endl<<"Salary : "<<e[i].salary<<endl;
//         cout<<"Joining date : "<<e[i].joining_date.day<<"/"<<e[i].joining_date.month<<"/"<<e[i].joining_date.year;
//         cout<<endl<<"Department name : "<<e[i].dept.department_name<<endl;
//         cout<<"Department Manager name : "<<e[i].dept.manager_name<<endl;
//     }
//     return 0;
// }


// pointer traversal question
// #include<iostream>
// using namespace std;
// struct Item
// {
//     int id;
//     int values[5];
// };
// void finding_highsum(Item *ptr,int s)
// {
//     int highsum=0;
//     int sum;
//     int index;
//     for(int i=0;i<s;i++)
//     {
//         sum=0;
//         for(int j=0;j<5;j++)
//         {
//             sum+=(ptr+i)->values[j];
//         }
//         if(highsum<sum)
//         {
//             highsum=sum;
//             index=i;
//         }
//     }
//     cout<<"The highest sum of values is "<<highsum<<endl;
//     cout<<"Highest sum instance ID is "<<(ptr+index)->id;
// }
// int main()
// {
//     int s;
//     cout<<"Enter the size of your array : ";
//     cin>>s;
//     Item arr[s];
//     for(int i=0;i<s;i++)
//     {
//         cout<<"Enter ID number of ("<<i+1<<") item : ";
//         cin>>arr[i].id;
//         cout<<"Enter five values of ("<<i+1<<") item : ";
//         for(int j=0;j<5;j++)
//         {
//             cin>>arr[i].values[j];
//         }
//     }
//     finding_highsum(arr,s);
//     return 0;
// }



// // structure sorting problem
// #include<iostream>
// using namespace std;
// struct Student
// {
//     string id;
//     char name[40];
//     int marks[4];
//     float avg;
// };
// int main()
// {
//     int s;
//     cout<<"Enter number of student : ";
//     cin>>s;
//     cin.ignore();
//     Student arr[s];
//     float sum;
//     float average;
//     for(int i=0;i<s;i++)
//     {
//         average=0.0;
//         sum=0.0;
//         if(i!=0)
//         {
//             cin.ignore();
//         }
//         cout<<"Enter ID of ("<<i+1<<") student : ";
//         getline(cin,arr[i].id);
//         cout<<"Enter ("<<i+1<<") student name : ";
//         cin.getline((arr+i)->name,40);
//         cout<<"Enter marks of 4 subjects : ";
//         for(int j=0;j<4;j++)
//         {
//             cin>>(arr+i)->marks[j];
//             sum+=arr[i].marks[j];
//         }
//         average=(float)sum/4;
//         arr[i].avg=average;
//     }
//     Student temp;
//     for(int i=0;i<s-1;i++)
//     {
//         for(int j=0;j<s-i-1;j++)
//         {
//             if(arr[j].avg < arr[j+1].avg)
//             {
//                 temp = arr[j];
//                 arr[j] = arr[j+1];
//                 arr[j+1] = temp;
//             }
//         }
//     }
//     cout<<endl<<"```````Students Sorting By Descending Order```````"<<endl;
//     for(int i=0;i<s;i++)
//     {
//         cout<<"Student # "<<i+1<<" details"<<endl;
//         cout<<"Name : "<<arr[i].name<<endl;
//         cout<<"ID : "<<arr[i].id<<endl;
//         cout<<"Marks : ";
//         for(int j=0;j<4;j++)
//         {
//             cout<<arr[i].marks[j]<<" ";
//         }
//         cout<<endl<<"Average Marks : "<<(arr+i)->avg<<endl;
//     }
//     cout<<endl;
//     return 0;
// }

// nested structure problem
// #include<iostream>
// using namespace std;
// struct Engine
// {
//     int horsepower;
//     float mileage;
// };
// struct Car
// {
//     string id;
//     char brand[30];
//     Engine engine;
//     float serviceCost[3];
// };
// int main()
// {
//     int c; // c ---> number of cars
//     cout<<"Enter the number of cars : ";
//     cin>>c;cin.ignore();
//     Car arr[c];
//     float *total_serviceCost=new float[c]{}; // {} due to curly braces all elememts are assign 0.0 value
//     for(int i=0;i<c;i++) // for taking input from user of c cars
//     {
//         cout<<"Enter ("<<i+1<<") car information"<<endl;
//         cout<<"ID number : ";
//         getline(cin,(arr+i)->id);
//         cout<<"Brand name ";
//         cin.getline(arr[i].brand,30);
//         cout<<"Engine Horsepower : ";
//         cin>>arr[i].engine.horsepower;
//         cout<<"Enter engine mileage : ";
//         cin>>(arr+i)->engine.mileage;
//         cout<<"Enter (3) service costs : ";
//         for(int j=0;j<3;j++)
//         {
//             cin>>(arr+i)->serviceCost[j];
//             *(total_serviceCost+i)+=arr[i].serviceCost[j];
//         }
//         cin.ignore();
//     }
//     // finding car with minimum service cost
//     float minimum=0.0;int index=0;
//     for(int i=0;i<c;i++)
//     {
//         if(minimum>*(total_serviceCost+i))
//         {
//             minimum=*(total_serviceCost+i);
//             index=i;
//         }    
//     }
//     // printing minimum service cost of all cars
//     cout<<"The minimum service cost is for "<<index+1<<" number car, which is equal to : "<<minimum<<endl;
//     // deleting array containing total service cost of all cars
//     delete[] total_serviceCost;
//     return 0;
// }


// pointer+dynamic logic
// #include<iostream>
// using namespace std;
// struct Product
// {
//     string id;
//     char name[50];
//     int sales_count;
//     float *sales;
// };
// int main()
// {
//     int p;cout<<"Enter the number of products being sold : ";cin>>p;
//     Product arr[p];
//     float *average_sale=new float[p]{}; // for storing average sales of all products
//     float sum=0.0;
//     int k; // k for counting number of sales of a product with more 10$ value
//     float high_averageSale=0.0;// for finding highest average sale
//     int index;// for storing index number of highest average sale
//     cin.ignore();
//     for(int i=0;i<p;i++)
//     {
//         k=0;sum=0;
//         if(i!=0)cin.ignore();
//         cout<<"Enter information of ("<<i+1<<") product"<<endl;
//         cout<<"Product id : ";
//         getline(cin,(arr+i)->id);
//         cout<<" Product name : ";
//         cin.getline(arr[i].name,50);
//         cout<<"Enter the number of sales of product ---"<<arr[i].name<<"--- : ";
//         cin>>(arr+i)->sales_count;
//         arr[i].sales=new float[arr[i].sales_count];
//         cout<<"Enter "<<arr[i].sales_count<<" sales prices of product "<<arr[i].name<<" : ";
//         for(int j=0;j<arr[i].sales_count;j++)
//         {
//             cin>>arr[i].sales[j]; 
//             if(arr[i].sales[j]>=10)
//             {
//                 k++;
//                 sum+=arr[i].sales[j];
//             }
//         }
//         *(average_sale+i)=(float)sum/k;
//         if(high_averageSale<*(average_sale+i))
//         {
//             high_averageSale=*(average_sale+i);
//             index=i;
//         }    
//     }
//     cout<<"The product with highest average sale is "<<arr[index].name
//     <<" with average sale of "<<high_averageSale;
//     delete[] average_sale;
//     return 0;
// }







 
