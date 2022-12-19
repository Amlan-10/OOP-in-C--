// 4.WAP to demonstrate use of pure virtual function and abstract base class.

#include <iostream>
using namespace std;
class A{
    public:
        virtual void f()=0;
};
class B:public A{
    public:
        void f(){
            cout<<"Pure virtual function demonstrated."<<endl;
        }
};

int main(){
    A *a;
    B b;
    a=&b;
    a->f();

    
    return 0;
}