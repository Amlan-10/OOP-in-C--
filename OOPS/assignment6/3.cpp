 // 3. Extend the program 2 to derive a class result from class test which includes member
//     function to calculate total marks and percentage of a student.  Input the data for a student
//     and display them.

#include <iostream>
using namespace std;
class result;
class test;
class student{
protected:
    char name[20];
    int roll;
    int age;

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

class result :public test{
protected:
    int total;
    float percentage;
public:
    void calculate(){
        total = 0;
        for(int i=0;i<5;i++){
            total += marks[i];
        }
        percentage = total/5;
    }
    void tot(){
        
        cout<<"Total: "<<total<<endl;
        cout<<"Percentage: "<<percentage<<endl;
    }
};    
int main(){
    test obj;
    result obj2;
    obj.input(); 
    obj2.calculate();
    obj.output();
    obj2.tot();
    
    
    return 0;
}