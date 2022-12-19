#include<iostream>
using namespace std;
class book_detail{
    // char title[50];
    char author[50];
    char year[10];
    int price;
    public:
    void input()
    {
        cout << "Enter author of book: ";
        cin >> author;
        cout << "Enter year of publication of the book: ";
        cin >> year;
        cout << "Enter price of book: ";
        cin >> price;
    }
    void output()
    {
        cout << "Year of publication of the book: " << year << endl;
        cout << "Author of book: " << author << endl;
        cout << "Price of book: " << price << endl<<endl;
    }
    friend void display(book_detail *,int,int,int);
};
void display(book_detail *ob,int n,int low,int high){
    for(int i=0;i<n;i++){
        if(ob[i].price>=low &&ob[i].price<=high){
            ob[i].output();
        }
    }
}
int main(){
    int n,low,high;
    cout<<"Enter the number of books: ";
    cin>>n;
    book_detail *ob=new book_detail[n];
    for(int i=0;i<n;i++){
        ob[i].input();
    }
    cout << "Enter the lower limit of price range: ";
    cin >> low;
    cout << "Enter the upper limit of price range: ";
    cin >> high;
    display(ob,n,low,high);
    return 0;
    }