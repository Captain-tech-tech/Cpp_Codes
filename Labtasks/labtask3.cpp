// // QUESTION # 01
// // c++ program using dynamic 2D array to store students data
// #include<iostream>
// using namespace std;
// int main()
// {
//     int **p1=new int*[3];
//     for(int i=0;i<3;i++)
//      {
//         *(p1+i)=new int[3];
//      }     
//     for(int i=0;i<3;i++)
//      {
//         for(int j=0;j<3;j++)
//          {
//             if(i==0 && j==0)
//              {
//                 cout<<"Enter students for Peshawar Campus - Computer Science : ";
//                 cin>>*(*(p1+i)+j);
//              }
//             if(i==0 && j==1)
//              {
//                 cout<<"Enter students for Peshawar Campus - Software Engineering : ";
//                 cin>>*(*(p1+i)+j);
//              } 
//             if(i==0 && j==2)
//              {
//                 cout<<"Enter students for Peshawar Campus - Data Science : ";
//                 cin>>*(*(p1+i)+j);
//              } 
//             if(i==1 && j==0)
//              {
//                 cout<<"Enter students for Islamabad Campus - Computer Science : ";
//                 cin>>*(*(p1+i)+j);
//              }
//             if(i==1 && j==1)
//              {
//                 cout<<"Enter students for Islamabad Campus - Software Engineering : ";
//                 cin>>*(*(p1+i)+j);
//              } 
//             if(i==1 && j==2)
//              {
//                 cout<<"Enter students for Islamabad Campus - Data Science : ";
//                 cin>>*(*(p1+i)+j);
//              } 
//             if(i==2 && j==0)
//              {
//                 cout<<"Enter students for Multan Campus - Computer Science : ";
//                 cin>>*(*(p1+i)+j);
//              } 
//             if(i==2 && j==1) 
//              {
//                 cout<<"Enter students for Multan Campus - Software Engineering : ";
//                 cin>>*(*(p1+i)+j);
//              } 
//             if(i==2 && j==2)
//              {
//                 cout<<"Enter students for Multan Campus - Data Science : ";
//                 cin>>*(*(p1+i)+j);
//              } 
//          }
//      } 
//     for(int i=0;i<3;i++)
//      {
//         if(i==0)
//         {
//           cout<<endl;  
//           cout<<"+++++-------PESHAWAR CAMPUS-------+++++";
//           cout<<endl<<"CS"<<" SE"<<" DS"<<endl;  
//         for(int j=0;j<3;j++)
//          {
//             cout<<*(*(p1+i)+j)<<" ";
//          }
//         } 
//         if(i==1)
//          {
//             cout<<endl;
//           cout<<"+++++-------Islamabad Campus-------+++++";
//           cout<<endl<<"CS"<<" SE"<<" DS"<<endl;
//           for(int j=0;j<3;j++)
//            {
//             cout<<*(*(p1+i)+j)<<" ";            
//            }            
//          }
//         if(i==2)
//          {
//             cout<<endl;
//           cout<<"+++++-------Multan Campus-------+++++";
//           cout<<endl<<"CS"<<" SE"<<" DS"<<endl;
//           for(int j=0;j<3;j++)
//            {
//             cout<<*(*(p1+i)+j)<<" ";            
//            }            
//          } 
//      } 
//     for(int i=0;i<3;i++)
//      {
//         delete[] *(p1+i);
//      } 
//     delete[] p1; 
//     return 0;
// }






// QUESTION # 02
// c++ code for enemy Hit Detection in a 3×3 Grid
#include<iostream>
#include<random>
#include<limits>
using namespace std;
int main()
{
    int **p1=new int*[3];
    for(int i=0;i<3;i++)
     *(p1+i)=new int[3];
    random_device rd;
    mt19937 gen(rd());
    uniform_int_distribution<int> distrib(0, 1);
    for(int i=0;i<3;i++) 
     {
        for(int j=0;j<3;j++)
         *(*(p1+i)+j)=distrib(gen);
     } 
    // this commented code is written for checking, if random works or not 
    // for(int i=0;i<3;i++)
    //  {
    //     for(int j=0;j<3;j++)
    //      cout<<*(*(p1+i)+j)<<" ";
    //     cout<<endl; 
    //  } 
    int kill=0;
    int enemies=0;
    for(int i=0;i<3;i++)
     {
        for(int j=0;j<3;j++)
         {
            if(*(*(p1+i)+j)==1)
             enemies++;
         }
     }
    cout<<endl<<"Total Live Enemies : "<<enemies<<endl; 
    int r,c;
    int hits=0;
    while(kill!=enemies)
     {
        hits++;
        cout<<"Enter row number : ";
        cin>>r;
        cout<<"Enter column number : ";
        cin>>c;
        if(r>2||r<0||c>2||c<0)
         {
          cout<<"You have entered wrong number, enter in (0-1)"<<endl;
          continue;
         } 
        if(*(*(p1+r)+c)==1)
         {
            kill++;
            *(*(p1+r)+c)=0;
            cout<<"Great shot!";
         }
        else 
         cout<<"Shot missed!"; 
     }
    cout<<"All the "<<kill<<" enemies shot down"<<endl;
    cout<<"Totally "<<hits<<" tries done for killing "<<kill<<" enemies."<<endl;
    cout<<"Final Grid\n";
    for(int i=0;i<3;i++)
     {
        for(int j=0;j<3;j++)
         cout<<*(*(p1+i)+j)<<" ";
         cout<<endl;
     }
    for(int i=0;i<3;i++)
     delete[] *(p1+i);
    delete[] p1;   
    return 0;
}























