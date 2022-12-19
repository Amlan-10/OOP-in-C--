#include <iostream>
using namespace std;
template <class type>
type swap(type &a, type &b)
{ 
    type temp=a;
    a=b;
    b=temp;
    return temp;
}

int main()
{
    int a1=2,a2=3;
    cout<<" a1= "<<a1<<"a2="<<a2<<swap(a1,a2)<<endl;
    
    int b1=12,b2=33;
    cout<<" b1= "<<b1<<"b2="<<b2<<swap(b1,b2)<<endl;
    
    char c1=D, c2=d;
    cout<<" c1= "<<c1<<"c2="<<c2<<swap(c1,c2)<<endl;

    return 0;
}