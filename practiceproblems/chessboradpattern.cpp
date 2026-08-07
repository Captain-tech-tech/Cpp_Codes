// # represent white and * represent black
#include<iostream>
using namespace std;
int main()
{
    int flag = 0;
    for(int i=0;i<8*8;i++)
    {
        if(i%8 == 0)
        {
            cout<<endl;
            if(flag == 0)
            flag = 1;
            else if(flag == 1)
            flag = 0;
        }
        if(flag == 0)
        {
            if(i%2 == 0)
            cout<<"# ";
            else
            cout<<"* ";
        }
        if(flag == 1)
        {
            if(i%2 == 0)
            cout<<"* ";
            else 
            cout<<"# ";
        }    
    }
    cout<<endl<<endl;
    return 0;
}
