//WAP to create a class with an integer data member and include function for its input and output in class.Count the number of times each function is called and display it.

#include <iostream>
using namespace std;
class num{
    int a;
public:
    void input(){
        static int c;
        cout<<"Enter a number: ";
        cin>>a;
        cout<<"Input function called "<<++c<<" times."<<endl;
    }
    void output(){
        static int d;
        cout<<"The number is "<<a<<endl;
        cout<<"Output function called "<<++d<<" times."<<endl;
    }
};
int main(){
    num ob1,ob2;
    ob1.input();
    ob2.input();
    ob1.output();
    ob2.output();
    return 0;
}