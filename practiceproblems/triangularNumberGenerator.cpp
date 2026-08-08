#include<iostream>
using namespace std;
int main()
{
    int start,end;cout<<"Enter the start and end of the sequence : ";cin>>start>>end;
    int sum;
    for(int i = start;i<= end;i++)
    {   
        sum=0;
        for(int j=0;j<=i;j++)
        {
            if(j!=i)
            cout<<j<<"+";
            else
            cout<<j;
            sum+=j;
        }
        cout<<"="<<sum<<endl;
    }
    return 0;
}










































