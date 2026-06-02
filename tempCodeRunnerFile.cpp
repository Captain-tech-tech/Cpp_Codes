#include<iostream>
using namespace std;
int main()
{
    char arr[50];
    cout<<"Enter your string : ";
    cin.getline(arr,50);
    cout<<"Your string with spaces is : "<<arr<<endl;
    for(int i=0;arr[i]!='\0';i++)
     {
        if(arr[i]==' ')
         {
            for(int j=i;arr[j]!='\0';j++)
             arr[j]=arr[j+1];
         }
     }
    cout<<"Your string without spaces is : "<<arr<<endl; 
    return 0;
}

