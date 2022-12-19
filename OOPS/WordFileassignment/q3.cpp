//Concatenation of String

#include<iostream>
#include<string.h>

const int BUFF_SIZE=50;
class string{
 private:
 char str[BUFF_SIZE];
 public:
 string(){
 strcpy(str," ");
 }
 string(const char *MyStr){
 strcpy(str,MyStr);
 }
 void echo(){
 std::cout<<str;
 }
 string operator +(string s){
  string temp=str;
 strcat(temp.str, s.str);
 return temp;
 }
};

int main(){
string str1("Welcome To ");
 string str2("Operator Overloading");
 string str3;
 
std::cout<<"\nBefore str3=str1+str2";
 std::cout<<"\nstr1= ";
  str1.echo();
 std::cout<<"\nstr2= ";
str2.echo();
 std::cout<<"\nstr3= ";
 str3.echo();
 str3=str1+str2;
 std::cout<<"\nAfter str3=str1+str2";
 std::cout<<"\nstr1= ";
 str1.echo();
 std::cout<<"\nstr2= ";
str2.echo();
 std::cout<<"\nstr3= ";
  str3.echo();
}