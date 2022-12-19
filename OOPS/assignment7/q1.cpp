// 1. WAP to create a student class which stores the name, roll and branch of a student.
// Derice three classes name Internal_Exam, Mid_exam and EndSem_Exam from it.
// Internal_Exam exam stores internal marks for 5 different subjects out of 30
// Mid_exam stores mid semester marks for 5 different subjects out of 20.
// EndSem_Exam stores end semester marks for 5 different subjects out of 50.
// Derive a class result form Internal_Exam, Mid_exam, EndSem_Exam to compute
// and display the total marks and percentage of student.

#include <iostream>
using namespace std;

class student 
{
public:
        student() {}
        char name[50];
        int roll;
        char branch[10];
        void input()
        {
                cout << "Enter the name of the student: ";
                cin >> name;
                cout << "Enter the roll number of student: ";
                cin >> roll;
                cout << "Enter the branch :";
                cin >> branch;
        }
};
class Internalexam : public student
{
protected:
        int marks1[5];
public:
        Internalexam() : student() {}
        void marksinput()
        {

                cout << "Enter the marks of 5 subjects out of 30: ";
                for (int i = 0; i < 5; i++)
                {
                        cin >> marks1[i];
                }
        }
        void output1()
        {
                cout << "Name: " << name << endl;
                cout << "Roll: " << roll << endl;
                cout << "Branch: " << branch << endl;
                cout << "Internal Exam Marks: ";
                for (int i = 0; i < 5; i++)
                {
                        cout << marks1[i] << " ";
                }
                cout << endl;
        }
};
class Midexam : public student
{
protected:
        int marks2[5];

public:
        Midexam() : student() {}
        void marks1input()
        {
                cout << "Enter the marks of 5 subjects out of 20: ";
                for (int i = 0; i < 5; i++)
                {
                        cin >> marks2[i];
                }
        }
        void output2()
        {
                cout << " Midsem Marks: ";
                for (int i = 0; i < 5; i++)
                {
                        cout << marks2[i] << " ";
                }
                cout << endl;
        }
};
class Endsemexam : public student
{
protected:
        int marks3[5];

public:
        Endsemexam() : student() {}
        void marks2input()
        {
                cout << "Enter the marks of 5 subjects out of 50: ";
                for (int i = 0; i < 5; i++)
                {
                        cin >> marks3[i];
                }
        }
        void output3()
        {
                cout << "End Sem Marks: ";
                for (int i = 0; i < 5; i++)
                {
                        cout << marks3[i] << " ";
                }
                cout << endl;
        }
};
class result : public Internalexam, public Midexam, public Endsemexam
{
protected:
        int t1[5];
        float percentage[5];

public:
        result() : Internalexam(), Midexam(), Endsemexam()
        {
                void calculate()
                {
                        for (int i = 0; i < 5; i++)
                        {
                                
                                t1[i] = marks1[i] + marks2[i] + marks3[i];
                                cout << "Student " << i + 1 << ": ";
                                cout << "Total out of hundred: " << t1[i] << "\t";
                                cout << endl;
                                cout << "Percentage: " << percentage[i] << "%\t";
                                cout << endl;
                                
                        }
                }
        }
};
int main()
{ 
        result R;
        Internalexam ob1;
        Midexam ob2;
        Endsemexam ob3;
        ob1.input();
        ob1.marksinput();
        ob1.output1();

        ob2.marks1input();
        ob2.output2();

        ob3.marks2input();
        ob3.output3();
        R.calculate();

        return 0;
}