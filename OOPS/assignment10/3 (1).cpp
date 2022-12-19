// // 3.Create a class which stores account number, customer name and balance.
//  Derive two classes from 'Account class: Savings' and 'Current".
// //  The Savings class stores minimum balance. The Current class stores the over-due amount.
//  Include member functions in the appropriate class for

// // -deposit money

// // -withdraw (For saving account minimum balance should be checked.) (For current account
//  overdue amount should be calculated.]

// // -display balance Display data from each class using virtual function.]

#include <iostream>
using namespace std;
class account{
protected:
    int accno;
    char name[20];
    float bal;
public:
    virtual void deposit(){
    };
    virtual void withdraw(){
    };

};
class current:public account{
    public:
        float over;
        void deposit(){
            cout<<"Enter accno, name, bal, over: ";
            cin>>accno>>name>>bal>>over;
            cout<<"Enter amount to deposit: ";
            float amt;
            cin>>amt;
            bal+=amt;
            cout<<"Balance is: "<<bal<<endl;
        }
        void withdraw(){
            cout<<"Enter accno, name, bal, over: ";
            cin>>accno>>name>>bal>>over;
            cout<<"Enter amount to withdraw: ";
            float amt;
            cin>>amt;
            bal-=amt;
            cout<<"Balance is: "<<bal<<endl;
        }

};
class savings:public account{
    public:
        float min;
        void deposit(){
            cout<<"Enter accno, name, bal, min: ";
            cin>>accno>>name>>bal>>min;
            cout<<"Enter amount to deposit: ";
            float amt;
            cin>>amt;
            bal+=amt;
            cout<<"Balance is: "<<bal<<endl;
        }
        void withdraw(){
            cout<<"Enter accno, name, bal, min: ";
            cin>>accno>>name>>bal>>min;
            cout<<"Enter amount to withdraw: ";
            float amt;
            cin>>amt;
            bal-=amt;
            cout<<"Balance is: "<<bal<<endl;
        }

};
int main(){
    current obj;
    savings obj2;
    account *a;
    a=&obj;
    a->deposit();
    a->withdraw();
    a=&obj2;
    a->deposit();
    a->withdraw();
    return 0;
}