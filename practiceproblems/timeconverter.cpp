#include<iostream>
using namespace std;
int main()
{
    int time_in_seconds;
    cout<<"Enter your time is seconds : ";
    cin>>time_in_seconds;
    int hours = time_in_seconds/3600;time_in_seconds %= 3600;
    int minutes = time_in_seconds/60; 
    int seconds = time_in_seconds%60;
    cout<<endl;
    cout<<"!------------------------------------------!"<<endl;
    cout<<"  "<<time_in_seconds<<" = "<<hours<<" hours "<<minutes<<" minutes "<<seconds<<" seconds"<<endl;
    cout<<"|__________________________________________|"<<endl;
    return 0;
}































