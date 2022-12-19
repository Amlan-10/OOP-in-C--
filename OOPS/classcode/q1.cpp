#include <iostream>
using namespace std;
class B;
class A
{
    int x;

public:
    A(int i)
    {
        x = i;
        cout << "X = " << x;
    }
};
class B:public A
{
    int y;
    public:
    B(int p,int q):A(q)
    {y=p;
    cout<<"Y = "<<y;
    }
};
int main(){
    B ob(2,3);
    return 0;
}