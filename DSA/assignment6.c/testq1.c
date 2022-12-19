// DECIMAL TO BINARY
#include<stdio.h>
int main(){
    int i,n,rem,*a;
    a=(int *)malloc(10*sizeof(int));
    printf("Enter the number to be converted to binary: ");
    scanf("%d",&n);
    i=0;
    while(n){

        rem=n%2;
        n=n/2;
        a[i]=rem;
        i++;
    
    }
    for( int j=i-1;j>=0;j--){
        printf("%d",a[j]);
    }
}