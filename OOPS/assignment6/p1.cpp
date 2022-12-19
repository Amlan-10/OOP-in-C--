// WAP to demonstrate all kinds of inheritance

// SINGLE INHERITANCE//
#include <iostream>
using namespace std;
class A
{
public:
    int a, b;
    void input()
    {
        cout << "Enter two numbers:" << endl;
        cin >> a >> b;
    }
};
class B : public A
{
    int x;

public:
    void output()
    {
        x = a + b;
        cout << "The entered numbers are :" << a << " and " << b << endl;
        cout << "The Sum is :" << x << endl;
    }
};

// MULTILEVEL INHERITANCE //
class C
{
public:
    int p, q;
    void input()
    {
        cout << "Enter two numbers:";
        cin >> p >> q;
    }
};
class D : public C
{
public:
    int s;
    void output()
    {
        s = p * q;
    }
};

class E : public D
{

public:
    void output1()
    {
        cout << "The entered numbers are " << p << " and " << q << endl;
        cout << "The product is " << s << endl;
    }
};
main()
{
    B ob;
    ob.input();
    ob.output();
    E ob1;
    ob1.input();
    ob1.output();
    ob1.output1();
}