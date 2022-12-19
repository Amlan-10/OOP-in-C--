#include <stdio.h>

int main()
{
    int n;
    printf("Enter the size of the array: ");
    scanf("%d", &n);
    int a[n];
    printf("Enter the elements of the array: ");
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
    QuickSort(a,0,n);
    printf("The Sorted Array is:\n ");
    for (int k = 0; k < n; k++)
    {
        printf("%d ", a[k]);
    }
    return 0;
}

void swap(int a[], int i, int j)
{
    int temp = 0;
    temp = a[i];
    a[i] = a[j];
    a[j] = temp;
}

int partition(int a[], int low, int high)
{
    int start = low;
    int end = high;
    int pivot = a[low];
    while (start < end)
    {
        while (start <= high - 1 && a[start] <= pivot)
        {
            start++;
        }
        while (end >= low && a[end] > pivot)
        {
            end--;
        }
        if (start < end)
        {
            swap(a, start, end);
        }
    }
    swap(a,low,end);
    return end;
}
void QuickSort(int a[],int low,int high)
{
    while(low<high)
    {
        int pivot=partition(a,low,high);
        QuickSort(a,low,pivot-1);
        QuickSort(a,pivot+1,high);
    }
    
}