// 1.Create a class shape. Derive three classes from it; Circle, Square and Triangle. Find area of each shape and display it, using virtual function.

#include<iostream>
using namespace std;

class shape{
public:
virtual void show()
{
}

};

class Circle:public shape{
    public:
float radius;
void setdata()
{
    cout<<"Enter Radius : ";
    cin>>radius;
}
void show(){
    cout<<"Area of Circle = "<<(3.14*radius*radius);
}
};

class Square:public shape{
    public:
    float side;
    void setdata()
{
    cout<<"Enter side of square : ";
    cin>>side;
}
    void show(){
        cout<<"Area of Square = "<<(side*side);
    }
};

class Triangle:public shape{
    public:
float base,height;
void setdata()
{
    cout<<"Enter Base and height : ";
    cin>>base>>height;
}
void show()
{
    cout<<"Area of Triangle = "<<(0.5*base*height);
}
};

main()
{
    shape *ptr;
    Circle ob1;
    ob1.setdata();
    ptr=&ob1;
    ptr->show();
}