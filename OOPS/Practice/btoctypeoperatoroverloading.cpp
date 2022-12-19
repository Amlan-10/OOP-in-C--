#include<iostream>
using namespace std;

class Time
{
    int hrs;
    int min;
    public:
    void display();
    void operator=(int);

};

void Time::display()
{
    cout<<"Hours: "<<hrs<<endl;
    cout<<"Minutes: "<<min;
}

void Time::operator=(int t)
{
    cout<<"Basic to class Type conversion "<<endl;
    hrs=t/60;
    min=t%60;
}
int main()
{
    Time t1;
    int duration;
    cout<<"Enter The Time in minutes: ";
    cin>>duration;
    // cout<<"1st Method without using operator overloading: ";
    // t1=duration;
    // t1.display();
    cout<<"2nd Method using operator overloadiong: "<<endl;
    t1.operator=(duration);
    t1.display();
    return 0;
}