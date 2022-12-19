#include<stdio.h>
#include<stdlib.h>
int main(){
    int n,i,*ptr,sum=0;
    printf("Enter the number of elements: ");
    scanf("%d",&n);
    ptr=(int *)malloc(n*sizeof(int));
    if(ptr==NULL){
        printf("Error!Memory not allocated!");
        return;
    }
    printf("Enter the elements of the array: ");
    for(i=0;i<n;i++){
    scanf("%d",&ptr[i]);
    sum=sum+ptr[i];
    }
    printf("The sum of n elements is: %d",sum);
    free(ptr);
    return 0;
}