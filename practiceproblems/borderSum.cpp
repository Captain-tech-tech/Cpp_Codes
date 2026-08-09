#include<iostream>
using namespace std;
int main()
{
    int size = 4;
    float matrix[size][size] = {
        {1,2,3,4},
        {5,6,7,8},
        {9,10,11,12},
        {13,14,15,16}
    };
    float border_sum=0;

    for(int i=0;i<size;i++)
    {
        for(int j=0;j<size;j++)
        {
            if(i==0 || i==size-1 || j==0 || j==size-1)
            border_sum+=matrix[i][j];
        }
    }

    cout<<"The sum of border elements : "<<border_sum<<endl;
    return 0;
}
