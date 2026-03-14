// #include<iostream>
// using namespace std;
// void RecFun(int *arr, int start, int end)
// {
//     if (end > start + 1)
//     {
//         int mid = (start + end) / 2; // int(4.5) = 4
//         cout<< "mid = " << mid << "\t arr[mid] = " << arr[mid]<<"\n";
//         if (arr[mid] % 2 == 0)
//         {
//             RecFun(arr, start, mid - 1);
//             cout << "Value = " << arr[mid] << "\n";
//             return;
//         }
//         else
//         {
//             RecFun(arr, mid + 1, end);
//         }
//         for (int i = start; i < mid; i++)
//             cout << arr[i] << ",";
//         cout << "\n";
//     }
// }
// int main()
// {
//     int arr1[] = {1, 2, 6, 9, 5, 7, 12, 8, 9, 10};
//     RecFun(arr1, 0, 9);
//     return 0;
// }


// #include<iostream>
// using namespace std;
// void doSomething(int **p, int size){
// *p = new int[size];
// for (int i = 0; i < size; i++)
// (*p)[i] = i + size;
// for (int i = 0; i < size; i++)
// cout<< (*p)[i] << " ";
// cout << endl;
// }
// int main(){
// int rows = 3;
// int ** a = new int *[rows];
// for (int i = 0; i < rows; i++)
// doSomething(&a[i], rows+i);
// for (int i = 0; i < rows; i++)
// delete[] a[i];
// delete[] a;
// return 0;
// }


// #include<iostream>
// using namespace std;
// struct student
// {
//     char *name;
//     int* rollnumber;
// };
// void deallocate(student **std,int size)
// {
//     for(int i=0;i<size;i++)
//      {
//         delete[] (*(std+i))->name;
//         delete (*(std+i))->rollnumber;
//         delete *(std+i);
//         *(std+i)=nullptr;        
//      }
//     delete[] std;
//     std=nullptr; 
// }
// int main()
// {
//     int size;
//     cout<<"Enter the number of students : ";
//     cin>>size;
//     cin.ignore();
//     student **ptr=new student*[size];
//     for(int i=0;i<size;i++)
//      {
//         *(ptr+i)=new student;
//         (*(ptr+i))->name=new char[30];
//         (*(ptr+i))->rollnumber=new int;
//      }
//     for(int i=0;i<size;i++)
//      {
//         cout<<"Enter name of ("<<i+1<<") student : ";
//         cin.getline((*(ptr+i))->name,30);
//         cout<<"Enter rollnumber of ("<<i+1<<") student : ";
//         cin>>*(*(ptr+i))->rollnumber;
//         cin.ignore();
//      } 
//     for(int i=0;i<size;i++)
//      {
//         cout<<(*(ptr+i))->name;
//         cout<<endl<<*(*(ptr+i))->rollnumber<<endl;
//      } 
//     deallocate(ptr,size); 
//     return 0;
// }


// #include<iostream>
// #include<cstring>
// using namespace std;
// int main(){
// int ** arr = new int*[3];
// int ** arr2 = new int*[3];
// for (int i = 0; i < 3; i++){
// arr[i] = nullptr; //arr 
// arr2[i] = nullptr;//arr2  
// }
// arr[0] = new int(50); // arr[0] is pointing to an int and int is initialized to 50
// arr[1] = new int(60);
// arr2[1] = new int(40);
// arr2[2] = arr[1]; // arr2 and arr points to the same memory
// for (int i = 0; i < 3; i++){
// if (arr[i] != nullptr)
// cout<< *arr[i] <<" ";
// }
// cout << endl;
// for (int i = 0; i < 3; i++){
// if (arr2[i] != nullptr)
// cout << *arr2[i] << " ";
// }
// for (int i = 0; i < 3; i++){
// delete arr[i];
// delete arr2[i];
// }
// delete[] arr;
// delete[] arr2;
// arr = nullptr;
// arr2 = nullptr;
// return 0;
// }

// here we gooooo
// #include<iostream>
// using namespace std;
// int main()
// {
// int* ptr[3];
// ptr[0] = new int[5];
// ptr[1] = ptr[0];
// for (int i = 0; i < 5; i++) {
// *ptr[1]=2*i;
// ptr[1]++;
// }
// ptr[1] = ptr[1] - 5;
// ptr[2] = ptr[1];
// for (int j = 0; j < 5; j++) {
// cout << *ptr[2] << " ";
// ptr[2]++;
// }
// cout<<endl;
// delete[] ptr[0];
// for (int j = 0; j < 5; j++) {
// cout << *ptr[2] << " ";
// ptr[2]++;
// }
// }



// #include<iostream>
// using namespace std;
// void DoSomething(char *str1, char* str2){
// int index = 0;
// while (str2[index] != '\0')
// {
// str1[index] = str2[index];
// index++;
// }
// str1[index] = '\0';
// }
// int main(){
// char str1[] = "C++ Programmers Sessional-I";
// char str2[] = "Winter is Coming";

// DoSomething(str2, str1);
// cout << str2;
// return 0;
// }



// #include<iostream>
// using namespace std;
// void functionTwo(int* &p, int *q)
// {q = new int;
// *q = *p - 100;
// *p = *q - 100;
// delete q;
// }
// void functionOne(int * p, int* &q)
// {
// p = new int;
// *p = *q + 100;
// *q = *p + 100;
// functionTwo(p, q);
// delete p;
// }
// int main()
// {
// int x = 500;
// int* ptr1=&x;
// int* ptr2 =new int;
// *ptr2 = 1000;
// cout << *ptr1 << " " << *ptr2 << endl;
// functionOne(ptr1, ptr2);
// cout << *ptr1 << " " << *ptr2 << endl;
// functionTwo(ptr1, ptr2);
// cout << *ptr1 << " " << *ptr2;
// delete ptr2;
// return 0;
// }


// #include<iostream>
// #include<cstring>
// using namespace std;
// char* SomeFunction(int i, bool flag)
// {
// char arr[10] = "ABCDEFG";

// if(flag == true)
// {
// char* ptr = new char[strlen(arr+i)

// +1];

// strcpy(ptr,arr+i);
// return ptr;
// }
// else
// {
// return arr;
// }
// }
// void main()
// {
// char* arr2[3];
// arr2[0] = SomeFunction(3, true);
// arr2[1] = SomeFunction(1, false);
// arr2[2] = SomeFunction(0, true);
// for(int i=0; i<3; i++)
// cout<<arr2[i]<<endl;
// }


