#include <iostream>
using namespace std;
int c=80;
int main(){
    // int a,b,c;
    // float k = 9.78f;
    // cout<<"Enter the value of A and B : \n";
    // cin>>a>>b;
    // cout<<"The sum(c) is: \n"<<a+b;
    // cout<<"\nThe value of global variable c is : "<<::c;
    //****************Reference variable***************** 
    float x=34.98f;
    float &j=x;
    cout<<"\nThe value of x is "<<x;
    cout<<"\nThe value of j is "<<j;
}