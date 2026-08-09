#include<iostream>
using namespace std;
int main()
{
    char sen[200];cout<<"Enter a sentence : ";cin.getline(sen,200);
    int count=0;int index1=0,index2=0;int freq=0;
    
    for(int i=0;sen[i] != '\0';i++)
    {
        count++;
        if(sen[i] == ' ' && sen[i+1] != ' ' && sen[i+1] != '\0')
        {
            count = 0;
            index1 = i+1;
        }

        if(freq<count)
        {
            freq = count;
            index2 = index1;
        }
    }
    cout<<"Longest word : ";
    for(int i=index2;sen[i] != ' ' && sen[i] != '\0';i++)
    {
        cout<<sen[i];
    }
    cout<<endl;
    return 0;
}
