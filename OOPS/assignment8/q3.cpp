// 3. Create a class which allocates the memory for a string through dynamic constructor.
// Overload th ebinary + to concatenate two strings and display it.

#include <iostream>
#include <string.h>

using namespace std;

class addstr {

public:

	char *s1, *s2;

	addstr(char str1[10], char str2[10])
	{

        s1 = new char[20];
        s2 = new char[20];

		strcpy(s1, str1);
		strcpy(s2, str2);
	}


	void operator+()
	{
		cout << "Concatenation: " << strcat(s1, s2);
	}
};


int main()
{

	char str1[] = "Hello";
	char str2[] = "World";


	addstr a1(str1, str2);
	+a1;
	return 0;
}