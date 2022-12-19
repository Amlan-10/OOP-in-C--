// 2. Create a class student which stores name, roll and age of a student.
//    Derive a class test from student class, which stores marks in 5 subjects.
//    Input and display the details of a student.

#include <iostream>
using namespace std;

class test;
class student{
protected:
    char name[20];
    int roll;
    int age;
public:
};
class test: public student{
protected:
    int marks[5];
public:
    void input(){
        cout<<"Enter name, roll, age and marks in 5 subjects"<<endl;
        cin>>name>>roll>>age;
        for(int i=0;i<5;i++){
            cin>>marks[i];
        }
    }
    void output(){
        cout<<"Name: "<<name<<endl;
        cout<<"Roll: "<<roll<<endl;
        cout<<"Age: "<<age<<endl;
        cout<<"Marks: ";
        for(int i=0;i<5;i++){
            cout<<marks[i]<<" ";
        }
        cout<<endl;
    }
};


int main(){
    test obj;
    obj.input();    
    obj.output();
    return 0;
}