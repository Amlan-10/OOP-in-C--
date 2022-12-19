#include<iostream>
using namespace std;
class test
{
    int x;
    public:
    test(int x=0)
    {
        this->x=x;
    }
void change(test *t)
{
    t=0;
    this = t;
}
void print()
{
    cout<<"x= "<<x<<endl;
}
};
int main()
{
    test obj(5);
    test *ptr=new test(10);
    obj.change(ptr);
    obj.print();
    return 0;
}