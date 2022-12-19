// 1. WAP to demonstrate all types of inheritance.
#include <iostream>
using namespace std;
class D;
class C;
class B;
class A
{
protected:
    int x;
};
class B : public virtual A
{
public:
    int y;
}; 
class C : public virtual A, public B
{
public:
    int z;
};
class D : public C
{
protected:
    int d;

public:
    void input()
    {
        cout << "Enter the value of x,y,z,d" << endl;
        cin >> x >> y >> z >> d;
    }
    void output()
    {
        cout << "x: " << x << endl;
        cout << "y: " << y << endl;
        cout << "z: " << z << endl;
        cout << "d: " << d << endl;
    }
};

int main()
{
    D obj;
    obj.input();
    obj.output();

    return 0;
}