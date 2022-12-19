#include<iostream>
using namespace std ;


class array
{
    int a[10] ;
    public:
    void getdata()
    {
        cout << "Enter the elements of the array " << endl ;
        for(int i=0 ; i<10 ; i++)
        {
            cin >> a[i] ;
        }
    }
    void display()
    {
        cout << "The elements of the array are " << endl ;
        for(int i=0 ; i<10 ; i++)
        {
            cout << a[i] << " " ;
        }
        cout << endl ;
    }
    friend void operator ++(array &x) ;
} ;

void operator ++(array &x)
{
    for(int i=0 ; i<10 ; i++)
    {
        x.a[i]++ ;
    }
}

int main()
{
    array a1 ;
    a1.getdata() ;
    a1.display() ;
    ++a1 ;
    a1.display() ;
    return 0 ;
}