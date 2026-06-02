// // c++ code for storing personal data
// #include<iostream>
// using namespace std;
// // strucure for student data
// struct student
// {
//     string name;
//     float id;
//     int count;
//     float arr[5];
// };
// // function to second largest marksin papers
// void Process_person_data(student* stu1)
// {
//     int sum=0;
//     for(int i=0;i<stu1->count;i++)
//      {
//         sum+=stu1->arr[i];
//      }
//     float largest=stu1->arr[0];   
//     float second=stu1->arr[0];
//     // finding second largest number
//     for(int i=0;i<stu1->count;i++)
//      {
//         if(stu1->arr[i]>largest)
//          {
//             second=largest;
//             largest=stu1->arr[i];
//          }
//         else if(stu1->arr[i]>second && stu1->arr[i]!=largest)
//          {
//             second=stu1->arr[i];
//          } 
//      }
//     // finding averages    
//     float average= (float)sum/stu1->count;
//     // display student personal data
//     cout<<"=+++++++++= PERSON DETAILS =+++++++++="<<endl;
//     cout<<"|------------------------------------|"<<endl;
//     cout<<"Name : "<<stu1->name<<endl;
//     cout<<"ID : "<<stu1->id<<endl;
//     cout<<"Grades : ";
//     for(int i=0;i<stu1->count;i++)
//      {
//         cout<<stu1->arr[i]<<" ";
//      }
//     cout<<endl<<average<<endl;
//     cout<<"Second highest scores : "<<second<<endl; 
//     cout<<"|------------------------------------|"<<endl;
// }
// int main()
// {
//     student stu; // structure variable
//     student* stu1=&stu; // pointer to structure
//     // taking data from the user
//     cout<<"Enter your name : ";
//     getline(cin,stu1->name);
//     cout<<"Enter your ID number : ";
//     cin>>stu1->id;
//     cout<<"Enter how many papers marks you wanna enter (1-5) : ";
//     cin>>stu1->count;
//     cout<<"Enter the marks of ("<<stu1->count<<") papers : ";
//     for(int i=0;i<stu1->count;i++)
//      {
//         cin>>stu1->arr[i];
//      }   
//     // function call 
//     Process_person_data(stu1); 
//     return 0;
// }




// c++ code for storing employee personal data
// #include<iostream>
// using namespace std;
// // structure Emp for storing employee information
// struct Emp
// {
//     char employeeName[50];
//     char jobTitle[30];
//     float employeCode;
//     int monthCount;
//     float monthlysalary[5];
//     float *baseAddress;
// };
// // function for calculating averages and printg employee data and his averages
// void calculate_display_payroll(Emp* ptr_to_e,float extra)
// {
//     float average;
//     float sum=0.0;
//     float sum2=0.0;
//     float highest=ptr_to_e->monthlysalary[0];
//     // finding sum of salaries and highest salary
//     for(int i=0;i<ptr_to_e->monthCount;i++)
//      {
//         sum+=ptr_to_e->monthlysalary[i];
//         if(ptr_to_e->monthlysalary[i]>highest)
//          highest=ptr_to_e->monthlysalary[i];
//      }
//     // finding average and updated average 
//     average=sum/ptr_to_e->monthCount;
//     sum2=sum+extra;
//     int updated_average=sum2/(ptr_to_e->monthCount+1);
//     cout<<"|-------------------------------------------------|"<<endl;
//     cout<<"================= PayRoll Details ================="<<endl;
//     cout<<"Employee Name : "<<ptr_to_e->employeeName<<endl;
//     cout<<"Employee job title : "<<ptr_to_e->jobTitle<<endl;
//     cout<<"Employee code : "<<ptr_to_e->employeCode<<endl;
//     cout<<"````````` Monthly Salaries ```````````"<<endl;
//     for(int i=0;i<ptr_to_e->monthCount;i++)
//      {
//         cout<<"Salary of ("<<i+1<<") month : "<<ptr_to_e->monthlysalary[i]
//         <<endl;
//      }
//     cout<<"Highest salary : "<<highest<<endl;
//     cout<<"Average salary : "<<average<<endl;
//     cout<<"Updated average salary : "<<updated_average<<endl;
//     cout<<"|--------------------------------------------------|"<<endl;
// }
// int main()
// {
//     Emp e; // structure variable
//     Emp *ptr_to_e=&e; // pointer to structure
//     // user details entering
//     cout<<"Enter your name : ";
//     cin.getline(ptr_to_e->employeeName,50);
//     cout<<"Enter your position in the industry : ";
//     cin.getline(ptr_to_e->jobTitle,30);
//     cout<<"Enter the employee code : ";
//     cin>>ptr_to_e->employeCode;
//     // number of month (1-5)
//     while(1)
//      {
//       cout<<"Enter the number of months you got salary in between (1_5) : ";
//       cin>>ptr_to_e->monthCount;
//       if(ptr_to_e->monthCount>=1 && ptr_to_e->monthCount<=5)
//        break;
//      } 
//     // taking positive salaries from the user 
//     cout<<"Enter the salaries of "<<ptr_to_e->monthCount<<" months  "<<endl;
// for(int i = 0; i < ptr_to_e->monthCount; i++)
//     {
//         do {
//             cout<<"Enter Salary for Month "<<i+1<<" : ";
//             cin>>ptr_to_e->monthlysalary[i];
//           if(ptr_to_e->monthlysalary[i] < 0)
//             cout<<"Salary cannot be negative! Try again.\n";
//         }while(ptr_to_e->monthlysalary[i]<0);
//     }
//     // storing base address
//     ptr_to_e->baseAddress=&ptr_to_e->monthlysalary[0];
//     // extra amount
//     float extra_amount;
//     cout<<"Enter the extra amount you got during the job : ";
//     cin>>extra_amount; 
//     // function call
//     calculate_display_payroll(ptr_to_e,extra_amount);
//     return 0;
// }




