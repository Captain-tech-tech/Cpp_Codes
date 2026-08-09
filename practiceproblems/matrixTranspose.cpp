#include<iostream>
using namespace std;
int main()
{
    int size;cout<<"Enter the size of the matrix : ";cin>>size;

    float matrix[size][size];
    cout<<"---- Enter "<<size*size<<" elements for your matrix ----"<<endl;
    for(int i=0;i<size;i++)
    {
        cout<<"Enter "<<size<<" elements in "<<i+1<<" row : ";
        for(int j=0;j<size;j++)
        cin>>matrix[i][j];
    }

    cout<<endl;

    cout<<"+++++++  Your matrix  +++++++++"<<endl;
    for(int i=0;i<size;i++)
    {
        for(int j=0;j<size;j++)
        cout<<matrix[i][j]<<" ";
        cout<<endl;
    }

    cout<<endl;

    cout<<"------  Transpose of the matrix  -------"<<endl;
    for(int i=0;i<size;i++)
    {
        for(int j=0;j<size;j++)
        cout<<matrix[j][i]<<" ";
        cout<<endl;
    }
    cout<<endl;
    return 0;
}
