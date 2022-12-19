#include<iostream>
using namespace std;
class A
{
    int  p;
    public:
    void input()
    {
        cin>>p;
    }
    friend void output(A);
};
void output(A ob)
{
    cout<<ob.p;
}

int main()
{
    A obj;
    obj.input();
    output(obj);
    return 0;
}