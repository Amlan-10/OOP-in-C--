#include<iostream>
using namespace std;

class A
{
    int a,b;
    public:
    A()
    {}
    A(int p,int q){
        a=p;
        b=q;
    }
    void display()
    {
        cout<<a<<endl<<b;
    }
    A friend operator*(A &obj,int x);
};

A operator*(A &obj,int x)
{
    A temp;
    temp.a=obj.a*x;
    temp.b=obj.b*x;
    return temp;
}

int main()
{
    A ob(2,3);
    A ob2;
    ob2=ob*3;
    ob2.display();
    return 0;
}