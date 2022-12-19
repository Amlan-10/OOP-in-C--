#include <iostream>
using namespace std;

class Shop{
int itemID[50];
int itemprice[50];
int counter;
public:
void Counterin(void)
{
     counter=0;
}
void setprice(void);
void display(void);
};

void Shop :: setprice(void){
    cout<<"Enter the item id of your item no. "<<counter+1<<endl;
    cin>>itemID[counter];
    cout<<"Enter the item price for item no. "<<counter+1<<endl;
    cin>>itemprice[counter];
    counter++;
}
void Shop :: display(void){
    for(int i=0;i<counter;i++){
        cout<<"The item id is "<<itemID[i]<<" and price is "<<itemprice[i]<<endl;
    }
}
int main(){
    Shop obj;
    obj.Counterin();
    obj.setprice();
    obj.setprice();
    obj.display();
}