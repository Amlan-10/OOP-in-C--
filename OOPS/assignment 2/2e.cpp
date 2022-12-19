#include<iostream>
using namespace std;
void p(char c='*', int n=80);
void p(char c, int n)
{
	for(int i=0;i<n;i++)
	cout<<c;
}
int main()
{
	int i,n;
	char c;
	cout<<"ENTER CHOICE:"<<endl<<"1. FOR BOTH CHARACTER AND NO. OF TIMES INPUT"<<endl;
	cout<<"2. FOR ONLY CHARACTER INPUT"<<endl<<"FOR DEFAULT PRESS ANYTHING EXCEPT 1 AND 2"<<endl;
	cin>>i;
	switch(i)
	{
		case 1:cout<<"ENTER CHARACTER AND NO. OF TIMES:";
		       cin>>c;cin>>n;
		       p(c,n);
		       break;
		case 2:cout<<"ENTER CHARACTER:";
		       cin>>c;
		       p(c);
		       break;
		default:
		       p();
		       break;		       
	}
	return 0;
}