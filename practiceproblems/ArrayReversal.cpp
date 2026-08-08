// Reading : Write a program that takes an array of integers as input and prints the elements in reverse order
// (without modifying the original array)

// #include<iostream>
// using namespace std;
// int main()
// {
//     int n;cout<<"Enter the size of the array :";cin>>n;
//     int arr[n];

//     cout<<"Enter "<<n<<" elements for you array :";
//     for(int i=0;i<n;i++)
//     cin>>arr[i];

//     cout<<"------ Printing the elements in reverse order ------"<<endl;
//     for(int i = n-1;i>=0;i--)
//     cout<<arr[i]<<"  ";
//     cout<<endl;
//     return 0;
// }









// Writing :Write a program that reverses the elements of an array (modifying the original array) and then
// displays the modified array

#include<iostream>
using namespace std;
int main()
{
    int n;cout<<"Enter the size of the array :";cin>>n;
    int arr[n];

    cout<<"Enter "<<n<<" elements for your array :";
    for(int i=0;i<n;i++)
    cin>>arr[i];

    int temp=0;
    for(int i=0;i<n/2;i++)
    {
        temp = arr[i];
        arr[i] = arr[n-i-1];
        arr[n-1-i] = temp;
    }

    cout<<"Your array in reverse order (original array modified) : ";
    for(int i=0;i<n;i++)
    cout<<arr[i]<<"  ";
    cout<<endl;
    return 0;
}





























