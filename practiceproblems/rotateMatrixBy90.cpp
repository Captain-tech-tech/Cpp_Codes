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

    for(int i=0;i<s;i++)
    {
        for(int j=s-1;j>=0;j--)
        cout<<matrix[j][i]<<" ";
        cout<<endl;
    }

    return 0;
}
