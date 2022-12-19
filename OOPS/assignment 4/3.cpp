// WAP to find the minimum value among 2 numbers and return the minimum value using refernce variable
#include<iostream>
using namespace std;
int min(int &a, int &b)
{
		int z;
		z = ((a + b - abs(a - b)) / 2);
        int &k=z;
		return k;
}
int main()
{
	int x, y;
	cout<<"Enter 2 numbers"<<endl;
	cin>>x>>y;
	cout << "Minimum of both numbers: " << min(x, y) << endl;
	return 0;
} 