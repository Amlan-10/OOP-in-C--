//degree to radian, conversion routine in source class
#include <iostream>
using namespace std;
const float PI=3.141592654;
class Radian
{
    float rad;
    public:
    Radian()
    {
        rad=0.0;
    }
    Radian(float InitRad)
    {
        rad=InitRad;
    }
    float GetRadian()
    {
        return(rad);
    }
    void output()
    {
        cout<<"Radian = "<<GetRadian();
    }
};
class Degree
{
    float degree;
    public:
    Degree()
    {
        degree=0.0;
    }
    operator Radian()
    {
        return (Radian(degree*PI/180.0));
    }
    void Input()
    {
        cout<<"Enter Degree: ";
        cin>>degree;
    }
};
int main()
{
    Degree deg1;
    Radian rad1;
    deg1.Input();
    rad1=deg1;
    rad1.output();
}