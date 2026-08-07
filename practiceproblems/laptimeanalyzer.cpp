#include<iostream>
using namespace std;
int main()
{
    int laps;cout<<"Enter the number of laps, you have covered around the racetrack :";cin>>laps;
    float highest=0,lowest=0;float sum=0;
    float arr[laps];
    cout<<"-------  Enter the time for each lap  -------"<<endl;
    for(int i=0;i<laps;i++)
    {
        cout<<"Enter your "<<i+1<<" lap time :";cin>>arr[i];

        if(i==0)
        lowest = arr[i];
        
        if(highest<arr[i])
        highest = arr[i];
        if(lowest > arr[i])
        lowest = arr[i];
        sum+=arr[i];
    }
    cout<<"Fastest lap time : "<<lowest<<endl;
    cout<<"Slowest lap time : "<<highest<<endl;
    cout<<"Average lap time : "<<sum/laps<<endl;
    return 0;
}
