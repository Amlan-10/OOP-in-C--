
// 5. Create a class shape. Derive three classes from it, Circle , triangle and rectangle.
//     Include the relevernt data members and functions in all the classes.  Find the
//     area of each shape and display it.     

#include <iostream>
using namespace std;
class circle;
class triangle;
class rectangle;
class shape{
protected:
    float area;
public:

};
class circle: public shape{
protected:
    float radius;
public:
    void input(){
        cout<<"Enter radius"<<endl;
        cin>>radius;
    }
    void calculate(){
        area = 3.14*radius*radius;
    }
    void output(){
        cout<<"Area of circle: "<<area<<endl;
    }
};
class triangle: public shape{
protected:
    float base,height;
public:
    void input(){
        cout<<"Enter base and height"<<endl;
        cin>>base>>height;
    }
    void calculate(){
        area = 0.5*base*height;
    }
    void output(){
        cout<<"Area of triangle: "<<area<<endl;
    }
};
class rectangle: public shape{
protected:
    float length,breadth;
public:
    void input(){
        cout<<"Enter length and breadth"<<endl;
        cin>>length>>breadth;
    }
    void calculate(){
        area = length*breadth;
    }
    void output(){
        cout<<"Area of rectangle: "<<area<<endl;
    }
};

int main(){
    circle obj;
    triangle obj2;
    rectangle obj3;
    obj.input();
    obj.calculate();
    obj.output();
    obj2.input();
    obj2.calculate();
    obj2.output();
    obj3.input();
    obj3.calculate();
    obj3.output();
    
    return 0;
}