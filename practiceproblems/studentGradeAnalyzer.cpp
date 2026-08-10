#include<iostream>
using namespace std;

double calculate_average(int students, float marks[])
{
    double sum = 0;
    for(int i=0;i<students;i++)
    sum+=marks[i];

    double average = sum/students;
    return average;
}

float highest_marks(int students, float marks[])
{
    float highest=marks[0];

    for(int i=0;i<students;i++)
    {
        if(highest < marks[i])
        highest = marks[i];
    }

    return highest;
}

float lowest(int students, float marks[])
{
    float lowest = marks[0];
    for(int i=0;i<students;i++)
    {
        if(lowest > marks[i])
        lowest = marks[i];
    }

    return lowest;
}

int count_pass(int students,float marks[])
{
    int count = 0;

    for(int i=0;i<students;i++)
    {
        if(marks[i] >= 50)
        count++;
    }

    return count;
}

char grade(float marks)
{
    char grad;
    if(marks >= 80)
    grad = 'A';
    else if(marks >= 70)
    grad = 'B';
    else if(marks >= 60)
    grad = 'C';
    else if(marks >= 50)
    grad = 'D';
    else 
    grad = 'F';

    return grad;
}

int main()
{
    int students;cout<<"How many students are there in the class :";cin>>students;
    float marks[students];
    for(int i=0;i<students;i++)
    {
        cout<<"Enter marks of student # "<<i+1<<"  : ";cin>>marks[i];
        while(marks[i] < 0 || marks[i] > 100)
        {
            cout<<"You have entered wrong marks, enter marks in range (1-100) : ";
            cin>>marks[i];
        }
    }

    double average = calculate_average(students,marks);
    float highest = highest_marks(students,marks);
    float low = lowest(students,marks);
    int count = count_pass(students,marks);


    cout<<endl<<"------  Result  ------"<<endl;
    cout<<"Average : "<<average<<endl;
    cout<<"Highest Marks : "<<highest<<endl;
    cout<<"Lowest Marks : "<<low<<endl;
    cout<<"Total "<<count<<" students passed"<<endl<<endl<<"-----  Grades  -----"<<endl;

    for(int i=0;i<students;i++)
    {
        cout<<"Student "<<i+1<<" : "<<marks[i]<<" - "<<grade(marks[i])<<endl;
    }

    return 0;
}
