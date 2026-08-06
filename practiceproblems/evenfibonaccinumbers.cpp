#include<iostream>
using namespace std;
int main()
{
    long long int last = 12586269025, second_last = 7778742049;
    int count_even = 0;
    cout<<"-----------Last 10 fibonacci numbers-----------"<<endl;
    while(count_even != 10)
    {
        long long int third_last = last - second_last;
        if(third_last % 2 == 0)
        {
            cout<<"\t\t"<<third_last<<endl;
            count_even++;
        }
        last = second_last;
        second_last = third_last;
    }
    return 0;
}
