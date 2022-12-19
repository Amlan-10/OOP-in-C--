#include <iostream>

#include <exception>

using namespace std;

int main()

{

try

{

throw 10;

}

catch (...)

{

cout << "default exception\n";

}
catch (int param)

{

cout << "int exception\n";

}


return 0;

}