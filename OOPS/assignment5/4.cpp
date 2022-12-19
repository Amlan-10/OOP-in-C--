// 4. WAP to demonstrate the order of call of constructors and destructor for a class.
#include <iostream>
using namespace std;
class A{
    int a;
public:
    A(){
        cout << "A's default constructor called" << endl;
    }
    A(int x){
        a = x;
        cout << "A's parameterized constructor called" << endl;
    }
    ~A(){
        cout << "A's destructor called" << endl;
    }
};        
class B{
    int b;
public:
    B(){
        cout << "B's default constructor called" << endl;
    }
    B(int x){
        b = x;
        cout << "B's parameterized constructor called" << endl;
    }
    ~B(){
        cout << "B's destructor called" << endl;
    }
};

int main(){
    A ob1;
    B ob2;
    A ob3(5);
    B ob4(10);
    
    return 0;
}