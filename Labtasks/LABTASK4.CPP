// // structure for storing cars basic information
// #include<iostream>
// using namespace std;
// struct car
// {
//   string model;
//   int year;
//   float price;
// };
// int main()
// {
//   car cars[3];
//   for(int i=0;i<3;i++)
//    {
//     cout<<"Enter information(model,year,price) of ("<<i+1<<") car : ";
//     getline(cin,cars[i].model);
//     cin>>cars[i].year;
//     cin>>cars[i].price;
//     cin.ignore();
//    }
//   cout<<endl; 
//   for(int i=0;i<3;i++)
//    {
//     if(cars[i].price>=500000)
//      {   
//       cout<<"````````Car ("<<i+1<<") information``````````` \n ";
//       cout<<"Model : "<<cars[i].model<<endl;
//       cout<<"Year : "<<cars[i].year<<endl;
//       cout<<"Price : "<<cars[i].price<<endl;
//      }
//    } 
//   return 0;
// }









// // structure array for storing contact information
// #include<iostream>
// using namespace std;
// struct address
// {
//     char addres[30];
//     char country[30];
// };
// struct contact_info
// {
//     string name;
//     string phone;
//     address location;
// };
// int main()
// {
//     contact_info persons[10];
//     for(int i=0;i<10;i++)
//      {
//         cout<<endl<<"<--------+Enter information of ("<<i+1<<") person+-------->"<<endl;
//         cout<<"Name : ";
//         getline(cin,persons[i].name);
//         cout<<"Phone Number : ";
//         getline(cin,persons[i].phone);
//         cout<<"Address : ";
//         cin.getline(persons[i].location.addres,30);
//         cout<<"Country : ";
//         cin.getline(persons[i].location.country,30);
//      }
//     for(int i=0;i<10;i++)
//      {
//         cout<<"Contact information of ("<<i+1<<") person!"<<endl;
//         cout<<"Name : "<<persons[i].name<<endl;
//         cout<<"Phone Number : "<<persons[i].phone<<endl;
//         cout<<"Address : "<<persons[i].location.addres<<endl;
//         cout<<"Country : "<<persons[i].location.country<<endl;
//      } 
//     cout<<"All contact information ended!"; 
//     return 0;
// }








// // mobile information entering and displaying system
// #include<iostream>
// using namespace std;
// struct spec
// {
//     int megapixel;
// };
// struct mobile
// {
//     spec pixels;
//     float price;
// }mobile1[5];
// // function for display all data,expensive,highpixels camera
// void info(void)
// {
//     for(int i=0;i<5;i++)
//      {
//         cout<<endl<<"``````` "<<i+1<<" mobile information ```````"<<endl;
//         cout<<"Megapixels : "<<mobile1[i].pixels.megapixel<<endl;
//         cout<<"Price : "<<mobile1[i].price<<endl;
//      }
//     float expensive=0;
//     int highpixels=0; 
//     int count=0;
//     int count1=0;
//     double sum=0.0;
//     for(int i=0;i<5;i++)
//      {
//         if(mobile1[i].price>expensive)
//          expensive=mobile1[i].price;
//         if(mobile1[i].pixels.megapixel>highpixels)
//          {
//           highpixels=mobile1[i].pixels.megapixel; 
//           count=i;
//          } 
//         sum+=mobile1[i].price; 

//         if(mobile1[i].pixels.megapixel>50)
//          count1++;
//      } 
//     cout<<"The most expensive mobile is "<<expensive<<endl;
//     cout<<"The high megapixels is : "<<highpixels<<" of mobile number : "<<count<<endl;
//     cout<<"The average price of all mobiles is : "<<float(sum/5)<<endl;
//     cout<<"The number of Mobiles with camers >= 50MP : "<<count1<<endl;

// }
// int main()
// {
//     for(int i=0;i<5;i++)
//      {
//         cout<<"Enter Megapixels of ("<<i+1<<") mobile : ";
//         cin>>mobile1[i].pixels.megapixel;
//         cout<<"Enter price of ("<<i+1<<") mobiel : ";
//         cin>>mobile1[i].price;
//      }
//     info();
//     return 0;
// }






#include<iostream>
using namespace std;
void print(int *arr,int m,int n)
{
    for(int i=0;i<m;i++)
     {
        for(int j=0;j<n;j++)
         cout<<*(arr+i*m+j)<<" ";
        cout<<endl; 
     }
}
int main()
{
    int arr[3][3]={
        {1,2,3},
        {4,5,6},
        {7,8,9}
    };
    print((int*)arr,3,3);
    return 0;
}











