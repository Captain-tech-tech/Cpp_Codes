#include<iostream>
#include<cstring>
using namespace std;
int main()
{
    char str1[100],str2[100];cout<<"Enter your first string : ";cin.getline(str1,100);
    cout<<"Enter your second string : ";cin.getline(str2,100);

    int l1 = strlen(str1), l2 = strlen(str2);
    if(l1 != l2)
    {
        cout<<"The two strings are not anagrams"<<endl;
        return 0;
    }
    
    int flag;
    for(int i=0;i<l1;i++)
    {
        flag = 0;
        for(int j=0;j<l1;j++)
        {
            if(str1[i] == str2[j])
            {
                flag = 1;
                break;
            }
        }
        if(flag == 0)
        {
            cout<<"These two words are not anagrams!"<<endl;
            return 0;
        }
    }
    cout<<"-----  The two words are anagrams   -----"<<endl;
    return 0;
}
