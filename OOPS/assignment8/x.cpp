// #include <iostream>
// using namespace std;
  
// int main()
// {
//     int i, j;
//     j = 10;
//     i = (j++, j++, j++);
//     cout<<i;
//     return 0;
// }

#include <iostream>
using namespace std;
int main ()
{
	int x, y=0;
	x = 2;
	y = ((++x) * (++x));
	cout << x <<endl<<y<<endl;
	x = 2;
	y = x++ * ++x;
	cout << x <<endl<< y;
	return 0;
}