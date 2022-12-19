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
    SelectionSort(a, n);
    return 0;
}

void swap(int a[], int i,int j)
{
    int temp = a[i];
    a[i] = a[j];
    a[j] = temp;
}
void SelectionSort(int a[], int n)
{

    for (int i = 0; i < n - 1; i++)
    {
        int min = i;
        for (int j = i + 1; j < n; j++)
        {
            if (a[j] < a[min])
            {
                min = j;
            }
        }
        if (min != i)
        {
            // int temp = a[i];
            // a[i] = a[min];
            // a[min] = temp;
            swap(a,i,min);
        }
    }
    printf("The Sorted Array is:\n ");
    for (int k = 0; k < n; k++)
    {
        printf("%d ", a[k]);
    }
}