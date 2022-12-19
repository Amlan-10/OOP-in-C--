// WAP to demonstrate the order of call of constructors and destructors for a class.
#include<iostream>
using namespace std;
class A{
int x;
A(int p){
    x=p;
}
~A(){
    
}
}