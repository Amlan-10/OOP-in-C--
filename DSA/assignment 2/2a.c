//1. WAP to calculate x^y(x power y) by writing a function(say POWER) for it.

#include <stdio.h>
int power(int,int);
int main(){
    int x,y,p;
    printf("Enter the value of exponent (x): ");
    scanf("%d",&x);
    printf("Enter the value of Power (y): ");
    scanf("%d",&y);
    p=power(x,y);
    printf("The value of x^y is: %d",p);

    return 0;
}
int power(int x,int y){
    int result=1;
    for (int i = 1; i <= y; i++)
    {
        result*=x;
    }
    return result;
    
}