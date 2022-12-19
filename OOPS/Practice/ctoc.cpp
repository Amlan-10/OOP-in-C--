#include<iostream>
using namespace std;
// class B;
class B
{
int b;
public:
B(){
    b=60;
}
int getB()
{
    return b;
}
};
class A
{
    int a;
    public:
    A()
    {a=0;}
    void operator=(B obj)
    {
        a=obj.getB();
    }
    void show()
    {
        cout<<a<<"hours";

    }
};
 main()
{
    A ob1;
    B ob2;
    ob1=ob2;
    ob1.show();
    // return 0;
}