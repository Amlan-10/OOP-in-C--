// 4. WAP to display data of two different types using class template with
// multiple arguments.

#include <iostream>
using namespace std;
template <class A, class B>
class data{
public:
    data(A x, B y){
        cout<<x<<endl<<y<<endl;
    }
};
int main(){
    data<int,float> obj1(2,3.5);
    data<float,int> obj2(4.7,69);
    return 0;
}