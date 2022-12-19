//WAP to find out life period of a given product using class & object.
// The class should have two data members. One is manufacturing year and second
// expiry year. Calculation should be done using a member function where object
// is taken as argument. 

//AMLAN TRIBEDI (2105102) 
#include <iostream>
using namespace std;
class life_period{
public:
    int manufacture;
    int expiry;
    int year;
    void life(life_period &obj1, life_period &obj2)
    {
        life_period obj3;
        obj3.year=obj1.expiry-obj2.manufacture;
        cout<<"The life period is "<<obj3.year<<" years"<<endl;
    }
};
int main(){
    life_period obj1,obj2,obj3,year;
    cout<<"Enter the expiry year: "<<endl;
    cin>>obj1.expiry;
    cout<<"Enter the manufacturing year: "<<endl;
    cin>>obj2.manufacture;
    obj3.life(obj1,obj2);
    return 0;
}