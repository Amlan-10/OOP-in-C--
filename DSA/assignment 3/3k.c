// 11.WAP
// to arrange the elements of a dynamic array such that all even numbers
// are followed by all odd numbers using a single loop.
#include <stdio.h>
#include <stdlib.h>
int main()
{
    int n, j = 0, i = 0;
    printf("Enter the number of elements: ");
    scanf("%d", &n);
    int *a;
    a = malloc(n * sizeof(a));
    printf("Enter the array elements : \n");
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
    printf("All Even Numbers followed by All Odd Numbers : ");
    while(i<n)
    {
        while (j < n)
        {
            if (a[j] % 2 == 0)
            {
                printf("%d ", a[j]);
            }
            j++;
        }
        if (a[i] % 2 == 1)
        {
            printf("%d ", a[i]);
        }
        i++;
    }
    free(a);
    return 0;
}