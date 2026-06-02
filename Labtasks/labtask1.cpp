// Question 2
// #include<iostream>
// using namespace std;
// FUNCTION FOR CALCULATING TOTAL MARKS
// void calculate_totalmarks(int *p1,int *p2,int number)
// {
//    for(int i=0;i<number;i++)
//     {
//        *p2+=*(p1+i); 
//     } 
// }
// FUNCTION FOR CALCULATING PERCENATAGE
// void calculate_percentage(int *gain_marks,int *total_marks,float *percentage)
// {
//    float total=(float)*(total_marks); 
//    *percentage = (*gain_marks/total)*100.f; 
// }
// MAIN FUNCTION
// int main()
// {
//    int subjects_num;
//    cout<<"Enetr number of subjects, you have in exam : ";
//    cin>>subjects_num;
//    int total_marks;
//    cout<<"Enter total marks of your examinations : ";
//    cin>>total_marks;
//    int subject_marks[subjects_num];
//    for(int i=0;i<subjects_num;i++) 
//     {
//        cout<<"Enter numbers of "<<i+1<<" subject : ";
//        cin>>subject_marks[i]; 
//     }
//    int total_gain=0;
//    calculate_totalmarks(subject_marks,&total_gain,subjects_num);
//    cout<<"Your total numbers are : "<<total_gain<<endl;
//    float percentage=0.0;
//    calculate_percentage(&total_gain,&total_marks,&percentage);
//    cout<<"You have got "<<percentage<<"% marks in your exam."<<endl; 
//    return 0; 
// }

// question 1
//============ FUNCTION FOR FINDING SWIPPING,RNAGE,MEAN AND NORMALIZATION OF TWO NUMBERS ===============
// #include<iostream>
// using namespace std;
// void swap(int *p1,int *p2)
// {
//    *p1=*p1+*p2;// 1 2 =3
//    *p2=*p1-*p2; // 3 -2 =1
//    *p1=*p1-*p2; // 3 -1=2
// }
// void calculate_range(int *num1,int *num2,int *range)
// {
//    if(*num1>*num2)
//     *range=*num1;
//    else
//     *range=*num2; 
// }
// void calculate_mean(int *num1,int *num2,float *mean)
// {
//    *mean=(float)(*num1+*num2)/2;
// }
// void normalize(int *p,int *normal)
// {
//    if(*p!=0)
//    *normal=*p / *p;
//    else
//    *normal=0;
// } 
// int main()
// {
//    int num1,num2;
//    cout<<"Enter two numbers for swipping : ";
//    cin>>num1>>num2;
//    cout<<"Before Swipping "<<endl<<"Num1 : "<<num1<<endl<<"Num2 : "<<num2<<endl;
//    swap(&num1,&num2); 
//    cout<<"After Swipping "<<endl<<"Num1 : "<<num1<<endl<<"Num2 : "<<num2<<endl;
//    int rangee;
//    calculate_range(&num1,&num2,&rangee);
//    cout<<"The range of the two values is "<<rangee<<endl;
//    float meean;
//    calculate_mean(&num1,&num2,&meean);
//    cout<<"The mean value of the two numbers is "<<meean<<endl;
//    int normal;
//    normalize(&num1,&normal);
//    cout<<"Normalized value of first number "<<normal<<endl;
//    normalize(&num2,&normal);
//    cout<<"Normalized value of first number "<<normal<<endl;
//    return 0; 
// }



