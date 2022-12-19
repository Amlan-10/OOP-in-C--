#include <iostream>
#include <string>
using namespace std;
class A{
    string s;
    public:
    void read(void);
    void check_bnr(void);
    void ones(void);
    void display(void);
};
void A :: read(void){
    cout<<"Enter a binary number"<<endl;
    cin>>s;
}
void A :: ones(void){
    for(int i=0;i<s.length();i++){ 
        if(s.at(i)=='0'){
            s.at(i)='1';
        }
        else if(s.at(i)=='1'){
            s.at(i)='0';
        }
    }
}
void A :: check_bnr(void){
    for(int i=0;i<s.length();i++){
        if(s.at(i)!='0' && s.at(i)!='1'){
            cout<<"Invalid input"<<endl;
            exit(0);
        }
    }
}
void A :: display(void){
    for(int i=0;i<s.length();i++){
        cout<<s.at(i);
    }
}
int main(){
    A obj;
    obj.read();
    obj.check_bnr();
    obj.ones();
    obj.display();
}
