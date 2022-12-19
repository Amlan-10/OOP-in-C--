// 4. WAP to find the first digit of a number using function.
// Example : if the number is 1234. output is 1.

#include <stdio.h>
int count(int);
int main(){
    int n,num;
    printf("Enter a number: ");
    scanf("%d",&n);
    num=count(n);
    printf("The first digit of %d is %d",n,num);
    return 0;
}
int count(int n){
    int c=0;
    while (n>=10)
    {
        n=n/10;
    }
    return n;
}