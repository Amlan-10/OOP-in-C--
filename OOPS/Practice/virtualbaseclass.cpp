#include<iostream>
using namespace std;
class PoweredDevice
{
public:
PoweredDevice(int power)
{
cout << "PoweredDevice: " << power << '\n';
}
};

class Scanner:virtual public PoweredDevice
{
    public:
    Scanner(int scanner,int power):PoweredDevice(power)
    {
        cout<<"Scanner : "<<scanner;
    }
};

class Printer:virtual public PoweredDevice
{
    public:
    Printer(int printer,int power):PoweredDevice(power)
    {
        cout<<"\nPrinter : "<<printer;
    }
};

class Copier:public Scanner,public Printer
{
    public:
    Copier(int scanner,int printer,int power):Scanner(scanner,power),Printer(printer,power),PoweredDevice(power)
    {
        
    }
    
};

int main()
{
    Copier c1(10,20,30);
    return 0;
}