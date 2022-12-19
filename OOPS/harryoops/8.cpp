#include<iostream>
using namespace std;
class DB;
class DM
{
    float m;
    float cm;
    public:
    void input(){
        cout<<"Enter the distance in m and cm :";
        cin>>m>>cm;
    }
    void output(){
        cout<<"The distance is "<<m<<"meter"<<cm<<"centimeter"<<endl;
    }
    friend void add(DM&,DB&);
};
class DB
{
    float feet;
    float inch;
    public:
    void input(){
        cout<<"Enter the distance in feet and inch :";
        cin>>feet>>inch;
    }
    friend void add(DM&,DB&);
};
void add(DM &a,DB &b)
{
    a.m=a.m+((3/10)*b.feet);
    a.cm=a.cm+((2.54)*b.inch);
    if(a.cm>=100){
        int rem=a.cm/100;
        a.m+=rem;
        int n=a.cm;
        n=n%100;
        a.cm=n;
    }
    cout<<"The resultant addition is : "<<a.m<<" meter "<<a.cm<<" cm "<<endl;
}
int main(){
    DM obj1;
    DB obj2;
    obj1.input();
    obj2.input();
    add(obj1,obj2);
    obj1.output();
}