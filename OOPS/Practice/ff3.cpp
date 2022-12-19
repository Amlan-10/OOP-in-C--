#include<iostream>
using namespace std;
int x;
class B;
class A
{
    int a;
    public:
    void input()
    {
        cin>>a;
    }
   
    friend void add(A &,B &);
    
};
class B
{
    int b;
    public:
    void input()
    {
        cin>>b;
    }
    
    friend void add(A&,B&);
   
};

void add(A &p,B&q)
{
     x=p.a+q.b;;
   
}
class C:public A,public B{
    public:
    void output()
    {
        cout<<x;
    }
};

int main()
{
    A obj1;
    B obj2;
    C obj3;
    obj1.input();
    obj2.input();
    add(obj1,obj2);
    obj3.output();
    return 0;
}