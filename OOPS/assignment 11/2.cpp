// 2. WAP to display data of two different types using function template with
// multiple arguments.

#include <iostream>
using namespace std;
template <class T, class U>
void display(T a, U b){
    cout << "The first argument is: " << a << endl;
    cout << "The second argument is: " << b << endl;
}

int main(){
    display(1, 2.5);
    display(1.5, 2);
    return 0;
}