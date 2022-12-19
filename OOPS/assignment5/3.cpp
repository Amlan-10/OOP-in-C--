// 3. Create a class time which stores time in hh:mm format. Include all the constructors.
// The paremaeterized constructor should initialize the minute value to 0 if it is not provided.

#include <iostream>
using namespace std;
class time
{
    int hh;
    int mm;
public:
    time(){
        hh = 1;
        mm = 25;
    }
    time(int h, int m=0){
        hh = h;
        mm = m;
    }
    // void input(){
    //     cout << "Enter hours: ";
    //     cin >> hh;
    //     cout << "Enter minutes: ";
    //     cin >> mm;
    // }
    void output(){
        cout << "Time is: " << hh << ":" << mm << endl;
    }
};


int main(){
    time ob1;
    time ob2(5, 20);
    time ob3(10);
    ob1.output();
    ob2.output();
    ob3.output();
    return 0;
}