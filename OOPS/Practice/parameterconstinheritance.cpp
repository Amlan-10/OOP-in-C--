#include<iostream>
using namespace std;
class Parent
{
    public:
    Parent(int i)
    {
        cout<<"Parameterized constructor inside base class \n";
    }
};

class Child:public Parent
{
    public:
    Child(int j):Parent(j)
    {
        cout<<"Parameterized constructor inside sub class \n";
    }
};

int main()
{
    Child ob1(1);
    return 0;
}