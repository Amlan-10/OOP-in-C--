#include<stdio.h>
void insertionsort(int *arr,int n)
{
    for(int i=1;i<n;i++)
    {
        int temp=arr[i];
        int j=i-1;
        while(j>=0 && arr[j]>temp)
        {
            arr[j+1]=arr[j];
            j--;
        }
        arr[j+1]=temp;
    }
}

int main()
{
    int arr[7]={5,3,8,10,2,1,7};
    insertionsort(arr,7);
    for(int i=0;i<7;i++)
    {
        printf("%d ",arr[i]);
    }
}