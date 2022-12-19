//3. WAP to sort an integer array and float array using class template.

#include <iostream>
using namespace std;

template <class T>
class Sort{
    T arr[100];
    int n;
    public:
        void input(){
            cout << "\nEnter the size of the array: ";
            cin >> n;
            cout << "Enter the elements of the array: ";
            for(int i=0; i<n; i++){
                cin >> arr[i];
            }
        }
        void sort(){
            T temp;
            for(int i=0; i<n; i++){
                for(int j=i+1; j<n; j++){
                    if(arr[i]>arr[j]){
                        temp = arr[i];
                        arr[i] = arr[j];
                        arr[j] = temp;
                    }
                }
            }
        }
        void display(){
            cout<<"\nThe sorted array is:\n ";
            for(int i=0; i<n; i++){
                cout << arr[i] << " ";
            }
        }
};

int main(){
    Sort<int> s1;
    Sort<float> s2;
    s1.input();
    s1.sort();
    s1.display();
    s2.input();
    s2.sort();
    s2.display();
    
    return 0;
}