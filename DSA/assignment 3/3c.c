// 3.WAP to arrange the elements of a dynamic array such that all even numbers are followed by all odd numbers.
#include<stdio.h>
void swap(int *x, int *y);
void segregateEvenOdd(int arr[], int size)
{
    int left = 0, right = size-1;
    while (left < right)
    {
        while (arr[left]%2 == 0 )
            left++;
 
        while (arr[right]%2 == 1 )
            right--;
 
        if (left < right)
        {
            swap(&arr[left], &arr[right]);
            left++;
            right--;
        }
    }
}
void swap(int *x, int *y)
{
    int temp = *x;
    *x = *y;
    *y = temp;
}
 
int main()
{
    int arr[] = {112, 54, 45, 49, 88, 990, 73};
    int arr_size = sizeof(arr)/sizeof(arr[0]);
    int i;
 
    segregateEvenOdd(arr, arr_size);
 
    printf("Array after segregation ");
    for (i = 0; i < arr_size; i++)
        printf("%d ", arr[i]);
 
    return 0;
}
