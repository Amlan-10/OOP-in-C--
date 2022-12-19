// 1. WAP to overload following operator for class distance, which stores the distance
// in feet and inches.
//     a) Binary + to
//         -add two objects(D3 = D1+ D2)
//         - Add an object to an integer, where the integer should be added to the values(D2 = 4+D1)
//     b) Unary-

#include<iostream>
using namespace std;

class distance1
{
    int feet;
    int inches;
    public:
    distance1()
    {

    }
    distance1(int f,int i)
    {
        feet=f;
        inches=i; 
    }
    void display()
    {
        cout<<feet<<"feet "<<inches<<"inches ";
    }
 distance1 operator+(distance1 obj)
{
    distance1 temp;
    temp.feet=feet+obj.feet;
    temp.inches=inches+obj.inches;
    return temp;
}
    // distance1 operator+(distance1);
};


int main()
{
    distance1 D1(4,3),D2(8,3),D3;
    D3=D1+D2;
    D3.display();
    return 0;

}