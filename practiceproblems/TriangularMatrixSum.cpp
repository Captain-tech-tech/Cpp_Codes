#include<iostream>
using namespace std;
int main()
{
    float matrix[3][3] = {
        {1,2,3},
        {4,5,6},
        {7,8,9}
    };

    float upper_sum = 0, lower_sum = 0;

    for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
        {
            if(j>i)
            upper_sum+=matrix[i][j];
            if(i>j)
            lower_sum+=matrix[i][j];
        }
    }

    cout<<endl<<"Upper triangular sum : "<<upper_sum<<endl;
    cout<<"Lower triangular sum : "<<lower_sum<<endl;
    return 0;
}
