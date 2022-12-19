#include <iostream>
using namespace std;
class DB;
class DM{
    float meter;
    float cm;
public:
    void input(){
        cout<<"Enter meter and centimeter:"<<endl;
        cin>>meter>>cm;
    }
    void output(){
        cout<<"Distance: "<<meter<<"meter and"<<cm<<" cm";
    }
    friend void add(DM&,DB&);
};
class DB{
    float inch;
    float feet;
public:
    void input(){
        cout<<"Enter feet and inches:"<<endl;
        cin>>feet>>inch;
    }
    friend void add(DM& ,DB&);
};
void add(DM &obj1,DB &obj2){
    obj1.cm+=(30/12)*obj2.inch;
    obj1.cm+=30*obj2.feet;
    if (obj1.cm>=100)
    {
        int rem = obj1.cm/100;
        obj1.meter+=rem;
        int r = obj1.cm;
        r=r%100;
        obj1.cm-=r;
    }
    
}
int main(){
    DM obj1;
    DB obj2;
    obj1.input();
    obj2.input();
    add(obj1,obj2);
    obj1.output();
    return 0;
}