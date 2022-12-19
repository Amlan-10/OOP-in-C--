#include<iostream>
using namespace std;

class Base
{
    public:
    virtual void show()
    {
        cout<<"In Base \n";
    }
};

class derived:public Base{
    public:
    void show()
    {
        cout<<"In derived \n";
    }
};

int main()
{
    Base *bp=new derived;
    bp->show();
    Base &br=*bp;
    br.show();
    cout<<sizeof(bp);
    return 0;
}