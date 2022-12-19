//3.WAP to count number of digits of a positive integer n by using recursion.

#include <stdio.h>
int count(int);
int main(){
    int n,num;
    printf("Enter a number: ");
    scanf("%d",&n);
    num=count(n);
    printf("Number of the digits in %d is %d",n,num);
    
    return 0;
}
int count(int n){
    static int c=0;
    if (n>0)
    {
        c++;
        count(n/10);
    }
    
    
    return c;
}