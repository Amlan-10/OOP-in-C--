//2) // .Write a program to demonstrate the concept of call-by-value, call-by-reference & call-by address by taking swapping of two numbers as an example.

#include <iostream>
using namespace std;
void swap(int x, int y)
{
    int temp;
    temp = x;
    x = y;
    y = temp;
}
void swap1(int &p, int &q)
{
    int temp;
    temp = p;
    p = q;
    q = temp;
}
void swap2(int *p, int *q)
{
    int *temp;
    temp = p;
    p = q;
    q = temp;
}
int main()
{
    int x, y;
    cout << "ENTER THE VALUES\n";
    cin >> x >> y;
    swap(x, y);
    cout << "RESULT AFTER PASSING VARIABLES BY CALL\n";
    cout << x <<","<< y<<endl;
    swap1(x, y);
    cout << "RESULT AFTER PASSING VARIABLES BY REFERENCE\n";
    cout << x <<","<< y << endl;
    swap2(&x, &y);
    cout << "RESULT AFTER PASSING VARIABLES BY ADDRESS\n";
    cout << x <<","<< y << endl;
    return 0;
}