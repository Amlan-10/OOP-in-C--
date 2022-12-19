// 4. WAP to add two objects of time class. Overload the operator "=" to assign two objects.
// Overload the assignment operator.

#include<iostream>
using namespace std;

class time{

int  hours,minutes;
public:
time(){

}
time (int h,int m)
{
    hours=h;
    minutes=m;
}
void display(){
    cout<<hours<<" Hours "<<minutes<<" Minutes";
}
void operator=(time ob)
{
    hours=ob.hours;
    minutes=ob.minutes;

}
};

int main()
{
    time ob1(3,2);
    time ob2; 
    ob2=ob1;
    ob2.display();
    return 0;

}