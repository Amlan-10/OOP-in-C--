#include<iostream>
using namespace std;

class abc
{
    public:
    static int x;
    int i;
    abc()
    {i=++x;}
};
int abc::x;
int main()
{
    abc m,n,p;
    cout<<m.x <<"\n"<<m.i;
    return 0;

}