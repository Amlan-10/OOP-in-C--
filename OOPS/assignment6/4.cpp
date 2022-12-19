// 4. Extend the program 2 to include a class sports, which stores the marks in sports activity.
    // Derive the result class from the classes test and sports. Calculate total marks and percent.

#include <iostream>
using namespace std;
class sports;
class test;
class student{
protected:
    char name[20];
    int roll;
    int age;
public:
};
class sports{
protected:
    int sportmarks;
public:
    void sportin(){
        cout<<"Enter marks in sports"<<endl;
        cin>>sportmarks;
    }

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
class result :public test,public sports{
protected:
    int total;
    float percentage;
public:
    void calculate(){
        total = 0;
        for(int i=0;i<5;i++){
            total += marks[i];
        }
        total += sportmarks;
        percentage = total/6;
    }
    void tot(){
        
        cout<<"Total: "<<total<<endl;
        cout<<"Percentage: "<<percentage<<endl;
    }
};    


int main(){
    test obj;
    sports obj2;
    result obj3;

    obj.input();    
    obj2.sportin();
    obj.output();
    obj3.calculate();
    obj3.tot();

    return 0;
}