// 1. WAP to overload following operator for class distance, which stores the distance
// in feet and inches.
//     a) Binary + to
//         -add two objects(D3 = D1+ D2)
//         - Add an object to an integer, where the integer should be added to the values(D2 = 4+D1)
//     b) Unary-


#include<iostream>
using namespace std;
 
class distance2{    
    protected:
    float feet,inches;
    public:
    distance2(){

    }
    distance2(float f,float i){
        feet=f;
        inches=i;
    }
    void display()
    {
        cout<<feet<<"Feet "<<inches<<" Inches";
    }
    distance2 operator + (distance2);
};
    distance2 distance2 :: operator + (distance2 ob)
    {
        distance2 temp;
        temp.feet=(feet+ob.feet);
        temp.inches=(inches+ob.inches);
        return temp;
    }

int main(){
    distance2 D1(4.2,12.7),D2(2.1,5.2),D3;
    D3=D1+D2;
    D3.display();
    return 0;
}