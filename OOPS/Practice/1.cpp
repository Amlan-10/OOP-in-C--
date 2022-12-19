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
    friend array operator +(array &x , int y) ;
} ;

array operator +(array &x , int y)
{
    array temp ;
    for(int i=0 ; i<10 ; i++)
    {
        temp.a[i] = x.a[i] + y ;
    }
    return temp ;
}

int main()
{
    array a1 , a2 ;
    a1.getdata() ;
    a1.display() ;
    a2 = a1 + 7 ;
    a2.display() ;
    return 0 ;
}