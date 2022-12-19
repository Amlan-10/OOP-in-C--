#include <iostream>
using namespace std;
class complex
{
    int a, b;

public:
    void input()
    {
        cout << "Enter the real part " << endl;
        cin >> a;
        cout << "Enter the imaginary part " << endl;
        cin >> b;
    }
    void complexsum(complex x, complex y)
    {
        a = x.a + y.a;
        b = x.b + y.b;
    }
    void display()
    {
        cout << "Your complex numbers is :" << a << " + i" << b << endl;
    }
    void sumdisplay()
    {
        cout << "Sum of complex numbers is :" << a << " + i" << b << endl;
    }
};
int main()
{
    complex c1, c2, c3;
    c1.input();
    c1.display();

    c2.input();
    c2.display();

    c3.complexsum(c1, c2);
    c3.sumdisplay();
    return 0;
}