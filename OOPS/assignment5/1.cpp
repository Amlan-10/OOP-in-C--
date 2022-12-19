// Wap to swap private data member of 2 classes (Hint:classes have no relation with one another use friends function.)
#include<iostream>
using namespace std;

class B;
class A
{
    int p;
    public:
    void input()
    {
        cin>>p;
    }
    void output()
    {
        cout<<p<<endl;
    }
    friend void swap(A&,B&);
};
class B
{
    int q;
    public:
    void input(){
        cin>>q;

    }
    void output(){
        cout<<q;
    }
    friend void swap(A&,B&);
};
void swap(A& obj1,B& obj2){
    int temp=obj1.p;  
    obj1.p=obj2.q;
    obj2.q=temp;
}
int main(){
    A obj1,obj2;
    obj1.input();
    obj2.input();
    swap(obj1,obj2);
    obj1.output();
    obj2.output();
   
    return 0;
}