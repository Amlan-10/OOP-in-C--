//comparison of strings
#include <iostream>
#include <string.h>
using namespace std;
const int BUFF_SIZE=50;
enum boolean {FALSE,TRUE};
class stringg
{
    private :
    char str[BUFF_SIZE];
    public:
    stringg()
    {
        strcpy(str," ");
    }
    void read()
    {
        cin>>str;
        cout<<str;
    }
    void echo()
    {
        cout<<str;
    }
    boolean operator < (stringg s)
    {
        if(strcmp(str,s.str)<0)
            return TRUE;
        else 
            return FALSE;
    }
    boolean operator > (stringg s)
    {
        if (strcmp(str,s.str)>0)
            return TRUE;
        else    
            return FALSE;
    }
    boolean operator ==(char *mystr)
    {
        if (strcmp(str,mystr)==0)
            return TRUE;
        else    
            return FALSE;
    }
};
int main()
{
    stringg str1,str2;
    while (TRUE)
    {
        cout<<"\nEnter string1 <'end' to stop>: ";
        str1.read();
        if(str1=="end")
            break;
        cout<<"Enter String2: ";
        str2.read();
        cout<<"Comparison status: ";
        str1.echo();
        if(str1<str2)
            cout<<" < ";
        else
            if(str1>str2)
                cout<<" > ";
            else
                cout<<" = ";
        str2.echo();
    }
    cout<<"\nBye";
}