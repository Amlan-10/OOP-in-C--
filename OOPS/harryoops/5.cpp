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
};

int statvar :: count;
int main(){
    statvar Employes[5];
    for(int i=0;i<5;i++){
        Employes[i].setdata();
        Employes[i].display();
    }
}