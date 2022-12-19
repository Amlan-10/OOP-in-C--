// 2. Create a class which stores employee name, id and salary. Derive two classes
// from employee class regular and parttime. The regular class stores DA, HR and Basic pay.
// The part time class stores the number of hours and pay per hour. Calculate the salary of
// a regular employee and a parttime employee.

#include <iostream>
using namespace std;

class employee
{
public:
    char name[30];
    char id[10];
    float salary;
};

class regular : public employee
{
protected:
    float DA, HR, Basicpay;

public:
regular(float d,float h,float bp) 
{
    DA=d;
    HR=h;
    Basicpay=bp;
}
void display(){
    cout<<"\nThe salary of the regular employee is: "<<(DA+HR+Basicpay);
}
};

class parttime : public employee
{
protected:
    int number_of_hours;
    float pay_per_hour;
   public:
    parttime(int n,float pph)
    {
        number_of_hours=n;
        pay_per_hour=pph;
    }
    void display()
    {
        cout<<"\nThe salary of a Part-time employee: "<<(number_of_hours*pay_per_hour);
    }
};

int main(){
    regular r(1000,2000,8000);
    r.display();

    parttime p(15,1000);
    p.display();

    return 0;
}