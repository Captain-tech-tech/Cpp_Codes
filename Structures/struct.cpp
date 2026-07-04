// #include<iostream>
// using namespace std;
// // the below shortcut can be used, by following the commented value 
// struct students // typedef struct students 
// {
//     int id;
//     float marks;
//     char grade;
// }; // }stu;
// int main()
// {
//    struct students atifkhan; // stu atifkhan
//    atifkhan.id=2341;
//    atifkhan.marks=1082.34;
//    atifkhan.grade='A';
//    cout<<"Atif id is "<<atifkhan.id<<endl; 
//    cout<<"Atif marks is "<<atifkhan.marks<<endl; 
//    cout<<"Atif grade is "<<atifkhan.grade<<endl; 
//    struct students adeel;  // stu adeel
//    adeel.id=90778;
//    adeel.marks=1052.35;
//    adeel.grade='A';
//    cout<<"Adeel id is "<<adeel.id<<endl;
//    cout<<"Adeel marks is "<<adeel.marks<<endl;
//    cout<<"Adeel grade is "<<adeel.grade<<endl;
//    return 0; 
// }

// #include<iostream>
// using namespace std;
// union money // union is used for better memory managment 
// {
//    int rice; // 4 bytes
//    char car; // 1 bytes
//    float pounds; // 4 bytes  // in case of union, the memory used is equal to the memory required for largest variable,
//                              // in this case 4 bytes as a whole memory is used. when 4 bytes are used for first
//                              // variable then it is freed and used for the next variable
//                              // while in case of structure 9 bytes memory will be used 
// };
// int main()
// {
//    union money m1; // in union in three of them you can used one at a time
//    m1.rice=34;
//    m1.car='a'; 
//    cout<<m1.car<<endl;  // m1.rice // m1.pounds
//    enum Meal{breakfast,lunch,dinner};
//    cout<<breakfast<<endl<<lunch<<endl<<dinner<<endl;
//    Meal m1=lunch;
//    cout<<(m1=1)<<endl;
//    cout<<(m1=2)<<endl;
//    return 0; 
// }






// . is called "class member access operator"
// variables in structures are known as members
// struct is a keyword
// structures may have same or different datatypes
// when structures are declared, in does not reserve memory 
// #include<iostream>
// using namespace std;
// // structure declaration can be done after main function
// struct student // here student is user-define datatype, it does not reserve memory like any other 
// {              // datatype, but when this datatype is used (during definition or initialization)
//    string name;// for storing data, then memory is reserved
//    int id_number;
//    char grade;
//    float fee_discount;
//    float gpa;
// };
// int main()
// {
//    student s1;
//    s1.id_number=3456;
//    s1.name="MuhammadAtif";
//    s1.grade='B';
//    s1.fee_discount=2232.230;
//    s1.gpa=3.48;
//    cout<<s1.id_number<<endl;
//    cout<<s1.name<<endl;
//    cout<<s1.grade<<endl;
//    cout<<s1.fee_discount<<endl;
//    cout<<s1.gpa<<endl;
//    student s2;
//    s2.id_number=345;
//    s2.name="Kashif Khan";
//    s2.grade='A';
//    s2.fee_discount=34522;
//    s2.gpa=3.93;
//    cout<<endl<<s2.id_number<<endl;
//    cout<<s2.name<<endl;
//    cout<<s2.grade<<endl;
//    cout<<s2.fee_discount<<endl;
//    cout<<s2.gpa<<endl;

//    student s3;
//    cin>>s3.id_number;
//    cin>>s3.name;
//    cin>>s3.grade;
//    cin>>s3.fee_discount;
//    cin>>s3.gpa;

//    cout<<s3.id_number<<endl;
//    cout<<s3.name<<endl;
//    cout<<s3.grade<<endl;
//    cout<<s3.fee_discount<<endl;
//    cout<<s3.gpa<<endl;
//    return 0;
// }


// different declaration methods
// #include<iostream>
// using namespace std;
// struct school
// {
//   int num;
//   string name;
//   float avg;
//   int pass;
//   char namee[40]; // size must be defined manually
// };
// int main()
// {
//   school pms={123,"Peshawar Model School Charsadda Branch",90.34,100,"Muhhamd atif"};
//   pms.num=3454;
//   pms.name="Hello world";
//   pms.avg=34.4;
//   pms.pass=234;
//   // pms.namee="Muhammad Atif";//You cannot assign a string literal directly to a char[] after declaration.
//   cin>>pms.num;//The cin >> pms.num; reads 3454, but the newline character (\n) remains in the input buffer.
//   // cin>>pms.name;
//   cin.ignore();  // getline() sees that leftover \n and immediately reads it — so pms.name becomes an empty string.
//   getline(cin,pms.name);// that's why cin.ignore is written
//   cin>>pms.avg;
//   cin>>pms.pass;
//   cin.ignore();
//   cin.getline(pms.namee,40);
//   cout<<pms.num<<pms.name<<pms.avg<<pms.pass<<pms.namee;
//   return 0;
// }

// different declaration methods
// #include<iostream>
// using namespace std;
// struct student
// {
//    int id;
//    float gpa;
//    char grade;
//    int semester;
// }atif; // atif is a variable of datatype student, we can declare many variables here
// struct point
// {
//    int x,y;
// };
// int main()
// {
//    // student atif; // here atif is called instance
//    atif.id=250053;
//    atif.gpa=3.48;
//    atif.grade='B';
//    atif.semester=2;
//    cout<<atif.id<<endl;
//    cout<<atif.gpa<<endl;
//    cout<<atif.grade<<endl;
//    cout<<atif.semester<<endl;
//    point p;
//    p.x=13,p.y=24;
//    cout<<"The length is "<<p.x<<" ,the width is "<<p.y<<endl;
//    student aizaz={240046,2.9,'C',2};
//    cout<<aizaz.id<<endl<<aizaz.gpa<<endl<<aizaz.grade<<endl<<aizaz.semester<<endl;
//    point k;
//    cout<<"Enter the length and width of k : ";
//    cin>>k.x>>k.y;
//    cout<<k.x<<endl<<k.y<<endl;
//    point m=k;
//    cout<<m.x<<endl<<m.y<<endl;    // cout<<m.x,m.y; ---> it only cout m.x value.

//    return 0;
// }



// different assignment methods on case of array of structure
// #include<iostream>
// using namespace std;
// struct employee
// {
//   int idnum;
//   string name;
//   char position[20];
//   int salary;
// };
// int main()
// {
//   employee mem[3];
//   mem[0]={2324,"Muhammad Atif","Manager",2000000};
//   // similarly mem[1],mem[2]
//   cin>>mem[0].idnum;
//   cin.ignore();
//   getline(cin,mem[0].name);
//   cin.getline(mem[0].position,20);
//   cin>>mem[0].salary;
//   mem[1]=mem[0];
//   cin>>mem[2].idnum;
//   cin.ignore();
//   getline(cin,mem[2].name);
//   cin.getline(mem[2].position,20);
//   cin>>mem[2].salary;
//   cout<<mem[0].idnum<<mem[0].name<<mem[0].position<<mem[0].salary;
//   cout<<mem[1].idnum<<mem[1].name<<mem[1].position<<mem[1].salary;
//   cout<<mem[2].idnum<<mem[2].name<<mem[2].position<<mem[2].salary;
//   return 0;
// }



// array of structures
// #include<iostream>
// using namespace std;
// struct book
// {
//    int id;
//    int pages;
//    float price;
// };
// int main()
// {
//    book lib[5];
//    for(int i=0;i<5;i++)
//     {
//       cout<<"Enter ("<<i+1<<") book information---->id,pages,price : ";
//       cin>>lib[i].id;
//       cin>>lib[i].pages;
//       cin>>lib[i].price;
//     }
//    for(int i=0;i<5;i++)
//     {
//       cout<<"BOOK "<<i+1<<" DATA"<<endl;
//       cout<<lib[i].id<<" "<<lib[i].pages<<" "<<lib[i].price<<endl;
//     } 
//    book b[4]={{3},{5,6},{},{4,3,5}}; // {,3,}, {,,4},{3,,4} this is invalid
    
//    return 0;
// }


// structure array data entry
// #include<iostream>
// using namespace std;
// struct imf
// {
//   int num;
//   int money;
//   string name;
//   float rate;
//   char kuch[30];
// };
// int main()
// {
//   imf organ[4];
//   for(int i=0;i<4;i++)
//    {
//     cout<<"Enter information(num,money,name,rate,kuchbii) of ("<<i+1<<") organization : ";
//     cin>>organ[i].num;
//     cin>>organ[i].money;
//     cin.ignore();
//     getline(cin,organ[i].name);
//     cin>>organ[i].rate;
//     cin.ignore();
//     cin.getline(organ[i].kuch,30);
//    }
//   for(int i=0;i<4;i++)
//    {
//     cout<<organ[i].num<<endl;
//     cout<<organ[i].money<<endl;;
//     cout<<organ[i].name<<endl;
//     cout<<organ[i].rate<<endl;
//     cout<<organ[i].kuch<<endl;
//    } 
//   return 0;
// }



// // structure containing array as member
// #include<iostream>
// using namespace std;
// struct student
// {
//   int studentId;
//   int marks[4];
//   string name;
// };
// int main()
// {
//   student atif;
//   cin>>atif.studentId;
//   for(int i=0;i<4;i++)
//    {
//     cout<<"Enter marks "<<i+1<<" subject : ";
//     cin>>atif.marks[i];
//    }
//   cin.ignore();
//   getline(cin,atif.name); 
//   student muniem ={1323,{35,63,23,23},"Abdul Munium"};
//   return 0;
// }





// // structure as member of another structure -----> nesting structure
// #include<iostream>
// using namespace std;
// struct marks
// {
//   int english;
//   int maths;
//   float urdu;
//   float arabi;
// };
// struct student
// {
//   int fee;
//   marks part;
//   string name;
// };
// int main()
// {
//   student atif={1235134,{23,35,25.3,23.2},"Muhammad Atif"};
//   student mum;
//   mum.fee=155345;
//   mum.part.english=34;
//   mum.part.maths=45;
//   mum.part.urdu=53.2;
//   mum.part.arabi=45.3;
//   mum.name="Muhammad Atif";
//   student aizai;
//   cin>>aizai.fee;
//   cin>>aizai.part.english;
//   cin>>aizai.part.maths;
//   cin>>aizai.part.urdu;
//   cin>>aizai.part.arabi;
//   cin.ignore();
//   getline(cin,aizai.name);
//   return 0;
// }



// // Accessing Structures with Pointers
// #include<iostream>
// using namespace std;
// struct rectangle
// {
//   int len;
//   int width;
// };
// struct Point
// {
//   int x;
//   int y;
// };
// int main()
// {
//   rectangle f1;
//   f1.len=42,f1.width=23;
//   rectangle *f1ptr=&f1;
//   cout<<(*f1ptr).len<<endl<<(*f1ptr).width<<endl;
//   // -> is called arrow operator
//   cout<<f1ptr->len<<endl<<f1ptr->width<<endl;
//   Point p;
//   p.x=10;
//   p.y=20;
//   Point* ptr=&p;
//   ptr->x=10;
//   ptr->y=20;
//   cout<<"Point (x,y) = ("<<p.x<< ","<<p.y<<")"<<endl;
//   cout<<"Point (x,y) = ("<<(*ptr).x<<","<<(*ptr).y<<")"<<endl;
//   cout<<"Point (x,y) = ("<<ptr->x<<","<<ptr->y<<")"<<endl;
//   return 0;
// }



// you can't perform direct comparison on structure variable
// e.g: point p1,p2;
// if(p1==p2) it is wrong
// if(p1.x=p2.x&&p1.y=p2.y) it is correct, no issue

// // anonymous structure(without name)
// #include<iostream>
// using namespace std;
// struct 
// {
//   int x;
//   int y;
// }p1,p2;
// int main()
// {
//   p1.x=34;
//   p1.y=45;
//   p2.x=76;
//   p2.y=12;
//   cout<<p1.x<<endl<<p1.y<<endl;
//   cout<<p2.x<<endl<<p2.y<<endl;
//   return 0;
// }

//


