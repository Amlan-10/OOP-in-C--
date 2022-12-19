#include <iostream>

#include <exception>

using namespace std;

class Divide_By_Zero_Exception : public exception

{

public:

const char * what() const throw()

{

return "Divide By Zero Exception\n";

}

};

int main()

{

try

{

int a, b;

cout << "Enter two numbers : ";

//continuation of program

cin >> a >> b;

// compute a / b

if (b == 0)

{

Divide_By_Zero_Exception d;

throw d;

}

else

{

cout << "a / b = " << a/b << endl;

}

}

catch(exception& e)

{

cout << e.what(); //returns cause of exception.

}

}

// what() is a public method provided by exception class and has been overridden