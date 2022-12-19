//4. WAP to create a class distance having data members km, meter, cm.
//User enters the distance in centimeters. Convert the distance into km meter cm. [Basic to Class]

#include <iostream> 

using namespace std;
class dist
{
public:
    int km = 0, m = 0, cm = 0;
    dist() {}
    dist(int icm)
    {
        this->km = icm / 100000;
        icm = icm - (km * 100000);
        this->m = icm / 1000;
        icm -= m * 1000;
        this->cm = icm;
        cout << km << " km :" << m << " m :" << cm<<" cm ";
    }
};
int main()
{
    dist ob1;
    ob1 = 873431;
    return 0;
}
