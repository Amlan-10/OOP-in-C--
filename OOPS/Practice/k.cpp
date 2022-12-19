#include<iostream>
using namespace std;

class Base

{

int x;

public:

void funBase()

{

cout << "Base function";

}

};

class Derived : public Base

{

int y;

};

int main()

{

Base* ptr; // Base class pointer

Derived obj;

ptr = &obj;

Derived *derived = (Derived *) ptr;
}