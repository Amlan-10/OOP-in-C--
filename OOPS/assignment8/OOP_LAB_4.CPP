//4.WAP to add two objects of time class. Overload the operator "=" to assign two objects . overload the assignment operator.
#include <iostream>
using namespace std;


class A{

    int x;
    public:
    A(int p){
        x=p;
    }

    void operator ++(){
        ++x;
    }

    void display(){
        cout<<x;
    }


};

main(){
    A ob1(3);
    ++ob1;
    ob1.display();

}
