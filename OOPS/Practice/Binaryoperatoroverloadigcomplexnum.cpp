#include<iostream>
using namespace std;

class Complex
{
    private:
    int real,img;
    public:
    Complex(int r=0,int i=0)
    {
        real=r;
        img=i;
    }
    Complex operator+(Complex const &obj)
    {
        Complex res;
        res.real=real+obj.real;
        res.img=img+obj.img;
        return res;
    }
    void print()
    {
        cout<<real<<" + i"<<img<<endl;
    }
};

int main()
{
    Complex C1(2,2),C2(1,7);
    Complex C3=C1+C2;
    C3.print();
    return 0;
}