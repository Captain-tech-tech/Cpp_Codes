#include<iostream>
using namespace std;
int main()
{
    string days[7];
    cout<<"---++ Enter the names of seven days in a week ++---"<<endl;
    for(int i=0;i<7;i++)
    {
        cout<<i+1<<". ";
        getline(cin>>ws,days[i]);
    }
    cout<<endl<<endl<<"---- YOUR MINI CALENDER ----"<<endl;
    for(int i=0;i<7;i++)
    {
        cout<<i<<"\t";
    }
    cout<<endl;
    for(int i=0;i<7;i++)
    {
        cout<<days[i]<<"\t";
    }
    cout<<endl;
    return 0;
}


















