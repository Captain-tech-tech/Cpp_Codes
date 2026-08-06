#include<iostream>
using namespace std;
int main()
{
    int seats=0, pedestrain=1, revenue=0;
    while(seats != 15)
    {
        if(pedestrain % 4 == 0)
        {
            revenue+=60;
            seats++;
            cout<<"Passenger booked seat #"<<seats<<", Total revenue: "<<revenue<<endl;
        }
        pedestrain++;
    }
    return 0;
}




































