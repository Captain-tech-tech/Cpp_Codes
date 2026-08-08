#include<iostream>
using namespace std;
int main()
{
    int arr[6] = {5,12,9,3,21,7};
    int l=arr[5],sl=arr[5],tl=arr[5];
    for(int i=1;i<6;i++)
    {
        if(arr[i]>l)
        {
            tl=sl;
            sl=l;
            l=arr[i];
        }
        else if(arr[i]>sl && arr[i] != l)
        {
            tl = sl;
            sl = arr[i];
        }
        else if(arr[i]>tl && arr[i]!=sl && arr[i]!=l)
        tl=arr[i];
    }
    cout<<"Third largest element :"<<tl<<endl;
    return 0;
}
