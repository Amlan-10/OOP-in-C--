#include<iostream>
using namespace std;

class Rectangle
{
    int length,breadth,area;
    public:
    Rectangle(int l,int b)
    {
        length=l;
        breadth=b;
        area=length*breadth;
    }
    void display()
    {
     cout<<"Area of the rectangle is: \n"<<area;   
    }
};
class triangle
{
    int base,height,area;
    public:
    triangle(int b,int h)
    {
        base=b;
        height=h;
        area=0.5*base*height;
    }
    void display()
    {
        cout<<"\nArea of the triangle is: \n"<<area;
    }
    operator Rectangle()
    {
        Rectangle temp(base,height);
    }
};


int main()
{
    triangle t(10,20);
    Rectangle r=t;
    t.display();
    r.display();
    return 0;
}