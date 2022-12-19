#include<iostream>
using namespace std;

class Enclosing{
    int x;
    class nested{
        void nestedfun(Enclosing *e)
        {
            cout<<e->x;
        }
    };
};
int main()
{
    return 0;
}