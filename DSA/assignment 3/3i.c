// 9.You are given an array of 0s and 1s in random order. Segregate 0s on left
// side and 1s on right side of the array. Traverse array only once.
#include <stdio.h>
#include <stdlib.h>
int main(){
    int n,i,*arr;
    printf("Enter the number of elements: ");
    scanf("%d",&n);
    arr=(int*)malloc(n*sizeof(int));
    for ( i = 0; i < n; i++)
    {
        printf("Enter 0 or 1:");
        scanf("%d",&arr[i]);
    }
    printf("The Array is:\n");
    for ( i = 0; i < n; i++)
    {
        printf("%d ",arr[i]);
    }
    printf("\nThe Modified Array is:\n");
    for ( i = 0; i < n; i++)
    {
        if (arr[i]==0)
        {
            printf("%d ",arr[i]);
        }
        
    }
        for ( i = 0; i < n; i++)
    {
        if (arr[i]==1)
        {
            printf("%d ",arr[i]);
        }
        
    }
    
    return 0;
}