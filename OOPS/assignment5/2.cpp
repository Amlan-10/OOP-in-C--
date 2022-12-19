// 2. Create a class book which stores name, author and price of a book.
//  Store information for n no. of books.
// Display the information of all books in a given price range using friend function.

#include <iostream>
using namespace std;
class book
{
    char name[20];
    char author[20];
    int price;
public:
    void input()
    {
        cout << "Enter name of book: ";
        cin >> name;
        cout << "Enter author of book: ";
        cin >> author;
        cout << "Enter price of book: ";
        cin >> price;
    }
    void output()
    {
        cout << "Name of book: " << name << endl;
        cout << "Author of book: " << author << endl;
        cout << "Price of book: " << price << endl<<endl;
    }
    friend void display(book *, int, int, int);
};
void display(book *ob, int n, int low, int up)
{
    for (int i = 0; i < n; i++)
    {
        if (ob[i].price >= low && ob[i].price <= up)
        {
            ob[i].output();
        }
    }
}

int main(){
    int n, low, up;
    cout << "Enter the number of books: ";   
    cin >> n;
    book *ob = new book[n];
    for (int i = 0; i < n; i++)
    {
        ob[i].input();
    }
    cout << "Enter the lower limit of pricce range: ";
    cin >> low;
    cout << "Enter the upper limit of price range: ";
    cin >> up;
    display(ob, n, low, up);

    return 0;
}