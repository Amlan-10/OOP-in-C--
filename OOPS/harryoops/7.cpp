#include <iostream>
using namespace std;
class complex
{
    int a, b;

public:
    void input(int q,int r)
    {
     a=q;
     b=r;  
    }
    friend complex complexsum(complex x,complex y);
    
    void display()
    {
        cout << "Your complex numbers is :" << a << " + i" << b << endl;
    }
    void sumdisplay()
    {
        cout << "Sum of complex numbers is :" << a << " + i" << b << endl;
    }
};
complex complexsum(complex x, complex y)
    {
        complex z;
        z.input((x.a+y.a),(x.b+y.b));
        return z;
    }
int main()
{
    complex c1, c2, c3;
    c1.input(2,3);
    c1.display();

    c2.input(4,5);
    c2.display();

    c3 = complexsum(c1, c2);
    c3.sumdisplay();
    return 0;
}