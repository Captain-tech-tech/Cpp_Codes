#include<iostream>
using namespace std;
int main()
{
    string sentence;
    cout<<"Enter a sentence : ";getline(cin>>ws,sentence);
    int word=1;

    for(int i=0;sentence[i] != '\0';i++)
    {
        if(sentence[i] == ' ' && sentence[i+1] !=  ' ' && sentence[i+1] != '\0' && sentence[i+1] != '\n')
        word++;
    }
    cout<<"The number of word in the sentence :"<<word<<endl;
    return 0;
}
