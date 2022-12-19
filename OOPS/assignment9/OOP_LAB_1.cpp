//1.WAP to add two objects of distance class.
//Overload the operator > to compare two objects and return the object with larger time value and display it.
//Overload the "-" operator to compare and display whether two given objects contain same distance value.

#include <iostream>
using namespace std;
 
class Distance {
   private:
      int feet;             
      int inches;           
      
   public:
      Distance() {
         feet = 0;
         inches = 0;
      }
      Distance(int f, int i) {
         feet = f;
         inches = i;
      }
      
      void displayDistance() {
         cout << "F: " << feet << " I:" << inches <<endl;
      }
      
      Distance operator- () {
         feet = -feet;
         inches = -inches;
         return Distance(feet, inches);
      }
      bool operator <(const Distance& d) {
         if(feet < d.feet) {
            return true;
         }
         if(feet == d.feet && inches < d.inches) {
            return true;
         }
         
         return false;
      }
};

int main() {
   Distance D1(11, 10), D2(5, 11);
 
   if( D1 < D2 ) {
      cout << "D1 is less than D2 " << endl;
   } else {
      cout << "D2 is less than D1 " << endl;
   }
   
   return 0;
}
