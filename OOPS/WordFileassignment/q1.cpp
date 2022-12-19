// Conversion from meter to cm and vice-versa from user-defined type to basic datatype

#include <iostream>
using namespace std;
class Meter
{
    float length;

public:
    Meter()
    {
        length = 0.0;
    }
    Meter(float InitLength)
    {
        length = InitLength / 100.0;
    }

    operator float()
    {
        float Lengthcms;
        Lengthcms = length * 100.0;
        return (Lengthcms);
    }
    void GetLength()
    {
        cout << "\nEnter the Length(int meters): ";
        cin >> length;
    }
    void ShowLength()
    {
        cout << "The Length in meter is : " << length;
    }
};

main()
{
    Meter meter1;
    float length1;
    cout << "Enter the length in cms: ";
    cin >> length1;
    meter1 = length1;
    meter1.ShowLength();
    Meter meter2;
    float length2;
    meter2.GetLength();
    length2 = meter2;
    cout << "Length in cms is: " << length2;
}