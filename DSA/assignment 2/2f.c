#include<stdio.h>
int checkfibonacci(int n)
        {
            int a = 0;
            int b = 1;
            if (n==a || n==b) return 1;
            int c = a+b;
            while(c<=n)
            {
                if(c == n) return 1;
                a = b;
                b = c;
                c = a + b;
            }
            return 0;
        }
int main(){
int n;
printf("Enter number to check : ");
scanf("%d", &n);
if(checkfibonacci(n)==1){
    printf("Fibonacci number.");
}
else{
    printf("Not a Fibonacci number.");
}
return 0;
}