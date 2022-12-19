#include<stdio.h>

int main()
{
    int n;
    printf("Enter the size of the array: ");
    scanf("%d",&n);
    int a[n];
    printf("Enter the elements of the array: ");
    for(int i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    InsertionSort(a,n);
    return 0;
}

void InsertionSort(int a[],int n)
{
    int j,temp;
    for(int i=1;i<n;i++)
    {
        temp=a[i];
        j=i-1;
        while(j>=0 && a[j]>temp)
        {
            a[j+1]=a[j];
            j--;
        }
        a[j+1]=temp;
    }
     printf("The Sorted Array is:\n ");
    for(int k=0;k<n;k++)
    {
    printf("%d ",a[k]);
    }
}