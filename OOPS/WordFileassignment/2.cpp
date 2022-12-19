//concatenation of string
#include <iostream>
#include<string.h>
using namespace std;
const int BUFF_SIZE=50;
class stringg
{
    private:
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
    stringg operator +(stringg s)
    {
        stringg temp=str;
        strcat(temp.str,s.str);
        return temp;
    }
};
int main()
{
    stringg str1="SHAMIT ";
    stringg str2="SHEEL";
    stringg str3;
    cout<<"\nBefore str3 = str1+str2";
    cout<<"\nstr1= ";
    str1.echo();
    cout<<"\nstr2 = ";
    str2.echo();
    cout<<"\nstr3 = ";
    str3.echo();
    str3=str1+str2;
    cout<<"\nAfter str3 = str1+str2";
    cout<<"\nstr1= ";
    str1.echo();
    cout<<"\nstr2 = ";
    str2.echo();
    cout<<"\nstr3 = ";
    str3.echo();
}