#include<iostream>
using namespace std;
int main()
{
    int s;cout<<"Enter the size of the matrix :";cin>>s;

    int matrix[s][s];
    for(int i=0;i<s;i++)
    {
        cout<<"Enter "<<s<<" elements in "<<i+1<<" row : ";
        for(int j=0;j<s;j++)
        cin>>matrix[i][j];
    }
    int primary_sum = 0, secondary_sum = 0;
    for(int i=0;i<s;i++)
    {
        for(int j=0;j<s;j++)
        {
            if(j==i)
            primary_sum+=matrix[i][j];
            if(i+j == (s-1))
            secondary_sum+=matrix[i][j];
        }
    }
    cout<<"Primary Diagonal Sum : "<<primary_sum<<endl;
    cout<<"Secondary Diagonal Sum : "<<secondary_sum<<endl;

    int absolute_sum = primary_sum-secondary_sum;
    if(absolute_sum<0)
    absolute_sum*=(-1);

    cout<<"Absolute Difference : |"<<primary_sum<<"-"<<secondary_sum<<"| = "<<absolute_sum<<endl;
    return 0;
}
