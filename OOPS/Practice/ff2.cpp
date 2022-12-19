#include<iostream>
using namespace std;

class B;
class A
{
    int a;
    public:
    void input()
    {
        cin>>a;
    }
    void output()
    {
        cout<<a;
    }
    friend void swap(A &,B &);
};
class B
{
    int b;
    public:
    void input()
    {
        cin>>b;
    }
    void output()
    {
        cout<<b;
    }
    friend void swap(A&,B&);
};

void swap(A &p,B&q)
{
    int temp=p.a;
    p.a=q.b;
    q.b=temp;
}
int main()
{
    A obj1;B obj2;
    obj1.input();
    obj2.input();
    swap(obj1,obj2);
    obj1.output();
    obj2.output();
    return 0;
}