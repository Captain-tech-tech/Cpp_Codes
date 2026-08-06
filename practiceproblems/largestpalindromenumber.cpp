#include<iostream>
using namespace std;
int main()
{
    long int palindrome = 0;
    for(int i = 1;i<999;i++)
    {
        for(int j = 1;j<999;j++)
        {
            long long int k = i*j;
            int r=0;
            while(k != 0)
            {
                r = k % 10 + r*10;
                k /= 10;
            }
            if(r == (i*j))
            {
                if(palindrome < r)
                palindrome = r;
            }
        }
    }
    cout<<"This largest palindrome product is "<<palindrome<<endl;
    return 0;
}



































