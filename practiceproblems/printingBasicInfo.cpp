#include<iostream>
using namespace std;
int main()
{
    string n;int age;string hobby;
    cout<<"Enter your name : ";
    getline(cin>>ws,n);
    cout<<"Enter your age : ";
    cin>>age;
    cout<<"Enter your hobby : ";
    getline(cin>>ws,hobby);
    
    cout<<"+++ DO you wanna see your information (y/n) +++";
    char choice;
    cin>>choice;

    if(choice == 'Y' || choice == 'y' )
    {
        cout<<"------  YOUR INFORMATION ------"<<endl;
        cout<<"Name  : "<<n<<endl;
        cout<<"Age   : "<<age<<endl;
        cout<<"Hobby : "<<hobby<<endl;
    }

    return 0;
}


