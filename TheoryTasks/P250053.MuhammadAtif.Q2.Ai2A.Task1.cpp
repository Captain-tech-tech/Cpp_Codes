// QUESTION NUMBER # 02
#include <iostream>
using namespace std;
int ***entering_marks(int class_num);
void report_showing(int ***ptr1, int classes);
void calculate_average(int ***);
void calculate_classA(int ***ptr1); // ptr1 is used throught the code for simplicity
void max_quizmarks(int ***);
void calculate_bestPclass(int ***);
void adjusted_quizmarks(int ***);
void delete_memory(int ***ptr1);
int main()
{
   cout << "~`~`~`~`++++++++<--QUIZ ANALYSIS SYSTEM-->++++++++~`~`~`~`" << endl;
   cout << "1. Enter quiz marks" << endl;
   cout << "2. Display quiz marks" << endl;
   cout << "3. Calculate student average" << endl;
   cout << "4. Calculate class average" << endl;
   cout << "5. Find maximum quiz mark in a class" << endl;
   cout << "6. Identify best performing class" << endl;
   cout << "7. Adjust quiz marks for fairness" << endl;
   cout << "8. Exit" << endl;
   int choice;
   cout << "Enter your choice according to these options : ";
   cin >> choice;
   int ***ptr1;
   while (1)
   {
      cin.ignore();
      int classes;
      if (choice == 1)
      {
         classes;
         cout << "Enter the number of classes in university : ";
         cin >> classes;
         ptr1 = entering_marks(classes);
      }
      else if (choice == 2)
      {
         report_showing(ptr1, classes);
      }
      else if (choice == 3)
      {
         calculate_average(ptr1);
      }
      else if (choice == 4)
      {
         calculate_classA(ptr1);
      }
      else if (choice == 5)
      {
         max_quizmarks(ptr1);
      }
      else if (choice == 6)
      {
         calculate_bestPclass(ptr1);
      }
      else if (choice == 7)
      {
         adjusted_quizmarks(ptr1);
      }
      else if (choice == 8)
         break;
      else
         cout << "Error!" << endl
              << "Enter correct option(1-8)" << endl;
      cout << endl
           << "~`~`~`~`++++++++<--QUIZ ANALYSIS SYSTEM-->++++++++`~`~`~`~" << endl;
      cout << endl
           << "Enter your choice (1-8) : ";
      cin >> choice;
   }
   delete_memory(ptr1);
   return 0;
}
void adjusted_quizmarks(int ***ptr1)
{
   int i = 0;
   while (*(ptr1 + i) != 0)
   {
      int students = 0;
      for (int j = 0; *(*(ptr1 + i) + j) != 0; j++)
         students++;
      cout << endl << "Class # 0" << (i + 1) << " Modified : "<<endl;
      float total_sum = 0.0;
      for (int j = 0; j < students; j++)
      {
         int frequency= 0;
         for (int k = 0; *(*(*(ptr1 + i) + j) + k) != 0; k++)
            frequency++;
         int sum = 0;
         for (int k = 0; k < frequency; k++)
         {
            int original = *(*(*(ptr1 + i) + j) + k);
            int modi = (original * students) / frequency;
            *(*(*(ptr1 + i) + j) + k) = modi;
            sum += modi;
         }
         float average = (float)sum / frequency;
         total_sum += average;
         cout << "Student # 0" << (j + 1) << " `````` New average : " << average <<" ```````` "<< endl;
      }
      float class_average = total_sum / students;
      cout << "New class average : " << class_average << endl;
      i++;
   }
}
void calculate_bestPclass(int ***ptr1)
{
   int i = 0;
   float best_avg = 0.0;
   while (*(ptr1 + i) != nullptr)
   {
      int student = 0;
      float total_sum = 0.0;
      for (int j = 0; *(*(ptr1 + i) + j) != 0; j++)
         student++;
      for (int j = 0; j < student; j++)
      {
         int sum = 0;
         int quizzes = student - j;
         for (int k = 0; k < quizzes; k++)
            sum += *(*(*(ptr1 + i) + j) + k);
         total_sum += (float)sum / quizzes;
      }
      float class_avg = total_sum / student;
      if (class_avg > best_avg)
         best_avg = class_avg;
      i++;
   }
   cout << "Best performing classes with average : " << best_avg << endl;
   i = 0;
   while (*(ptr1 + i) != 0)
   {
      int student = 0;
      float total_sum = 0.0;
      for (int j = 0; *(*(ptr1 + i) + j) != 0; j++)
         student++;
      for (int j = 0; j < student; j++)
      {
         int sum = 0;
         int quizzes = student - j;
         for (int k = 0; k < quizzes; k++)
            sum += *(*(*(ptr1 + i) + j) + k);
         total_sum += (float)sum / quizzes;
      }
      float class_avg = total_sum / student;
      if (class_avg == best_avg)
         cout << "Class # 0" << (i + 1) << endl;

      i++;
   }
}

void max_quizmarks(int ***ptr1)
{
   int class_num;
   cout << "Enter your class number : ";
   cin >> class_num;
   int student = 0;
   for (int i = 0; *(*(ptr1 + class_num - 1) + i) != 0; i++)
      student++;
   int highest_marks = 0;
   for (int i = 0; i < student; i++)
   {
      for (int j = 0; j < student - i; j++)
         if (highest_marks < *(*(*(ptr1 + class_num - 1) + i) + j))
            highest_marks = *(*(*(ptr1 + class_num - 1) + i) + j);
   }
   cout << "The highest marks in class (" << class_num << ") : " << highest_marks << endl;
}
void calculate_classA(int ***ptr1)
{
   int class_num;
   cout << "Enter your class number : ";
   cin >> class_num;
   float average, class_average = 0.0, total_sum = 0.0;
   int student = 0, sum = 0, num;
   for (int i = 0; *(*(ptr1 + class_num - 1) + i) != 0; i++)
      student++;
   for (int i = 0; *(*(ptr1 + class_num - 1) + i) != 0; i++)
   {
      average = 0.0;
      for (int j = 0; j < student - i; j++)
      {
         sum += *(*(*(ptr1 + class_num - 1) + i) + j);
      }
      num = student - i;
      average = (int)(sum / num);
      total_sum += average;
   }
   class_average = total_sum / student;
   cout << "The average of the class " << class_num << " is " << class_average;
}
void calculate_average(int ***ptr1)
{
   int class_num;
   cout << "Enter Class Number : ";
   cin >> class_num;
   int student;
   cout << "Enter Student Number : ";
   cin >> student;
   int sum = 0, len = 0;
   for (int i = 0; *(*(*(ptr1 + class_num - 1) + student - 1) + i) != 0; i++)
   {
      sum += *(*(*(ptr1 + class_num - 1) + student - 1) + i);
      len++;
   }
   float average = (int)(sum / len);
   cout << "Student Number : " << student << endl
        << "Class Number : " << class_num;
   cout << endl
        << "Average : " << average;
}
void report_showing(int ***ptr1, int classes)
{
   int len;
   for (int i = 0; i < classes; i++)
   {
      len = 0;
      cout << "++++++++++++++++++++++++++ Class # 0" << i + 1;
      cout << "++++++++++++++++++++++++++\n"
           << endl;
      for (int j = 0; *(*(ptr1 + i) + j) != 0; j++)
         len++;
      for (int k = 0; k < len; k++)
      {
         cout << "Student # " << k + 1 << " : ";
         for (int l = 0; l < len - k; l++)
         {
            cout << *(*(*(ptr1 + i) + k) + l) << "  ";
         }
         cout << endl;
      }
      cout << endl;
   }
}
int ***entering_marks(int class_num)
{
   int ***ptr1 = new int **[class_num + 1];

   for (int i = 0; i < class_num; i++)
   {
      int student;
      cout << "Enter the number of students in class (" << i + 1 << ") : ";
      cin >> student;
      int **ptr2 = new int *[student];
      *(ptr1 + i) = ptr2;
      for (int j = 0; j < student; j++)
      {
         int *ptr3 = new int[student - j];
         cout << "Enter " << (student - j) << " quizes marks for student (" << (j + 1) << ") : ";
         for (int k = 0; k < (student - j); k++)
         {
            int marks;
            cin >> marks;
            *(ptr3 + k) = marks;
         }
         *(ptr2 + j) = ptr3;
         *(ptr3 + student - j) = 0;
      }
      *(ptr2 + student) = nullptr;
   }
   *(ptr1 + class_num + 1) = nullptr;
   return ptr1;
}
void delete_memory(int ***ptr1)
{
   for (int i = 0; *(ptr1 + i) != 0; i++)
   {
      for (int j = 0; *(*(ptr1 + i) + j) != 0; j++)
      {
        delete[] *(*(ptr1 + i) + j);// delete quizes array (ptr3)
      }
       delete[] *(ptr1 + i);// delete students array (ptr2)
   }
    delete[] ptr1;// delete classes array (ptr1)
}





