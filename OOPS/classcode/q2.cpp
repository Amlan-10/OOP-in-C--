#include <iostream>
using namespace std;
class C;
class B;
class A
{
    int x;

public:
    A(int i):x(i*2)
    {
        // x = i;
        cout << "X = " << x;
    }
};
class B
{
    float y;
    public:
    B(float p):y(p+4)
    {
        // y=p;
    cout<<"Y = "<<y;
    }
};
class C:public A,public B{
    int m,n;
    public:
    C(float a,float b,int c,int d):A(a),B(b)
    {
        m=c;
        n=d;
        cout<<"M = "<<m<<"N = "<<n;
    }
};
 int main(){
    C ob(2,3.5,4,7);
    return 0;
}