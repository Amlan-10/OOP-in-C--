#include<iostream>
using namespace std;

class Base{
    public:
    void getdata()
    {
        cout<<"IT IS \n";
    }
};

class Derived:public Base
{
    public:
    void getdata()
    {
        Base::getdata();
        cout<<"Rest it \n";
    }
};

int main()
{
    Derived ob1;
    ob1.getdata();
}