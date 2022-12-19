// 7.WAP to find out the kth smallest and kth largest element stored in
//  a dynamic array of n integers, where k<n.

#include <stdio.h>
#include <stdlib.h>
int main()
{
    int n, *arr, i, j, k, temp;
    printf("Enter the no. of elements:");
    scanf("%d", &n);
    arr = (int *)malloc(n * sizeof(int));
    for (i = 0; i < n; i++)
    {
        printf("Enter the value in %d position:", i + 1);
        scanf("%d", &arr[i]);
    }
    printf("\nThe Array is:\n");
    for (i = 0; i < n; i++)
        printf("%d ", arr[i]);
    printf("\nEnter the value of k: ");
    scanf("%d", &k);
    for (i = 0; i < n - 1; i++)
    {
        for (j = 0; j < n - i - 1; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
    printf("The %d th smallest number is: %d\n",k,arr[k-1]);
    printf("The %d th largest number is: %d",k,arr[n-k]);
    return 0;
}