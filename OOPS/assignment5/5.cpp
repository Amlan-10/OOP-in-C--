// 5. Create a class complex which stores real an imaginary part of a complex number.
//  Include all types of constructor.
//    Create objects using different constructors and display them. 

#include <iostream>
using namespace std;

class complex
{
    int real;
    int img;
public:
    complex(){
        real = 0;
        img = 0;
    }
    complex(int r, int i){
        real = r;
        img = i;
    }
   
    void output(){
        cout << "Complex number is: " << real << " + " << img << "i" << endl;
    }
};


int main(){
    complex ob1;
    complex ob2(5, 20);
    ob1.output();
    ob2.output();
    return 0;
}