// 2.WAP to find out the second smallest and second largest element stored in a dynamic array.
#include <stdio.h>

int main()
{
    int n;
    printf("Enter the number of elements:");
    scanf("%d",&n);
    printf("Enter the array elements :");
    int a[n];                    
    for(int i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(int i=0;i<n-1;i++)         
    {
        int temp;
        for(int j=0; j<n-i-1 ;j++)
        {
            if(a[j+1]<a[j])
            {
                temp=a[j];
                a[j]=a[j+1];
                a[j+1]=temp;
            }
        }
    }
    printf("The second largest element is %d",a[n-2]);   
    printf("\n");
    printf("The second smallest element is %d",a[1]);    
    return 0;
}