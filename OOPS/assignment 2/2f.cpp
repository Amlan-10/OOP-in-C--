#include <iostream>
using namespace std;
class Dist{
    int feet,inches;
    public:
    void input(){
        cout<<"Enter feet: ";
        cin>>feet;
        cout<<"Enter inches: ";
        cin>>inches;
    }
    void output(){
        cout<<"Distance in feet = "<<feet<<" inches= "<<inches<<endl;
    }
    void add(Dist d1, Dist d2){
        feet = d1.feet+d2.feet;
        inches=d1.inches+d2.inches;
    if(inches>=12){
        feet++;
        inches-=12;
    }
    }

};
int main(){
Dist d1, d2, d3;
d1.input();
d2.input();
d3.add(d1,d2);
d3.output();
return 0;
}