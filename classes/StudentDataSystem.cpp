#include<iostream>
using namespace std;
class Student
{
    private:
    string name;
    string r_number;
    int papers;
    float *marks;
    int semesters; 
    float *gpahistory;
    public:
    // default constructor
    Student()
    {
        name="AI Student";
        r_number="25-p-0001";
        papers=7;
        marks=new float[papers]{};
        semesters=5;
        gpahistory=new float[semesters]{};
    }
    // setter function for entering entirely new information
    void set_value(string n,string r,int p,float *m,int s,float *g)
    {
        name=n;
        r_number=r;
        papers=p;
        marks=new float[papers];
        for(int i=0;i<papers;i++)
        {
            *(marks+i)=m[i];
        }
        semesters=s;
        gpahistory=new float[semesters];
        for(int i=0;i<semesters;i++)
        {
            *(gpahistory+i)=*(g+i);
        }
    }
    // copy constructor
    Student(const Student &obj)
    {
        name=obj.name;
        r_number=obj.r_number;
        papers=obj.papers;
        marks=new float[papers];
        for(int i=0;i<papers;i++)
        {
            *(marks+i)=obj.marks[i];
        }
        semesters=obj.semesters;
        gpahistory=new float[semesters];
        for(int i=0;i<semesters;i++)
        {
            gpahistory[i]=obj.gpahistory[i];
        }
    }
    // assignment copy operator for deep copy
    Student& operator=(const Student &obj)
    {
        if(this!=&obj)// if this condition is not checked, you will delete your own data, and then try to copy from it, which causing undefined behaviour
        {
            delete[] marks; // freeing old memory to avoid memeory leak
            delete[] gpahistory; // freeing old memory to avoid memeory leak
            name=obj.name;
            r_number=obj.r_number;
            papers=obj.papers;
            marks=new float[papers]; // allocating new memeory
            for(int i=0;i<papers;i++)
            {
                marks[i]=obj.marks[i];
            }
            semesters=obj.semesters;
            gpahistory=new float[semesters]; // allocating new memory
            for(int i=0;i<semesters;i++)
            {
                gpahistory[i]=obj.gpahistory[i];
            }
        }
        return *this;
    }
    // setter function for inputing and updating student object data
    void set_value()
    {
        int choice;
        while(true)
        {
            cout<<"Press (1) if you wanna change your name "<<endl;
            cout<<"Press (2) if you wanna change roll number"<<endl;
            cout<<"Press (3) if you wanna change total papers number "<<endl;
            cout<<"Press (4) if you wanna update marks "<<endl;
            cout<<"Press (5) if you wanna change semester number "<<endl;
            cout<<"Press (6) if you wanna update gpa of a specific semester"<<endl;
            cout<<"Press (7) to exit!"<<endl;
            cout<<"Enter you chioce : ";cin>>choice;
            if(choice<1||choice>7)
            {
                cout<<"Invalid input!"<<endl;
                continue;
            }
            if(choice==1)  // for changing name
            {
                cout<<"Your previous name is "<<name<<endl;
                cout<<"Enter your new name : ";
                cin.ignore();
                getline(cin,name);
            }
            else if(choice==2) // for changing roll number
            {
                cout<<"Your previous roll number is "<<r_number<<endl;
                cout<<"Enter your new roll number : ";
                cin.ignore();
                getline(cin,r_number);
            }
            else if(choice==3) // for changing number of papers
            {
                cout<<"your previous papers were : "<<papers<<endl;
                cout<<"Enter your new total papers number : ";
                cin>>papers;
            }
            else if(choice==4) // for changing papers marks
            {
                int update; // for updating choice type 
                int num;// for changing specific paper marks
                while(true)
                {
                    cout<<"Enter (1) if you wanna change all papers marks"<<endl;
                    cout<<"Enter (2) if you wanna change a specific paper's marks"<<endl;
                    cout<<"Enter your update choice : ";
                    cin>>update;
                    if(update==1||update==2)
                    break;
                    else
                    cout<<"Invalid input"<<endl;
                }    
                if(update==1) // updating all papers marks
                {
                    for(int i=0;i<papers;i++)
                    {
                        cout<<"Old ("<<i+1<<") paper marks : "<<*(marks+i)<<endl;
                        cout<<"Enter updated marks for ("<<i+1<<") paper : ";
                        cin>>marks[i];
                    }
                }
                else if(update==2) // updating specific paper marks
                {
                    cout<<"Enter papers number for which you wanna change marks (1-"<<papers<<") : ";
                    cin>>num;
                    cout<<"Old ("<<num<<") paper marks : "<<*(marks+num-1);
                    cout<<endl<<"Enter your updated marks for ("<<num<<") paper : ";
                    cin>>*(marks+num-1);
                }
            }
            else if(choice==5) // for entering new semester number
            {
                while(1)
                {
                    cout<<"Your current semester : "<<semesters<<endl;
                    cout<<"Enter your new semester number : ";cin>>semesters;
                    if(semesters>=1 && semesters<=8)
                    break;
                    else
                    cout<<"You have entered wrong semester number"<<endl;
                }    
            }
            else if(choice==6) // for chaning semesters gpa
            {
                int up_to_date; // for choice type
                int sem_num;  // for specific semester number
                while(1)
                {
                    cout<<"Enter (1) if you wanna change all semesters gpa"<<endl;
                    cout<<"Enter (2) if you wanna change a specific semester's gpa"<<endl;
                    cout<<"Enter your update choice : ";
                    cin>>up_to_date;
                    if(up_to_date==1||up_to_date==2)
                    break;
                    else
                    cout<<"Invalid input"<<endl;
                }    
                if(up_to_date==1) // updating all semesters gpa             
                {
                    for(int i=0;i<papers;i++)
                    {
                        cout<<"Old ("<<i+1<<") semester gpa : "<<*(gpahistory+i)<<endl;
                        cout<<"Enter updated gpa for ("<<i+1<<") semester : ";
                        cin>>gpahistory[i];
                    }
                }
                else if(up_to_date==2) // updating specific semester gpa
                {
                    cout<<"Enter semester number for which you wanna change gpa (1-"<<sem_num<<") : ";
                    cin>>sem_num;
                    cout<<"Old ("<<sem_num<<") semester gpa : "<<*(gpahistory+sem_num-1);
                    cout<<"Enter your updated gpa for ("<<sem_num<<") semester : ";
                    cin>>*(gpahistory+sem_num-1);
                }                
            }
            else if(choice==7)
            {
                break;
            }
        }
    }
    // getter function for showing details of a specific student
    void get_value()
    {
        cout<<endl<<"Name : "<<name<<endl;
        cout<<"Roll number : "<<r_number<<endl;
        cout<<"The number of papers : "<<papers<<endl;
        cout<<"("<<papers<<") Papers marks"<<endl;
        for(int i=0;i<papers;i++)
        {
            cout<<i+1<<") paper marks : "<<*(marks+i)<<endl;
        }
        cout<<endl<<"Your current semester : "<<semesters<<endl;
        cout<<"("<<semesters<<") semesters GPAs"<<endl;
        for(int i=0;i<semesters;i++)
        {
            cout<<i+1<<") SGPA : "<<gpahistory[i]<<endl;
        }
    }
    ~Student()
    {
        delete[] marks;
        marks=nullptr;
        delete[] gpahistory;
        gpahistory=nullptr;
    }
    void high_low_marks(int);
    void high_low_gpa(int);
};
// function for finding highest and lowest marks of a student
void Student::high_low_marks(int stu_number)
{
    float high_marks=marks[0],low_marks=marks[0];
    for(int i=0;i<papers;i++)
    {
        if(high_marks<marks[i])
        high_marks=marks[i];
        if(low_marks>marks[i])
        low_marks=marks[i];
    }
    cout<<"The highest marks of student ("<<stu_number<<") : "<<high_marks<<endl;
    cout<<"The lowest marks of student ("<<stu_number<<") : "<<low_marks<<endl;
}
void Student::high_low_gpa(int stu_number)
{
    float high=*gpahistory,low=*gpahistory;
    for(int i=0;i<semesters;i++)
    {
        if(gpahistory[i]<low)
        low=gpahistory[i];
        if(gpahistory[i]>high)
        high=gpahistory[i];
    }
    cout<<"The highest GPA of student ("<<stu_number<<") : "<<high<<endl;
    cout<<"The lowest GPA  of student ("<<stu_number<<") : "<<low<<endl;
}
int main()
{
    int stu;// for student strength
    cout<<"Enter the number of students in the class : ";
    cin>>stu;
    Student *AI_batch=new Student[stu]; // array of student 
    cout<<"For "<<stu<<" students be default values entered!"<<endl;
    int student;// for entering specific student details
    string name,r_number;
    int papers;float *marks;
    int semesters;float gpahistory;
    int choice;
    while(true)
    {
        while(true)
        {
            cout<<"Enter (1) if you wanna enter all new details for a student"<<endl;
            cout<<"Enter (2) if you wanna change/update some specific details about a student"<<endl;
            cout<<"Enter (3) if you wanna show all details of a specific student"<<endl;
            cout<<"Enter (4) if you wanna find highest and lowest marks of a student"<<endl;
            cout<<"Enter (5) if you wanna find the highest and lowest semester GPA"<<endl;
            cout<<"Enter (6) if you wanna enter one student details into another student"<<endl;
            cout<<"Enter (7) if you wanna increase class strength"<<endl;
            cout<<"Enter (8) if you wanna exit this application"<<endl;
            cout<<"Enter your choice : ";cin>>choice;
            if(choice>=1&&choice<=8)
            break;
            else
            cout<<"Invalid input!"<<endl;
        }  
        if(choice==1) // for entering all new details of student
        {
            cout<<"Enter student number (1-"<<stu<<") : ";
            cin>>student; // asking about student number
            cin.ignore();
            cout<<"Enter your name : ";
            getline(cin,name); // inputing student name
            cout<<"Enter your roll number : ";
            getline(cin,r_number); // inpputing student roll number
            cout<<"Enter your total papers number : ";
            cin>>papers;// entering number of papers
            float arr1[papers];
            for(int i=0;i<papers;i++)
            {
                cout<<"Enter ("<<i+1<<") paper marks : ";
                cin>>arr1[i];// inputing each paper marks
            }
            cout<<"Enter semester number of the student "<<student<<" : ";
            cin>>semesters; // entering number of semesters
            float arr2[semesters];
            for(int i=0;i<semesters;i++)
            {
                cout<<"Enter ("<<i+1<<") semester GPA : ";
                cin>>arr2[i];// entering each semester gpa
            }
            AI_batch[student-1].set_value(name,r_number,papers,arr1,semesters,arr2);
        } 
        else if(choice==2) // for updating some data of student
        {
            cout<<"Enter student number (1-"<<stu<<") : ";
            cin>>student;
            AI_batch[student-1].set_value();
        } 
        else if(choice==3) // for printing all details
        {
            cout<<"Enter student number you wanna his/her details : ";
            cin>>student;
            AI_batch[student-1].get_value();    
        }
        else if(choice==4) // for finding highest and lowest marks
        {
            cout<<"Enter student number you wanna his/her highest and lowest marks : ";
            cin>>student;
            AI_batch[student-1].high_low_marks(student);
        }
        else if(choice==5) // finding highest and lowest gpa
        {
            cout<<"Enter student number, you wanna find his/her highest and lowest GPA : ";
            cin>>student;
            AI_batch[student-1].high_low_gpa(student);
        }
        else if(choice==6) // for pasting one student details into another student
        {
            int paste;// for student whose data will be used for pasting
            cout<<"Enter student number (1-"<<stu<<"), whose details you wanna paste : ";
            cin>>paste;
            cout<<"Enter student number (1-"<<stu<<"), in which you wanna enter ("<<paste<<") student details : ";
            cin>>student;
            AI_batch[paste-1]=AI_batch[student-1];
        }
        else if(choice==7)
        {
            
        }
        else if(choice==8)
        {
            break;
        }
    }
    return 0;
}









// Student s1,s2;
// s2=s1;
// this --> s2
// obj --> s1






// what is instance data member 
// what is static data member