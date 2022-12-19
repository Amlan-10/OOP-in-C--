#include <iostream>
using namespace std;
class Operation{
    private:
    int a,b,c;
    public:
    int d,e;
    void setdata(int a1,int b1,int c1);
    void getdata(){
        cout<<"The value of a :"<<a<<endl;
        cout<<"The value of b :"<<b<<endl;
        cout<<"The value of c :"<<c<<endl;
        cout<<"The value of d :"<<d<<endl; 
        cout<<"The value of e :"<<e<<endl;
    }};
    void Operation :: setdata(int a1,int b1,int c1){
        a=a1;b=b1;c=c1;
    }
    int main(){
        Operation obj;
        // obj.a=141;    Will not run as a is private 
        obj.d=54;
        obj.e=99;
        obj.setdata(2,7,87);
        obj.getdata();
        return 0;
    }

