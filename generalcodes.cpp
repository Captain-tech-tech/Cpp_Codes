// Write a function that removes all spaces from a string in-place, without allocating new memory.
// #include<iostream>
// using namespace std;
// int main()
// {
//     char arr[50];
//     cout<<"Enter your string : ";
//     cin.getline(arr,50);
//     cout<<"Your string with spaces is : "<<arr<<endl;
//     for(int i=0;arr[i]!='\0';i++)
//      {
//         if(arr[i]==' ')
//          {
//             for(int j=i;arr[j]!='\0';j++)
//              arr[j]=arr[j+1];
//              i--;
//          }
//      }
//     cout<<"Your string without spaces is : "<<arr<<endl; 
//     return 0;
// }


// Implement your own strlen using only pointers (no indexing, no library functions).
// #include<iostream>
// using namespace std;
// int main()
// {
//     char str[30];
//     cout<<"Enter your string : ";
//     cin.getline(str,30);
//     int len=0;
//     for(int i=0;*(str+i)!='\0';i++)
//      {
//         len++;
//      }
//     cout<<"The length of your string is : "<<len<<endl;
//     // cout<<"The length of your string (along with \0 ) is : "<<len<<endl; // using \0 inside " " ends that line
//     return 0;
// }


// Remove all vowels from a string using a single pointer variable and no extra arrays.
// #include<iostream>
// using namespace std;
// int main()
// {
//     char str[30];
//     cout<<"Enter your string : ";
//     cin.getline(str,30);
//     char *ptr=str;
//     cout<<"Your string with vowels is : "<<str<<endl;
//     for(int i=0;*(ptr+i)!='\0';i++)
//      {
//         if(*(ptr+i)=='a'||*(ptr+i)=='e'||*(ptr+i)=='i'||*(ptr+i)=='o'||*(ptr+i)=='u')
//          {
//             for(int j=i;*(ptr+j)!='\0';j++)
//              *(ptr+j)=*(ptr+j+1);
//             i--; 
//          }
//      }
//     cout<<"Your string without vowels is : "<<str<<endl;
//     return 0;
// } 


// Count the number of words in a sentence using only char*.
// #include<iostream>
// using namespace std;
// int main()
// {
//     char sen[100];
//     cout<<"Enter your sentence : ";
//     cin.getline(sen,100);
//     char *ptr=sen;
//     int len=0;
//     for(int i=0;*(ptr+i)!='\0';i++)
//      {
//         if(*(ptr+i)!=' '&&(*(ptr+i+1)==' '||*(ptr+i+1)=='\0'||*(ptr+i+1)=='\n')) // it checks if their a charater,
//          len++;                                            //after that is a space or null terminator or backspace
//      }
//     cout<<"The number of words in your sentence are : "<<len<<endl; 
//     return 0;
// }


// A shallow copy of char** copies only pointer addresses, causing both variables to reference the same memory.
// This leads to aliasing and potential dangling pointers when one copy is deleted. A deep copy allocates new memory 
// for both the pointer array and the individual strings, ensuring independent ownership and preventing undefined behavior.
// program showing shallow copy
// #include<iostream>
// #include<cstring>
// using namespace std;
// int main()
// {
//     int n = 2;
//     // Allocate original
//     char** words = new char*[n];
//     words[0] = new char[6];
//     words[1] = new char[6];
//     strcpy(words[0], "FAST");
//     strcpy(words[1], "AI");
//     // SHALLOW COPY
//     char** copy = words;
//     // Delete original memory
//     delete[] words[0];
//     delete[] words[1];
//     delete[] words;
//     // Now copy points to freed memory
//     cout << copy[0] << endl;   //  Undefined behavior
//     return 0;
// }
// // program showing deep copy
// #include<iostream>
// #include<cstring>
// using namespace std;
// int main()
// {
//     int n = 2;
//     char** words = new char*[n];
//     words[0] = new char[6];
//     words[1] = new char[6];
//     strcpy(words[0], "FAST");
//     strcpy(words[1], "AI");
//     // DEEP COPY
//     char** copy = new char*[n];
//     for(int i = 0; i < n; i++)
//     {
//         copy[i] = new char[strlen(words[i]) + 1];
//         strcpy(copy[i], words[i]);
//     }
//     // Delete original
//     for(int i = 0; i < n; i++)
//         delete[] words[i];
//     delete[] words;
//     // Safe: copy still owns its own memory
//     cout << copy[0] << endl;
//     // Free copy
//     for(int i = 0; i < n; i++)
//         delete[] copy[i];
//     delete[] copy;
//     return 0;
// }



//Reverse the characters of a string without changing word order "FAST NUCES" → "TSAF SECUN"
// #include<iostream>
// using namespace std;
// int main()
// {
//     char *ptr=new char[100];
//     cout<<"Enter your sentence : ";
//     cin.getline(ptr,100);
//     cout<<"Your given sentence : "<<ptr<<endl;
//     int len=0;
//     for(int i=0;*(ptr+i)!='\0';i++) 
//      {
//         len++;
//         if(*(ptr+i)!=' '&&(*(ptr+i+1)==' '||*(ptr+i+1)=='\0'||*(ptr+i+1)=='\n'))
//          {
//             int start=i-len+1;
//             for(int j=0;j<len/2;j++)
//              {
//                 char temp=*(ptr+start+j);
//                 *(ptr+start+j)=*(ptr+i-j);
//                 *(ptr+i-j)=temp;
//              }
//             len=0; 
//          }
//      }
//     cout<<"Your modified sentence : "<<ptr<<endl; 
//     delete[] ptr;
//     ptr=nullptr;
//     return 0;
// }


// Allocate a jagged 2D array where row i has i+1 elements, using only pointers.
// #include<iostream>
// using namespace std;
// int main()
// {
//     int **ptr1=new int*[6];
//     for(int i=0;i<6;i++)
//      {
//         *(ptr1+i)=new int[i+1];
//      }
//     for(int i=0;i<6;i++)
//      {
//         for(int j=0;j<i+1;j++)
//          {
//             *(*(ptr1+i)+j)=i*2+j*3;
//          }
//      } 
//     for(int i=0;i<6;i++)
//      {
//         for(int j=0;j<i+1;j++)
//          cout<<*(*(ptr1+i)+j)<<" ";
//         cout<<endl; 
//      } 
//     for(int i=0;i<6;i++)
//      delete[] *(ptr1+i);
//     delete ptr1;  
//     return 0;
// }

// 2D array code 
// #include<iostream>
// #include<iomanip>
// using namespace std;
// int main()
// {
//     int a;cout<<"Enter the number of rows of your 2D array : ";cin>>a;
//     int **ptr=new int*[a];
//     int arr[a];
//     for(int i=0;i<a;i++)
//     {
//         int b;
//         cout<<"Enter number of elements in ("<<i+1<<") number row : ";cin>>b;
//         *(ptr+i)=new int[b];
//         arr[i]=b;
//     }
//     for(int i=0;i<a;i++)
//     {
//         cout<<"Enter "<<arr[i]<<" elements in your ("<<i+1<<") row : ";
//         for(int j=0;j<arr[i];j++)
//         {
//             cin>>ptr[i][j];
//         }
//     }
//     cout<<"Your 2D array "<<endl<<endl;
//     for(int i=0;i<a;i++)
//     {
//         for(int j=0;j<arr[i];j++)
//         {
//             cout<<setw(7)<<ptr[i][j]<<" ";
//         }
//         cout<<endl;
//     }
//     cout<<endl;
//     for(int i=0;i<a;i++)
//     {
//         delete[] *(ptr+i);
//     }
//     delete ptr;
//     return 0;
// }


