#include <iostream>
#include<string.h>
using namespace std;

    class student 
    {
        private :
        string name;
        int Roll_no;
        
        // Nested class include below
        
        class Address
        {
            private :
            int house_no;
            string street;
            string city;
            string state;
            string pincode;
            
            public:
            void setAddress(int h,string s,string c,string st,string p) 
            {
                house_no=h;
                street=s;
                city=c;
                state=st;
                pincode=p;
            }
            
            void showAddress()
            {
                cout<<" house no. ="<<house_no<<endl;
                cout<<" street name ="<< street<<endl;
                cout<<" city name ="<<city<<endl;
                cout<<" state name ="<<state<<endl;
                cout<<" pincode number ="<<pincode<<endl;
            }
        };
        
        Address add;
        
        public:
        void setName(string n)
        {
            name=n;
        }
        
        void setRoll_no(int roll)
        {
            Roll_no=roll;
        }
        
        
         void setAddress(int h,string s,string c,string st,string p)
         {
             add.setAddress(h,s,c,st,p);
         }
         
         void getStudentDetails()
         {
             cout<<"STUDENT DETAILS"<<endl;
             cout<<"NAME :"<<name<<endl;
             cout<<"ROLL NO."<<Roll_no<<endl;
             add.showAddress();
         }
    };
    

int main()
{
    student s1;
    s1.setName("Abhishek");
    s1.setRoll_no(2105002);
    s1.setAddress(250,"Gandhi nagar road","motihari","Bihar","850845");
    s1.getStudentDetails();

    return 0;
}