           // MULTIPLE INHERITANCE
#include <iostream>
using namespace std;
class A
{
public:

    void input()
    {
        cout << "Hi,this is Sankha" << endl;
    }
};
class B
{
    public:
    void second()
    {
     cout<<"I am 19"<<endl;

    }
};
class C:public A,public B
{
    public:
    void output()
    {
        cout<<"*I am fit and fine*"<<endl;
    }
};

      //HIERARCHICAL INHERITANCE
      



class electronicDevice

{

public:

    

    electronicDevice()

    {

        cout << "I am a digital system \n\n";

    }

};



class Computer: public electronicDevice

{}; 



class Linux_based : public electronicDevice

{}; 



    //  HYBRID INHERITANCE
    class Device

{

public:



    Device()

    {

        cout << "I am an electronic device.\n\n";

    }

};



class laptop

{

public:


    laptop()

    {

        cout << "I am a computer.\n\n";

    }

};


class Linuxbased : public Device, public laptop

{};


class Debian: public Linuxbased

{}; 





int main()

{
    C obj;
    obj.input();
    obj.second();
    obj.output();
  

    Computer obj1;    
    
    Debian ob;  

    Linux_based obj2; 

    return 0;






}



