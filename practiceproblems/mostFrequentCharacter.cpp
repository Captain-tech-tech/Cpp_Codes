#include<iostream>
using namespace std;
int main()
{
    char str[100];cout<<"Enter a string : ";cin.getline(str,100);
    int count;
    char most;
    int freq=0;
    for(int i=0;str[i] != '\0';i++)
    {
        count = 0;
        for(int j=0;str[j] != '\0';j++)
        {
            if(str[i]==str[j])
            count++;
        }
        if(freq<count)
        {
            freq = count;
            most = str[i];
        }
    }
    cout<<"The most frequent character in the string '"<<most<<"' with frequency "<<freq<<"."<<endl;
    return 0;
}
