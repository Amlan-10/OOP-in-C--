#include <iostream>
using namespace std;//++Operator Overloading
class Check
{
private:
    int i;

public:
    Check() : i(0){} // Return type is Check

    Check operator ++()
    {
        Check temp;
        ++i;
        temp.i = i;
        return temp;
    }                 
    void display()
    {
        cout<<"I = "<<i<<endl;

    }
};

int main()
{
    Check c1,c2;
    c1.display();
    c2.display();
    c1=++c2;
    c1.display();
    c2.display();
    return 0;
}

