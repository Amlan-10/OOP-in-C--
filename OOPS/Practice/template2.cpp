#include<iostream>
using namespace std;

template<typename T>
void fun(const T &a)
{
    static int count=4;
    cout<++count;
    return;
}
int main()
{
    fun<int>(1);
    cout<<endl;
    fun<int>(2);
    cout<<endl;
    fun<double>(1.1);    
    cout<<endl;
    return 0;

    }