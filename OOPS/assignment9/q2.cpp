// 2. WAP to add two objects of time class. Overload the operator'--' to compare two objects and display whether they are equal or not.

#include<iostream>
using namespace std;

class A
{
    int x;
    int y;
    public:
    A(int p,int q){
        x=p;
        y=q;
    }
    void display(){
        if(x==y){
            cout<<"Both are Equal!\n";
        cout<<x<<" "<<y;
        }
        else{
            cout<<"Not Equal!\n";
        }
    }
    void operator --()
    {
        --x;
        --y;
    }
};

int main(){
    A ob(2,2);
    --ob;
    ob.display();
    return 0;
}