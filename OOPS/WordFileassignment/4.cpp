//overloading of new and delete operator
#include <iostream>
using namespace std;
const int ARRAY_SIZE = 10;
class vector
{
    int *array;
    public:
    void *operator new(size_t size)
    {
        vector *my_vector;
        my_vector=::new vector;
        my_vector->array=new int[ARRAY_SIZE];
        return my_vector;
    }
    void operator delete(void *vec)
    {
        vector *my_vect;
        my_vect = (vector*)vec;
        delete (int * )my_vect->array;
        ::delete vec;
    }
    void read();
    int sum();
};
void vector::read()
{
    for (int i=0;i<ARRAY_SIZE;i++)
    {
        cout<<"vecotr ["<<i<<"] = ?";
        cin>>array[i];
    }
}
int vector::sum()
{
    int sum=0;
    for(int i=0;i<ARRAY_SIZE;i++)
        sum+=array[i];
        return sum;
}
int main()
{
    vector *my_vector=new vector;
    cout<<"Enter Vector data ..."<<endl;
    my_vector->read();
    cout<<"Sum of vector = "<<my_vector->sum();
    delete my_vector;
}