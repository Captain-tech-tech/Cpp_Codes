#include<iostream>
using namespace std;
int main()
{
    int start,end;cout<<"Enter the first and last number, to find the perfect numbers :";cin>>start>>end;
    int sum;
    for(int i = start;i<end;i++)
    {
        sum = 0;
        for(int j=1;j<i;j++)
        {
            if(i%j == 0)
            sum+=j;
        }
        if(sum == i)
        cout<<i<<"\t";
    }
    cout<<endl;
    return 0;
}
