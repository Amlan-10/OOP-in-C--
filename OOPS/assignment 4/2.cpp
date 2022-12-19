// WAP to find the square and cube of a number using inline function.

#include <iostream>
#include<math.h>
using namespace std;
inline void square(int x)
{
   int ans=pow(x,2);
   cout<<"The square is: "<<ans<<endl;
}
inline void cube(int x)
{
int ans=pow(x,3);
cout<<"The cube is: "<<ans<<endl;
}
int main()
{
    int n;
    cout<<"Enter any number: ";
    cin>>n;
    square(n);
    cube(n);
    return 0;
}