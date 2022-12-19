// Degree to Radian

#include<iostream>
using namespace std;
const float PI=3.1415;
class Radian{
 private:
 float rad;
public:
 Radian(){
 rad=0.0;
 }
 Radian(float InitRad){
 rad=InitRad;
 }
 float GetRadian(){
 return rad;
 }
 void Output(){
 cout<<"Radian= "<<GetRadian();
 }
};
class Degree{
 private:
 float degree;
 public:
 Degree(){
 degree=0.0;
 }
operator Radian(){
 return (Radian(degree *PI/180.0)); }

 void Input(){
 cout<<"Enter Degree: ";
 cin>>degree;
 }
};
int main(){
 Degree deg1;
 Radian rad1;
 deg1.Input();
 rad1=deg1;
 rad1.Output();
}