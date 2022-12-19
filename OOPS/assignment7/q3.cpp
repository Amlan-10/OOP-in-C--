// 3. Create a class which stores account number, customer name and balance.
// Derive two classea from account class savings, and current.
// The savings class stores the minimum balance and the current class stores overdue 
// amount. Include member functions in the appropriate class for :
// 1.depoist money
// 2. Withdraw [For saving account minimum balance should be checked.] 
//         [for current account overdue amount should be Calculate].
// 3. display balance.

#include <iostream>
using namespace std;

class Account
{
protected:
    char name[20];
    int acc_no;
    long balance;
};

class Saving : public Account
{
    long minB;

public:
    void input()
    {
        cout << "Name:";
        cin.getline(name, 20);
        cout << "Acc No = ";
        cin >> acc_no;
        cout << "MinBalance =";
        cin >> minB;
    }

    void withdraw()
    {
        if (balance > minB)
        {
            long withdraw;
            cout << "Enter the amout to be withdraw";
            cin >> withdraw;

            if (balance - withdraw > minB)
            {
                cout << withdraw << " money is withdrawd";
                balance = balance - withdraw;
            }
            else
            {
                cout << "Balance is insufficient";
                cout << endl; 
            }
        }
        else
        {
            cout << "Balance is insufficient";
            cout << endl;
        }
    }

    void deposit()
    {
        long depositAmount;
        cout << "Enter the amount to be deposited= ";
        cin >> depositAmount;
        balance = balance + depositAmount;
    }

    void displayBalance()
    {
        cout << "Balance is " << balance;
        cout << endl;
    }
};

class Current:public Account
{
    long overDueAmout;

public:
    void input()
    {
         cin.getline(name, 20);
        cout << "Name:";
        cin.getline(name, 20);
        cout << "Acc no : ";
        cin >> acc_no;
        cout << "Enter the over due amount";
        cin >> overDueAmout;
    }

    void depositAmount()
    {
        long depositAmount;
        cout << "Enter the amount to be deposited";
        cin >> depositAmount;
        overDueAmout = overDueAmout - depositAmount;
    }

    void display()
    {
        cout << "Total Due amount is " << overDueAmout;
        cout << endl;
    }
};

int main()
{
    Saving s;
    Current c;
    s.input();
    s.deposit();
    s.withdraw();
    s.displayBalance();

    c.input();
    c.depositAmount();
    c.display();
}