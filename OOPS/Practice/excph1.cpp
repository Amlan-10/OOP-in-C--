#include <iostream>

using namespace std;

// only throw ints, chars, and doubles

void f(int val) throw(int, char, double)

{

if(val==0)
throw val;

if(val==1)
throw 'a';

if(val==2) 
throw 123.23;
}
int main(){

try{
f(1); // also, try passing 1 and 2 to f()
}
catch(int i) {
cout << "Caught an integer\n";
}
catch(char c) {
cout << "Caught char\n"<<c;
}
catch(double d) {
cout << "Caught double\n";
}
return 0;
}