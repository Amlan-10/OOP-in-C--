// WAP to increment the value of an argument given to a function using reference variable
#include <iostream>
using namespace std;
int increment(int &x){
  return ++x;
}
int main(){
  int num;
  cout<<"Enter a number: "<<endl;
  cin>>num;
  cout<<"The increased number is: "<<increment(num);
  return 0;
}
