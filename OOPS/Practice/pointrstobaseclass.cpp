#include<iostream>
using namespace std;

class Polygon
{
    protected:
    int width;
    int height;
    public:
    void set_values(int a,int b)
    {
        width=a;
        height=b;
    }
};

class Rectangle:public Polygon
{
    public:
    int area()
    {
        return (width*height);
    }
};

class Triangle:public Polygon
{
    public:
    int area()
    {
        return width*height/2;
    }
};

int main()
{
    Rectangle rect;
    Triangle tri;
    Polygon *ptr1=&rect;
    Polygon *ptr2=&tri;
    ptr1->set_values(5,4);
    ptr2->set_values(6,4);
    cout<<"The area of the rectangle is: "<<rect.area()<<endl;
    cout<<"The area of the triangle is: "<<tri.area();
    return 0;

}