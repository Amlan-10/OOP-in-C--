#include <iostream>  
using namespace std;  
class Employee  
 {  
    static int count;
   public:  
  
        Employee()    
        {    
            cout<<"Default Constructor Invoked"<<endl;    
            count ++;
            cout<<count<<"times"<<endl;
        }    
};  
 int Employee :: count=0;
int main(){
    Employee c1,c2;
    return 0;
}