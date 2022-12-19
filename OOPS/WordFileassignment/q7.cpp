//coversion between basic string (char*) and class string
#include <iostream>
#include <string.h>
using namespace std;
const int BUFF_SIZE=50;
class stringg
{
    char str[BUFF_SIZE];
    public:
    stringg()
    {
        strcpy(str," ");
    }
    stringg(char *mystr)
    {
        strcpy(str,mystr);
    }
    void echo()
    {
        cout<<str;
    }
    operator char*()
    {
        return str;
    }
};
int main()
{
    char msg[20]="OOPs the Great";
    stringg str1;
    str1=msg;
    cout<<"str1 = ";
    str1.echo();
    char*receive;
    stringg str2="It is nice to learn";
    receive=str2;
    cout<<"\nstr2 = ";
    cout<<receive;
}