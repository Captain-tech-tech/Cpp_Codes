#include<iostream>
using namespace std;
int main()
{
    // n represent the number of terms and x represent the base value
    int n,x; 
    cout<<"Enter the number of terms (n): ";cin>>n;cout<<"Enter base value (x): ";cin>>x;
    double final_sum=0;
    float sum = 0;  int y;int fact;
    for(int i = 0;i<=n;i++)
    {   
        y = x;
        fact=0;
        for(int j=0;j<=i;j++)
        {
            if(j == 0)
            {
                sum = 1;
                fact = 1;
            }
            else
            {
                sum = y*sum;
                fact = fact*j;
            }
        }
        final_sum += sum/fact;
    }
    cout<<"Sum of the series = "<<final_sum<<endl;
    return 0;
}


























