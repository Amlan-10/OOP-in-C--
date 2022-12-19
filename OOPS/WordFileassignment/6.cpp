//subscripted operator ovverloading
#include <iostream>
#include <string.h>
using namespace std;
typedef struct AccountEntry
{
    int number;
    char name[25];
}AccountEntry;
class AccountBook
{
    private:
    int aCount;
    AccountEntry account [10];
    public:
    AccountBook(int aCountIn)
    {
        aCount=aCountIn;
    }
    void AccountEntry();
    int operator [] (char* numberIn);
    char * operator [](int numberIn);
};
int AccountBook::operator [](char* nameIn)
{
    for(int i=0;i<aCount;i++)
    {
        if(strcmp(nameIn, account[i].name)==0)
            return account[i].number;
    }
    return 0;
}
char* AccountBook::operator[](int numberIn)
{
    for(int i=0;i<aCount;i++)
    {
        if (numberIn==account[i].number)
            return account[i].name;
        return 0;
    }
}
void AccountBook::AccountEntry()
{
    for(int i=0;i<aCount;i++)
    {
        cout<<"Account Number: ";
        cin>>account[i].number;
        cout<<"Account Holader Name: ";
        cin>>account[i].name;
    }
}
int main()
{
    int accno;
    char name[25];
    AccountBook accounts(5);
    cout<<"Building 5 Customers Database"<<endl;
    accounts.AccountEntry();
    cout<<"\nAccessing Account Information";
    cout<<"\nTo access Name Enter Account Number: ";
    cin>>accno;
    cout<<"Name: "<<accounts[accno];
    cout<<"\nTo access Account Number, Enter name: ";
    cin>>name;
    cout<<"Account Number: "<<accounts[name];
}