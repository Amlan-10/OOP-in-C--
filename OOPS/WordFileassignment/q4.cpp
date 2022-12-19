//Index comparision with overloading of <operator
#include<iostream>
using namespace std;

enum boolean{FALSE,TRUE};
class Index{
 private:
 int value;
 public:
 Index(){
 value=0;
 }
Index(int val){
 value=val;
 }
 int GetIndex(){
 return value;
 }
 boolean operator < (Index idx){
 return (value < idx.value?TRUE:FALSE);
 }
};
int main(){
Index idx1=5;
 Index idx2=10;
 cout<<"\nIndex 1= "<<idx1.GetIndex();
 cout<<"\nIndex 2= "<<idx2.GetIndex();
 if(idx1<idx2){
 cout<<"\nIndex 1 is less than Index 2"<<endl;
}
 else{
 cout<<"\nIndex 1 is not less than Index 2"<<endl;
 }
}