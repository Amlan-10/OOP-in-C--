#include<iostream>
using namespace std;

class base{};
class derived:public base{};

int main()
{
try
{
    throw derived();
}
catch(derived)
{
    cout<<"Caught it.\n";
}
catch(base)
{ 
    cout<<"Caught\n";
}
return 0;
}