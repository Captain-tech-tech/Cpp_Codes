#include<iostream>
using namespace std;
int main()
{
    char str[100];
    cout<<"Enter a string : ";cin.getline(str,100);
    int flag;
    for(int i=0;str[i] != '\0';i++)
    {
        flag=0;
        for(int j=i+1;str[j] != '\0';j++)
        {
            if(str[i]==str[j])
            {
                flag = 1;
            }
            if(flag == 1)
            {
                str[j]=str[j+1];
            }
        }
    }
    cout<<"After removing duplicates : "<<str<<endl;
    return 0;
}
