// Change th evalue of A using object slicing

#include<iostream>
using namespace std;

class base
{
    protected :
    int a;
    public:
    
     base(int x)
    {
        a=x;
    }

    virtual void show()
    {
        cout<<"a="<<a<<endl;
    }
};


class derived:public base
{
    private :
    int b;
    public:
   
      derived(int x,int y):base(x)
    {
        b=y; 
    }
    virtual void show()
    {
        cout<<"a="<<a<<"b="<<b<<endl;
    }
}; 

int main()
{
    base b(9);
    derived d(23,24);
    b.show();
    d.show();
    b=d;
    b.show();
    return 0;
}

