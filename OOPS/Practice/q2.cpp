// Create a class which stores a complex number.Add two objects and display the resultant object .Overload the ++ operator(post n pre)
// operator for the class
#include<iostream>
using namespace std;
class Complex{
    int real,img;
    public:
    Complex(){}
    Complex(int p,int q)
   {
    real=p;
    img=q;
   }
friend Complex operator +(Complex &ob1,Complex &ob2);
void operator++(){
    ++real;
    ++img;

}
void display(){
    cout<<"Real :"<<real<<endl;
    cout<<"Imaginary:"<<img<<endl;

}

};
Complex operator +(Complex &ob1,Complex &ob2){

    Complex resultant;

    resultant.real = ob1.real+ob2.real;
    resultant.img = ob1.img+ob2.img;
    return resultant;

}

main(){
    Complex a(2,4),b(4,3),c;

    // Complex c;
    c = a+b;
    c.display();

    ++c;
    c.display();
}