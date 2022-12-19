#include<iostream>
using namespace std;

class Point{
    int x,y;
    public:
    Point()
    {

    }
    Point(int px,int py)
    {
        x=px;
        y=py;
    }
    void show()
    {
        cout<<x<<" ";
        cout<<y<<"\n";
    }
    friend Point operator+(Point op1,Point op2);
        // Point operator=(Point op2);
};
Point operator+(Point op1,Point op2)
{
    Point temp;
    temp.x=op1.x+op2.x;
    temp.y=op1.y+op2.y;
    return temp;
}
main()
{
    Point ob1(5,8),ob2(8,4),ob3;
    // ob3=ob1+ob2;
    ob3=operator+(ob1,ob2);
    ob3.show();
    
}