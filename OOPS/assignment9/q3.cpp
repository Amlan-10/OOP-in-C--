// 3. WAP to create a class Time. Convert time (hh mm ss) into seconds (integer value). [Class to Basic]

#include <iostream>
using namespace std;

class Time2
{
    float hours;
    int minutes;
    public:
    Time2()
    {
        hours = 0.0;
        minutes = 0;
        // seconds=0;
    }
    Time2(float h)
    {
        hours = h;
        minutes = 25;
        // seconds=s;
    }
    operator float()
    {
        return hours;
    }
    operator int()
    {
        return minutes;
    }
};

int main()
{
    Time2 A;
    A=6.2f;
    float t;
    t=A;
    t=(t*60*60);
    cout<<t<<" seconds"<<endl;
    
    int k;
    k=A;
    k=(k*60);
    cout<<k<<" seconds"<<endl;
    cout<<"Total time in seconds is: "<<(t+k)<<endl;
        return 0;
}