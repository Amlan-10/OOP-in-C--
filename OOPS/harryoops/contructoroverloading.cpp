#include <iostream>
using namespace std;
class Rect{
   private:
   int area;
   public:
   Rect(){
      area = 0;
   }
   Rect(int a, int b){
      area = a * b;
   }
   Rect(Rect &a){
    area=a.area;
   }
   void display(){
      cout << "The area is: " << area << endl;
   }
};
int main(){
   Rect r1;
   Rect r2(2, 6);
   Rect r3(r2);
   r1.display();
   r2.display();
   r3.display();
}	

