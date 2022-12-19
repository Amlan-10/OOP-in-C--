// 2.Create a class which stores employee name id and salary Derive two classes from Employee' class: Regular and Part-Time
//  The Regular class stores DA, HRA and basic salary. The Part-Time' 
// class stores the number of hours and pay per hour Calculate the salary of a regular 
// employee and a part-time employee, using virtual Function.

#include <iostream>
using namespace std;
class employee{
protected:
        char name[20];
        int id;
        float sal;
public:
        virtual void salary(){
        };
};
class regular:public employee{
    public:
        float da,hra,basic;
        void salary(){
            cout<<"Enter name, id, da, hra, basic: ";
            cin>>name>>id>>da>>hra>>basic;
            sal=da+hra+basic;
            cout<<"Salary of "<<name<<" is: "<<sal<<endl;
        }
};
class parttime:public employee{
    public:
        float hours,pay;
        void salary(){
            cout<<"Enter name, id, hours, pay: ";
            cin>>name>>id>>hours>>pay;
            sal=hours*pay;
            cout<<"Salary of "<<name<<" is: "<<sal<<endl;
        }
};

int main(){
    employee *obj;
    regular r;
    parttime p;
    obj=&r;
    obj->salary();
    obj=&p;
    obj->salary();
    return 0;
}