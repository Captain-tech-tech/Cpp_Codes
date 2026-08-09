#include<iostream>
using namespace std;
int main()
{
    char str[100];
    cout<<"Enter a string : ";cin.getline(str,100);
    char unique[100];
    int flag;int k = 0;
    for(int i=0;str[i] != '\0';i++)
    {
        flag=0;
        for(int j=0;str[j] != '\0';j++)
        {
            if(i != j)
            {
                if(str[i]==str[j])
                {
                    flag=1;
                    break;
                }
            }
        }
        if(flag == 0)
        {
            unique[k] = str[i];
            k++;
        }
    }
    unique[k] = '\0';
    cout<<"Unique characters : "<<unique<<endl;
    return 0;
}
