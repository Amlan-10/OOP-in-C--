#include <iostream>
using namespace std;

class Dist
{
    int feet;
    int inches;

public:
    void input();
    Dist sum(Dist a);
    void display();
};

void Dist::input()
{
    cout << "Enter distance in Feet and Inches : ";
    cin >> feet >> inches;
}

Dist Dist::sum(Dist a)
{
    Dist b;
    b.feet = a.feet + feet + (a.inches + inches) / 12;
    b.inches = (a.inches + inches) % 12;
    return b;
}

void Dist::display()
{
    cout << "Distance = " << feet << " feet " << inches << " inches" << endl;
}

int main()
{
    Dist a, b, c;
    a.input();
    b.input();
    c = a.sum(b);
    c.display();

    return 0;
}