#include<iostream>
using namespace std;

class Base
{
    int x;
    public:
    void funBase()
    {
        cout<<"Base Function ";
    }
};

class Derived:public Base{
    int y;
};

int main()
{
    Base *ptr;
    Derived obj;
    ptr=&obj; //Base class pointer

    Base &ref=obj;
    ref=obj;

    return 0;
}