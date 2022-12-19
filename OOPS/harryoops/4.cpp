#include <iostream>
using namespace std;
class statvar{
    int id;
static int count;
public:
void setdata(void){
    cout<<"Enter the id: ";
    cin>>id;
    count++;
} 
void display(void){
    cout<<"The id of Employee no. "<<count<<" is "<<id<<endl;
}
static void getcount(void){
    cout<<"The value of count is : "<<count<<endl;
}
};

int statvar :: count;
int main(){
    statvar Amlan,Ayan,Pranay;
    Amlan.setdata();
    Amlan.display();
    Amlan.getcount();

    Ayan.setdata();
    Ayan.display();
    Ayan.getcount();

    Pranay.setdata();
    Pranay.display();
    Pranay.getcount();
}