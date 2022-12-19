//index comparison with overloading of < operator
#include <iostream>
using namespace std;
class index
{
    private:
    int value;
    public:
    index()
    {
        value=0;
    }
    index(int val)
    {
        value=val;
    }
    int GetIndex()
    {
        return value;
    }
    int operator < (index idx)
    {
        return(value < idx.value ? 1 : 0 );
    }
};
int main()
{
    index idx1=5;
    index idx2=10;
    cout<<"\nIndex1 = "<<idx1.GetIndex();
    cout<<"\nIndex2 = "<<idx2.GetIndex();
    if(idx1 < idx2)
        cout<<"\nIndex1 is less than Index2";
    else    
        cout<<"\nIndex1 is not less than Index2";
}