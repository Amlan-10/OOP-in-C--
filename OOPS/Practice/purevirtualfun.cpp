#include<iostream>
using namespace std;

class Base{
    int x;
    public:
    virtual void fun()=0;
    int getX()
    {
        return x;
    }

};
class derived:public Base
{
    public:
    void fun()
    {
        cout<<"Fun() called!";
    }
};

int main(){
    // derived d;
    // d.fun();
    Base *d = new derived();
    d->fun();
    return 0;
}