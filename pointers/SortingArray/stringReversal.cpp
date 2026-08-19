// 6
// revsersing a string using pointer
// #include<iostream>
// using namespace std;
// int main()
// {
//     char str[50];
//     cout<<"Enter your string : ";
//     cin.getline(str,50);

//     char *ptr = str;

//     int len = 0;
//     for(int i = 0; str[i] != '\0'; i++)
//         len++;

//     for(int i = 0; i<len/2;i++)
//     {
//         char temp = *(ptr + i);
//         *(ptr + i)= *(ptr + len - i - 1);
//         *(ptr + len - i - 1) = temp;
//     }

//     cout<<"YOUr reversed string : "<<str<<endl;

//     return 0;
// }
