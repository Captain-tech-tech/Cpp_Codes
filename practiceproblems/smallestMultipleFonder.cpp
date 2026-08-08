#include<iostream>
using namespace std;
int main()
{
    int num=11;
    int flag;
    while(true)
    {
        flag = 0;
        for(int i=1;i<=20;i++)
        {
            if(num%i != 0)
            {
                flag = 1;
                break;
            }
        }
        if(flag == 0)
        {
            cout<<"The smallest number that is divisible by (1-20) : "<<num<<endl;
            break;
        }
        num++;
    }
    return 0;
}
