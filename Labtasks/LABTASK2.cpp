// // =*=*=*=*=*=*=*=*=*=*=*=*=*= Finding higher marks of student =*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=
// #include <iostream>
// using namespace std;
// // FUNCTION FOR CHECKINH HIGHER MARKS
// void scholarship_checking(int *num1, int *num2, int **result)
// {
//    if (*num1 == *num2)
//    {
//       return;
//    }
//    else if (*num1 > *num2)
//    {
//       *result = num1;
//    }
//    else
//    {
//       *result = num2;
//    }
// }
// int main()
// {
//    int marks1, marks2;
//    cout << "Enter marks of first student : ";
//    cin >> marks1;
//    cout << "Enter marks of second student : ";
//    cin >> marks2;
//    int *result = NULL;
//    scholarship_checking(&marks1, &marks2, &result);
//    cout << "Marks entered by 1st student : " << marks1 << " . Marks entered by 2nd student : " << marks2 << endl;
//    if (result == NULL)
//       cout << "Both students have same marks, no student will get scholarship." << endl;
//    else
//       cout << "The higher marks are " << *result <<". So this student will get schloarship." <<endl;
//    return 0;
// }


// // Question Number # 02
// #include<iostream>
// using namespace std;
// // =======================FUNCTION TO CALCULATE TRAINING SCORE==========================
// void calculate_score(int *number,float **baseAddress)
// {
//   float *arr=new float[*number];
//   cout<<"`````````Enter the scores for each teacher`````````"<<endl;
//   for(int i=0;i<*number;i++)
//   {
//    cout<<"Enter training scores of "<<(i+1)<<" teacher : ";
//    cin>>arr[i];
//   }
//   *baseAddress=arr;
//   return;
// }
// // ==========================Display Funstion==========================
// void display_score(int length,float **display){
//   float **display_1 = display;
//   for(int i=0;i<length;i++)
//     {
//       cout<<"Teacher "<<i+1<<" scores : "<<*display[i]<<endl;
//     } 
// }
// int main()
// {
//    int number;
//    cout<<"Enter the number of teachers : ";
//    cin>>number;
//    float *baseAddress=NULL;
//    calculate_score(&number,&baseAddress);

//    float *ptr[number];
//    for(int i=0;i<number;i++)
//     {
//       ptr[i]=(baseAddress+i);
//     }
//    cout<<"Training Scores"<<endl; 
//    display_score(number,ptr); 
//    delete[] baseAddress;
//    return 0; 
// }



