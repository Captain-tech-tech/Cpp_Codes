#include <iostream>
#include <cstring>
using namespace std;
int main()
{
    char str[100];cout << "Enter a string for compression : ";cin.getline(str, 100);

    char compress[200];

    int count = 1, j = 0;
    for (int i = 0; str[i] != '\0'; i++)
    {
        if (str[i] == str[i + 1])
            count++;
        else
        {
            compress[j] = str[i];
            compress[j + 1] = '0' + count;
            j += 2;
            count = 1;
        }
    }

    compress[j] = '\0';

    int l1 = 0, l2 = 0;
    l1 = strlen(str);
    l2 = strlen(compress);

    if (l2 > l1)
        cout << "The original string has smaller length : " << str << endl;
    else
        cout << "Your compress string : " << compress << endl;

    return 0;
}