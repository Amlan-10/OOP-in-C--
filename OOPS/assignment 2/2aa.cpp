#include <iostream>

using namespace std;

class Data
{
    private:
    char name[50];
    int rollno,i;
    float tot,percent;
    int marks[5];

    public:
    void student_details()
    {
        cout<<"Enter name\n";
        cin>>name;
        cout<<"Enter roll no.\n";
        cin>>rollno;
        for(i=0;i<5;i++)
        {
            cout<<"Enter Marks in Subject "<<i+1<<" :";
            cin>>marks[i];
            tot=tot+marks[i];
        }
        percent=tot/5; 
    }
    void output(){
        cout << "Displaying Information :" << endl;
        cout <<"Name : "<<name << endl << "Roll no. :"<<rollno << endl <<"Total marks :"<< tot << endl <<"Percentage : "<< percent;
    }
};
int main()
{
    Data obj1;
    obj1.student_details();
    obj1.output();
    return 0;
} 