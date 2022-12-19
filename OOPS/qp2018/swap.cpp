#include<iostream>
using namespace std;
class B;
class A
{
    int x;
    public:
    A(){}
    void input()
    {
        cin>>x;
    }
    void output()
    {
        cout<<x<<endl;
    }
    friend void swap(A&,B&);
};
class B
{
    int a;
    void input()
    {
        cin>>a;
    }
    public:
    
    void output()
    {
        cout<<a<<endl;

    }
    friend void swap(A&,B&);

};
void swap(A &p,B &q)
    {
        int temp;
        temp=p.x;
        p.x=q.a;
        q.a=temp;
    }

int main()
{
    A ob1,ob2;
    ob1.input();
    ob2.input();
    ob1.output();
    ob2.output();
    cout<<"After Swapping: "<<endl;
    swap(ob1,ob2);
    ob1.output();
    ob2.output();
    return 0;
}