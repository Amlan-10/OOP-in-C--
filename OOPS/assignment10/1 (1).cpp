// 1.Create a class shape. Derive three classes from it; Circle, Square and Triangle.
//  Find area of each shape and display it, using virtual function.

#include <iostream>
using namespace std;
class shape{
    public:
        virtual void area()=0;

};
class circle:public shape{
    public:
        void area(){
            float r;
            cout<<"Enter radius of circle: ";
            cin>>r;
            cout<<"Area of circle is: "<<3.14*r*r<<endl;
        }
};
class square:public shape{
    public:
        void area(){
            float s;
            cout<<"Enter side of square: ";
            cin>>s;
            cout<<"Area of square is: "<<s*s<<endl;
        }
};
class triangle:public shape{
    public:
        void area(){
            float b,h;
            cout<<"Enter base and height of triangle: ";
            cin>>b>>h;
            cout<<"Area of triangle is: "<<0.5*b*h<<endl;
        }
};

int main(){
    shape *s;
    circle c;
    square q;
    triangle t;
    s=&c;
    s->area();
    s=&q;
    s->area();  
    s=&t;
    s->area();
    return 0;
}