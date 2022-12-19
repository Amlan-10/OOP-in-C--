#include <iostream>
#include <cmath>

using namespace std;

class Circle
{
private:
    float x, y, z;
    float rad;

public:
    Circle(float a, float b, float c, float len)
    {
        x = a;
        y = b;
        z = c;
        rad = len;
    }

    Circle(Circle &cir)
    {
        x = cir.x;
        y = cir.y;
        z = cir.z;
        rad = cir.rad;
    }

    void display()
    {
        cout << "The coordinates of centre and radius of circle are : " << x << " " << y << " "
             << " " << z << " " << rad << endl;
    }

    void IsIntersecting(Circle c1, Circle c2)
    {
        if ((c1.x == c2.x) && (c1.y == c2.y) && (c1.z == c2.z) && (c1.rad == c2.rad))
        {
            cout << "The two circles are intersecting." << endl;
        }
        else
        { 
            cout << "The two circles are not intersecting." << endl;
        }
    }

    friend void distance(Circle c1, Circle c2);
};

void distance(Circle c1, Circle c2)
{
    float dist;
    dist = sqrt(pow(c1.x - c2.x, 2) + pow(c1.y - c2.y, 2) + pow(c1.z - c2.z, 2));

    cout << "The distance between the centre of the two circle is : " << dist << endl;
}

int main(int argc, char const *argv[])
{
    Circle C0(2, 3, 4, 10);
    C0.display();
    Circle C1(C0);
    C1.display();

    Circle Cir1(3.5, 4.5, 2, 15);
    Cir1.display();
    Circle Cir2(2, 4, 7.5, 10);
    Cir2.display();

    distance(Cir1, Cir2);
    Cir1.IsIntersecting(Cir1, Cir2);

    Circle c1(10, 5, 7, 10), c2(10, 5, 7, 10);
    c1.IsIntersecting(c1, c2);

    return 0;
}