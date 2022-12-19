#include<iostream>
using namespace std;

template<typename T>
void max(T arr[],int n)
{
    int max=arr[0];
    for(int i=0;i<n;i++)
    {
        if(arr[i]>arr[i+1])
        {
            max=arr[i];
        }
    }
cout<<"The max is: "<<max;
}
int main()
{
    int arr[5]={4,5,2,9,1};
    max<int>(arr,5);
}