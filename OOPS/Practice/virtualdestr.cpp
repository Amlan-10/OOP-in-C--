#include<iostream>
using namespace std;

class a
{
    public:
    a()
    {
        cout<<"Base Constructor called \n";
    }
    virtual ~a()
    {
        cout<<"Base destructor called \n";
    }
};

class b:public a
{
    public:
    b()
    {
        cout<<"Derived constructor called \n";
    }
    ~b()
    {
        cout<<"Derived destructor called \n";
    }
};

int main()
{
    a *obj=new b;
    delete obj;
    return 0;
}