// Meter class for MKS measurement system
#include <iostream>
using namespace std;
class Meter
{
    private: 
    float length; 
    public:
    Meter()
    {
        length= 0.0;
    }
    Meter(float InitLength)
    {   
        length = InitLength/ 100.0; 
    }
    operator float()
    {
        float LengthCms; 
        LengthCms=length*100.0;
        return (LengthCms);
    }
    void GetLength()
    {
        cout << "\nEnter Length (in meters): ";
        cin>> length;
    }

    void ShowLength()
    {
        cout << "Length (in meter) = "<< length;
    }
};
int main()
{
    Meter meter1;
    float length1;
    cout<<"Enter Length in cms";
    cin>>length1;
    meter1=length1;
    meter1.ShowLength();
    Meter meter2;
    float length2;
    meter2.GetLength();
    length2=meter2;
    cout<<"Length in cms = "<<length2;
}