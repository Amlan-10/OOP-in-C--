//2.WAP to test whether a number n is palindrome number or not using function.

#include <stdio.h>
int palin(int);
int main(){
    int n,rem=0,rev=0,m,c;
    printf("Enter a number:");
    scanf("%d",&n);
    m=n;
    c=palin(n);
     if (m==c)
    {
        printf("%d is a palindrome number.",m);
    }
    else
    {
        printf("%d is not a palindrome number.",m);
    }
    return 0;
}
int palin(int n){
    int rem=0,rev=0;
    while (n!=0)
    {
       rem=n%10;
       rev=rev*10+rem;
       n/=10;
    }
    return rev;
}