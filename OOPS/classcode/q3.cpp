#include<iostream>
using namespace std;
class B;
class C;
class A
{
public:
A(){
    cout<<"Constructor A is called "<<endl;
}
~A(){
    cout<<"Destructor A is called "<<endl;
}
};
class B:public A{
    public:
    B(){
        cout<<"Contructor B is called "<<endl;
    }
    ~B(){
        cout<<"Destructor B is called "<<endl;
    }
};
class C:public B{
    public:
    C(){
        cout<<"Contructor C is called "<<endl;
    }
    ~C(){
        cout<<"Destructor  C is called "<<endl;
    }
};
int main(){
    C c;
    return 0;
}