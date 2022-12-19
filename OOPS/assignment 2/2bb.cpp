#include <iostream>

using namespace std;

class Name
{
    public:
    int real;
    int imaginary,i;
        
    void complex()
    {
        for(i=0;i<10;i++)
        {
            cout<<"Enter Complex No."<<i+1<<":\n";
            cout<<"Enter Real Part\n";
            cin>>real;
            cout<<"Enter Imaginary Part\n";
            cin>>imaginary;
        
            cout <<"Complex No is: " << real <<" + ("<< imaginary <<"i)"<<endl;
        }
    }
};
int main()
{
    Name obj1;
    obj1.complex();
    return 0;
}