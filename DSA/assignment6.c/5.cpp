// Crete a class complex which stores real and imaginary part of a complex number.Include all types of constructors.Crete objects using different constructors and display them.

#include <iostream>
using namespace std;
class complex
{
    int real, imag;
public:
    void set()
    {
        cout << "Enter real and imaginary part: "; 
        cin >> real >> imag;
    }
    friend complex sum(complex, complex);
    void display();
};
void complex::display()
{
    cout << "The sum of complex num is: " << real << "+" << imag<<"i";
}
complex sum(complex a, complex b)
{
    complex t;
    t.real = a.real + b.real;
    t.imag = a.imag + b.imag;
    return t;
}
int main()
{
    complex a, b, c;
    a.set();
    b.set();
    c = sum(a, b);
    c.display();
    return (0);
}