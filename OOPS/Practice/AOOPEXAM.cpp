#include<iostream>
using namespace std;

class A
{
    protected:
    int arr[10];
    public:
    A(){}
    A(int a[10])
    {
        arr[10]=a[10];
    }
    void input()
    {
        for(int i=0;i<10;i++)
         {
            cin>>arr[i];
         }
    }
    void display()
    {
         for(int i=0;i<10;i++)
         {
            cout<<arr[i]<<" ";
         }
        cout<<endl;
    }
    A friend operator+(A &obj,int x);
     friend void operator-(A &z);
     friend void operator++(A &ob);
};
    void operator++(A &ob)
    {
         for(int i=0;i<10;i++)
        ob.arr[i]++;
    }
    void operator -(A &z)
    {
        for(int i=0;i<10;i++)

        z.arr[i]=-z.arr[i];
    }
A operator+(A &obj,int x)
{
    A temp;
     for(int i=0;i<10;i++)
     {
        temp.arr[i]=obj.arr[i]+x;
     }
     return temp;
}

int main()
{
    A ob,obj,ob1,ob2;
    ob.input();
    
     
            obj=ob;
            ++obj;
            obj.display();
            ob1=ob;
            
        ob.display();
            -ob;
        ob.display();
            ob2=ob1+7;
        
        obj.display();
        ob2.display();
    return 0;
}