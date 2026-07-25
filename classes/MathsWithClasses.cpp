// // a class Polynomial, that stores the co-effcient of quadratic polynomial and function to display its derivative
// #include<iostream>
// using namespace std;
// class Polynomial
// {
//     private:
//     int a,b,c;
//     public:
//     Polynomial(int x,int y,int z)
//     {
//         a=x;
//         b=y;
//         c=z;
//     }
//     void differentiate()
//     {
//         int first=2*a;
//         int second=b;
//         cout<<"Derivative : "<<first<<"x + "<<second<<endl;
//     }
// };
// int main()
// {
//     int p,q,r;
//     cout<<"Enter co-efficient for polynomial ax^2+bx+c : ";cin>>p>>q>>r;
//     Polynomial p1(p,q,r);
//     p1.differentiate();
//     return 0;
// }


// // find Derivative at a Specific Point, create a class Polynomial
// #include<iostream>
// using namespace std;
// class Polynomial
// {
//     private:
//     int a,b,c;
//     public:
//     Polynomial(int x,int y,int z)
//     {
//         a=x;
//         b=y;
//         c=z;
//     }
//     void differentiate(int v)
//     {
//         cout<<a*2<<"x + "<<b<<endl;
//         cout<<"Derivative at point (x)=("<<v<<") : "<<(a*2*v)+b<<endl;
//     }
// };
// int main()
// {
//     int p,q,r;
//     cout<<"Enter co-efficient for polynomial ax^2+bx+c : ";cin>>p>>q>>r;
//     Polynomial p1(p,q,r);
//     int x;
//     cout<<"Enter point to find slope at that point : ";cin>>x;
//     p1.differentiate(x);
//     return 0;
// }




