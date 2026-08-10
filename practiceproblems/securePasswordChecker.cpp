#include<iostream>
using namespace std;

bool is_strong(char *str)
{
    int conditions = 0;int count = 0;int flag1=0,flag2=0,flag3=0,flag4=0;
    for(int i=0;*(str+i) != '\0';i++)
    {
        count++;
        if(flag1 == 0)
        {
            for(char j= 'A';j <= 'Z';j++)
            {
                if(j == *(str+i))
                {
                    flag1 = 1;
                    conditions++;
                }
            }
        }

        if(flag2 == 0)
        {
            for(char j = 'a';j <= 'z';j++)
            {
                if(j == *(str+i))
                {
                    flag2 = 1;
                    conditions++;
                }
            }
        }

        if(flag3 == 0)
        {
            for(char j = '0';j<='9';j++)
            {
                if(j == *(str+i))
                {
                    flag3 = 1;
                    conditions++;
                }
            }
        }

        if(flag4 == 0)
        {
            if(*(str+i) == '@' || *(str+i) == '#' || *(str+i) == '$' || *(str+i) == '&')
            {
                flag4 = 1;
                conditions++;
            }
        }
        
    }
    if(count >= 8)
    conditions++;

    return conditions == 5;
}

int main()
{
    char password[100];cout<<"Enter a password : ";cin.getline(password,100);

    bool check = is_strong(password);

    if(check == 1)
    cout<<endl<<"This is a strong password ---> "<<password<<endl;
    else 
    cout<<endl<<"This is weak password  ---> "<<password<<endl;

    return 0;
}
