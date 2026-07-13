#include<iostream>
using namespace std;
void StringCancatenate(char *str1,char *str2);
void CompressString(char *);
char* ReverseSentence(char *);
void pluralWords(char **s, int wordCount);
int main()
{
   int choice;
   while(1)
    {
      cout<<"==========TEXT PROCESSING ENGINE=========="<<endl;
      cout<<"1. Merge two strings"<<endl;
      cout<<"2. Compress a string"<<endl;
      cout<<"3. Reverse a sentence"<<endl;
      cout<<"4. Convert singular words to plural"<<endl;
      cout<<"5. Exit"<<endl;
      cout<<"Enter (1-5) according to your work : ";
      cin>>choice;
      cin.ignore();
      if(choice==1)
       {
        char str1[50],str2[100];
        cout<<"Enter your first string : ";
        cin.getline(str1,50);
        cout<<"Enter your second string : ";
        cin.getline(str2,100);
        StringCancatenate(str1,str2);
        cout<<"`````CONCATENATED FORM : ";
        cout<<str2<<" `````"<<endl;
       }
      if(choice==2)
       {
        char str3[50];
        cout<<"Enter a string for compression : ";
        cin.getline(str3,50);
        CompressString(str3);
        cout<<"YOUR COMPRESSED STRING : "<<str3<<endl;
       }
      if(choice==3)
       {
         char str4[100];
         cout<<"Enter your sentence : ";
         cin.getline(str4,100);
         char *str5=ReverseSentence(str4);
         // cout<<"Your reverse sentence is : "<<str5<<endl;
         for(int i=0;str5[i]!='\0';i++)
          cout<<str5[i];
         cout<<endl;
         delete[] str5;
       }
      if(choice==4)
       {
         int words_num;
         cout<<"Enter the number of words : ";
         cin>>words_num;
         cin.ignore();
         char **words=new char*[words_num]; // dynamically creating pointers array and storing its base address in double pointer
         for(int i=0;i<words_num;i++)
          {
            char single_word[50];
            cout<<"Enter your "<<i+1<<" word : ";
            cin.getline(single_word,50);

            int length=0;
            while(single_word[length]!='\0')
             length++;

            words[i]=new char[length+1];

            int j;
            for(j=0;j<length;j++)
             words[i][j]=single_word[j];
            words[i][++j]='\0';
          }
         pluralWords(words,words_num);
         for(int i=0;i<words_num;i++)
          {
            cout<<endl<<words[i]<<endl;
          }
         for(int i=0;i<words_num;i++)
          {
            delete[] words[i];
          }
         delete[] words;
       }
      if(choice==5)
       {
         cout<<"Thanks for using our program!";
         break;
       }
    }

    return 0;
}
void pluralWords(char **s,int wordcount)
{
   int len;
   for(int i=0;i<wordcount;i++)  // different names are used for alloacting dynamic arrays,
    {                             // it can be done with a single pointer name as well
      for(len=0;s[i][len]!='\0';len++); // it does not include '\0' in length 
      // appending es
      if((s[i][len-1]=='h' && s[i][len-2]=='c') || (s[i][len-1]=='h' && s[i][len-2]=='s'))
       {
         char *arr1=new char[len+3];
         for(int j=0;j<len;j++)
          *(arr1+j)=s[i][j];
         *(arr1+len)='e',*(arr1+len+1)='s',*(arr1+len+2)='\0'; 
         delete[] s[i];
         s[i]=arr1;
         continue;
       }  
      else if((s[i][len-1]=='x') || (s[i][len-1]=='s'&&s[i][len-2]=='i'))
       {
         char *arr2=new char[len+3];
         for(int j=0;j<len;j++)
          *(arr2+j)=s[i][j];
         *(arr2+len)='e',*(arr2+len+1)='s',*(arr2+len+2)='\0'; 
         delete[] s[i];
         s[i]=arr2;
         continue;
       }
      else if((s[i][len-1]=='s'||s[i][len-1]=='z')&&s[i][len-2]!='a'&&s[i][len-2]!='e'&&s[i][len-2]!='i'&&s[i][len-2]!='o'&&s[i][len-2]!='u')  
       {
         char *arr3=new char[len+3];
         for(int j=0;j<len;j++)
          *(arr3+j)=s[i][j];
         *(arr3+len)='e',*(arr3+len+1)='s',*(arr3+len+2)='\0'; 
         delete[] s[i];
         s[i]=arr3;
         continue;
       }       
      else if(s[i][len-1]=='o'&&s[i][len-2]=='t'&&s[i][len-3]=='a')
       {
         char *arr4=new char[len+3];
         for(int j=0;j<len;j++)  
          *(arr4+j)=s[i][j];
         *(arr4+len)='e',*(arr4+len+1)='s',*(arr4+len+2)='\0'; 
         delete[] s[i];
         s[i]=arr4;
         continue;
       }   
      // appending zes
      if(s[i][len-1]=='z' && (s[i][len-2]=='a')||s[i][len-2]=='e')
       {
         char *arr5=new char[len+4];
         for(int j=0;j<len;j++)
          arr5[j]=s[i][j];
          arr5[len]='z',arr5[len+1]='e',arr5[len+2]='s',arr5[len+3]='\0';
         delete[] s[i];
         s[i]=arr5;
         continue; 
       }      
      // appending ses
      if(s[i][len-1]=='s'&&(s[i][len-2]=='e'||s[i][len-2]=='a'))
       {
         char *arr6=new char[len+4];
         for(int j=0;j<len;j++)
          arr6[j]=s[i][j];
          arr6[len]='s',arr6[len+1]='e',arr6[len+2]='s',arr6[len+3]='\0';
          delete[] s[i];
         s[i]=arr6;
         continue; 
       } 
      // appending s 
      if(s[i][len-1]=='f'&&s[i][len-2]=='f')
       {
         char *arr7=new char[len+2];
         for(int j=0;j<len;j++)
          arr7[j]=s[i][j];
          arr7[len]='s',arr7[len+1]='\0';
          delete[] s[i];
          s[i]=arr7;
          continue;
       } 
      // replacing with ve and appending s
    
      if((s[i][len-1]=='e'&&s[i][len-2]=='f'))
       {
         char *arr8=new char[len+1];
         for(int j=0;j<len-2;j++)
          arr8[j]=s[i][j];
          arr8[len-2]='v',arr8[len-1]='e',arr8[len]='\0';
          delete[] s[i];
          s[i]=arr8;
          continue;
       } 
      if(s[i][len-1]=='f')
       {
         char *arr9=new char[len+2];
         for(int j=0;j<len-1;j++)
          arr9[j]=s[i][j];
          arr9[len-1]='v',arr9[len]='e',arr9[len+1]='s',arr9[len+2]='\0';
          delete[] s[i];
          s[i]=arr9;
          continue;
       } 
      // replacing on with a 
      if(s[i][len-1]=='n'&&s[i][len-2]=='o')
       {
         char *arrr1=new char[len];
         for(int j=0;j<len;j++)
          arrr1[j]=s[i][j];
          arrr1[len-1]='a',arrr1[len]='\0';
          delete[] s[i];
          s[i]=arrr1;
          continue;
       } 
      if(s[i][len-1]=='s'&&s[i][len-2]=='u')
       {
         char *arrr2=new char[len];
         for(int j=0;j<len;j++)
          arrr2[j]=s[i][j];
          arrr2[len-1]='i',arrr2[len]='\0';
          delete[] s[i];
          s[i]=arrr2;
          continue;
       } 
      if(s[i][len]=='y'&&(s[i][len-1]=='a'||s[i][len-1]=='e'||s[i][len-1]=='i'||s[i][len-1]=='o'||s[i][len-1]=='u'))
       {
         char *arrr3=new char[len+2];
         for(int j=0;j<=len;j++)
          arrr3[j]=s[i][j];
          arrr3[len+1]='s',arrr3[len+2]='\0';
          delete[] s[i];
          s[i]=arrr3;
         continue; 
       }          
      else
      {
         char *arrr3=new char[len+3];
         for(int j=0;j<len;j++)
          arrr3[j]=s[i][j];
          arrr3[len]='i',arrr3[len+1]='e',arrr3[len+2]='s',arrr3[len+3]='\0';
         delete[] s[i];
         s[i]==arrr3;
         continue; 
      }         
      }    
}
// #include<iostream>
// using namespace std;
// int main()
// {
//     char *str=new char[100];
//     cin.getline(str,100);
//     int len=0;
//     char *str1=new char[100];
//     int k=0;
//     for(int i=0;*(str+i)!='\0';i++)
//       len++;
//     for(int i=len;i>=0;i--)
//      {
//         if(*(str+i)==' ')
//          {
//            for(int j=i+1;*(str+j)!='\0';j++) 
//             *(str1+(k++))=*(str+j);
//            *(str+i)='\0'; 
//          }
//      }  
//     cout<<endl<<str1<<endl; 
//     return 0;
// }
char* ReverseSentence(char *line)
{
    int size=0;
    for(int i=0;*(line+i)!='\0';i++)
        size++;
    int start=0;
    char *p1=new char[size+1];
    int k=0;
    int last = size;
    for(int i = size - 1; i >= 0; i--)
    {
      if(*(line+i)==' ' || *(line+i)=='\n' || i==0)
        {
            if(i==0)
             start=0;
            else
             start=i+1;
            for(int j=start;j<last;j++)
            {
                *(p1+k++)=*(line+j);
            }
            if(i!=0)
                *(p1+k++)=' ';
            last=i;
        }
    }
    *(p1+k)='\0';
    for(int i = 0; i < k; i++)
        cout << *(p1+i);
    cout << endl;
    return p1;
}
// another way to compressing
// #include<iostream>
// using namespace std;
// int main()
// {
//     char *str=new char[40];
//     cin.getline(str,40);
//     for(int i=0;*(str+i)!='\0';i++)
//      {
//         for(int j=i;*(str+j)!='\0';)
//          {
//             if(*(str+i)==*(str+j+1))
//              {
//                 for(int k=j+1;*(str+k)!='\0';k++)
//                  *(str+k)=*(str+k+1);
//              }
//             else 
//              j++; 
//          }
//      }
//     cout<<endl<<str<<endl; 
//     return 0;
// }
void CompressString(char *com)
{
   int k=0;
    for(int i=0;*(com+i)!='\0';i++)
    {
      int j;
      for (j=0;j<i;j++)
        {
           if (*(com+i)==*(com+j))
           break;
        }
      if (j==i)
       {
           *(com+k)=*(com+i);
           k++;
       }
    }
    com[k]='\0';
}
void StringCancatenate(char *str1,char *str2)
{
//    char *P=str2;
   while(*str2!='\0')
      str2++;
    *str2=' ';
    str2++;
   while(*str1!='\0')
    {
      *str2=*str1; // *str2++=*str1++;
      str2++;
      str1++;
    }
    *str2='\0';
    // str2=P;
    // cout<<str2<<endl; // cout<<*str2<<endl;
}














