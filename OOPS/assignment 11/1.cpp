// 1. WAP to sort an integer array and float array using template.

#include <iostream>
using namespace std;

template <class T>
void swap(T *a, T *b)
{
    T temp;
    temp = &a;
    &a = &b;
    &b = temp;
}
template <class T>
void sort(T a[], int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (a[j] > a[i])
            {
                swap(a[i], a[j]);
            }
        }
    }
}
template <class T>
void display(T a[], int n)
{
    cout << "\nThe sorted array is:\n ";
    for (int i = 0; i < n; i++)
    {
        cout << a[i] << " ";
    }
}
template <class T>
void input(T a[], int n)
{
    // T arr[n];
    cout << "Enter the elements of the array: ";
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
}
int main()
{
    int n;
    int arr[n];
    cout << "Enter the size of the array: ";
    cin >> n;
    input(arr, n);
    sort(arr, n);
    display(arr, n);
    return 0;
}