// 4. WAP to read two polynomial and perform their subtraction using array.
#include <stdio.h>
#include <stdlib.h>
void display(int arr[], int);
void add(int arr1[], int n, int arr2[], int arr3[]);

int main()
{
    int m, n, *arr1, *arr2, *arr3, i;
    printf("Enter the degree of 1st Polynomial:");
    scanf("%d", &n);
    printf("Enter the degree of 2nd Polynomial:");
    scanf("%d", &m);
    if (m != n)
    {
        printf("Polynomial Substraction is not possible!");
        return -1;
    }
    else
    arr1 = (int *)malloc(n * sizeof(int));
    arr2 = (int *)malloc(m * sizeof(int));
    arr3 = (int *)malloc(m * sizeof(int));
    printf("Enter the coefficients of the 1st Polynomial:\n");
    for (i = n; i >= 0; i--)
    {
        printf("Enter coefficient of %d term: ", i);
        scanf("%d", &arr1[i]);
    }
    printf("Enter the coefficients of the 2nd Polynomial:\n"); 
    for (i = m; i >= 0; i--)
    {
        printf("Enter coefficient of %d term: ", i);
        scanf("%d", &arr2[i]);
    }
    printf("The 1st polynomial is:\n");
    display(arr1, n);
    printf("\nThe 2nd polynomial is:\n");
    display(arr2, m);
    printf("\nThe Substraction of the two polynomials is:\n");
    add(arr1, n, arr2, arr3);
    display(arr3, n);

    return 0;
}
void display(int arr[], int n)
{
    int i, j;
    for (i = n; i >= 0; i--)
    {
        
        if (arr[i] == 0)
        {
            printf(" ");
        }

        else

            printf("%d*x^%d ", arr[i], i);
            if(i-1 >= 0)
            printf("+");
    } 
}
void add(int arr1[], int n, int arr2[], int arr3[])
{
    int i;
    for (i = n; i >= 0; i--)
    {
        arr3[i] = arr1[i] - arr2[i];
    }
}