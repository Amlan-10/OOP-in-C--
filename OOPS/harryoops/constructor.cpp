#include <iostream>
using namespace std;
class B;
class A{
    int p;
    public:

    void input(){
        cout<<"Enter the value of p: ";
        cin>>p;
    }
    void output(){
        cout<<"\nThe value of p is: "<<endl;
        cout<<p;
    }
    friend void swap(A&,B&);
};
class B{
    int q;
    public:
    void input(){
        cout<<"Enter the value of q: ";
        cin>>q;
    }
    void output(){
        cout<<"\nThe value of q is: "<<endl;
        cout<<q;
    }
    friend void swap(A&,B&);
};
void swap(A &a,B &b){
    int temp=a.p;
    a.p=b.q;
    b.q=temp;
}
int main(){
    A a;
    B b;
    a.input();
    b.input();
    swap(a,b);
    a.output();
    b.output();
}