//  Create a class shape. Derive three classes from it, Circle , triangle and rectangle.
//     Include the relevant data members and functions in all the classes.  Find the
//     // area of each shape and display it.

#include <iostream>
using namespace std;
class Shape
{
public:
    float r, l, b, x, y;
    void inputrad()
    {
        cout << "Enter the radius of the circle:" << endl;
        cin >> r;
    }
    void inputlb()
    {
        cout << "Enter length and breadth of the rectangle:" << endl;
        cin >> l >> b;
    }
    void inputxy()
    {
        cout << "Enter the base and height of the triangle:" << endl;
        cin >> x >> y;
    }
};
class Circle : public Shape
{
protected:
    float AC;

public:
    void areac()
    {
        inputrad();
    }
    void displayac()
    {
        AC = 3.14 * r * r;
        cout << "The area of the Circle is :" << AC << endl;
    }
};
class Rectangle : public Shape
{
protected:
    float AR;

public:
    void arear()
    {
        inputlb();
    }
    void displayar()
    {
        AR = l * b;
        cout << "The area of the Rectangle is:" << AR << endl;
    }
};
class Triangle : public Shape
{
protected:
    float AT;

public:
    void areat()
    {
        inputxy();
    }
    void displayat()
    {
        AT = 0.5 * x * y;
        cout << "The area of the Triangle  is:" << AT << endl;
    }
};
main()
{
    Shape ob;
    // ob.inputrad();
    // ob.inputlb();
    // ob.inputxy();
    Circle ob1   ;
    ob1.areac();
    ob1.displayac();
    Rectangle ob2;
    ob2.arear();
    ob2.displayar();
    Triangle ob3;
    ob3.areat();
    ob3.displayat();

}
