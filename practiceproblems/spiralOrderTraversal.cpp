#include<iostream>
using namespace std;
int main()
{
    int s;cout<<"Enter the size of the matrix : ";cin>>s;
    float matrix[s][s];

    for(int i=0;i<s;i++)
    {
        cout<<"Enter elements in "<<i+1<<" row : ";
        for(int j=0;j<s;j++)
        cin>>matrix[i][j];
    }

    int max=s*s,num=0;

    int i=0,j=0,k=1;
    while(true)
    {
        if ((num+1)==max)
        {
            cout<<matrix[i][j];
            break;
        }

        if(num == max)
        break;

        while(j != (s-k))
        {
            cout<<matrix[i][j]<<" ";
            j++;
            num++;
        }
        while(i != (s-k))
        {
            cout<<matrix[i][j]<<" ";
            i++;
            num++;
        }
        while(j != k-1)
        {
            cout<<matrix[i][j]<<" ";
            j--;
            num++;
        }
        while(i != k-1)
        {
            cout<<matrix[i][j]<<" ";
            i--;
            num++;
        }

        i++,j++,k++;
    }
    cout<<endl;
    return 0;
}
