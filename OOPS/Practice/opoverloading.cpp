#include<iostream>
using namespace std;

class A
{
    
    int x,y;
    public:friend void operator++(A &obj);
    A(int p,int q)
    {
        x=p;
        y=q;
    }
    void display()
    {
        cout<<x<<y;
    }
    

};
void operator++(A &obj)
{
    obj.x = obj.x++;
    obj.y=obj.y++;
}
int main()
{
    A ob(5,4);
    ++ob;
    ob.display();
    return 0;
}