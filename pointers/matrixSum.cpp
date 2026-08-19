#include<iostream>
using namespace std;
int main()
{
    int r,c;cout<<"Enter the rows and columns of the matrix : ";cin>>r>>c;

    int matrix[r][c];

    for(int i=0;i<r;i++)
    {
        cout<<"Enter "<<c<<" elements in your "<<i+1<<" rows : ";
        for(int j=0;j<c;j++)
        {
            cin>>matrix[i][j];
        }
    }
    
    int matrix_sum=0, columns_sum[c]={}, row_sum[r]={};

    for(int i = 0;i < r;i++)
    {
        for(int j = 0;j < c;j++)
        {
            matrix_sum += *(*(matrix+i)+j);
            row_sum[i] += *(*(matrix+i)+j);
            columns_sum[j] += *(*(matrix+i)+j);
        }
    }

    cout<<"The matrix sum is "<<matrix_sum<<endl;

    cout<<"Columns sums : ";
    for(int i=0;i<c;i++)
        cout<<columns_sum[i]<<"   ";

    cout<<endl<<"Rows sums : ";

    for(int i = 0;i<r;i++)
        cout<<row_sum[i]<<"   ";
    cout<<endl;
    return 0;
}


