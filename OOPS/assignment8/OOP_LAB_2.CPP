//2.Create a class which a complex number. Add two objects and display the resultant object Overload the ++ (post and pre) operator for the class.
#include <iostream>
using namespace std;
 
class Integer {
    private:
        int value;
    public:
        Integer(int v) : value(v) { }
        Integer operator++();
        Integer operator++(int);
        int getValue() { 
            return value;
        }
};

Integer Integer::operator++()
{
    value++;
    return *this; 
}
 
Integer Integer::operator++(int)
{
    const Integer old(*this);
    ++(*this);
    return old;
}
 
int main()
{
    Integer i(10);
 
    cout << "Post Increment Operator" << endl;
    cout << "Integer++ : " << (i++).getValue()<<" +i " << endl;
    cout << "Pre Increment Operator" << endl;
    cout << "++Integer : " << (++i).getValue()<<" +i "<< endl;
}
