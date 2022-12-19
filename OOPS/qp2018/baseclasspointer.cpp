#include <iostream>
using namespace std;

class base
{
public:
    void show()
    {
        cout << "base\n";
    }
};
class derived : public base
{
public:
    void show()
    {
        cout << "derived\n";
    }
};

 main()
{
    base b1;
    b1.show();
    derived d1;
    d1.show();
    base *pb = &b1;
    pb->show();
    pb=&d1;
    pb->show();
}
// All the function calls here are statically bound