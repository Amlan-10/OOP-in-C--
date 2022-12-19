// WAP to count the number of objects in a class.
#include<iostream>
using namespace std;
 class counter
 {
    private:
    static int count;

    public:
    counter()
    {
        count++;
    }
    void display()
    {
        cout<<"The number of objects created are: "<<count<<endl;
    }

 };
 int counter::count=0;
 int main()
 {
    counter c1;
    counter c2;
    counter c3;
    c3.display();
 }