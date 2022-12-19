//WAP to find the largest number and counts the occurrence of the largest number in a dynamic array of n integers using a single loop.
#include <stdio.h>
 
int main()
{
    int size, i, largest,count=0;
    printf("\n Enter the size of the array: ");
    scanf("%d", &size);
    int array[size];
    for (i = 0; i < size; i++)
    {   
        printf("Element %d: ",i+1);
        scanf("%d", &array[i]);
    }
    largest = array[0];
    for (i = 1; i < size; i++) 
    {
        if (largest < array[i])
        {
            largest = array[i];
            count=0;
        }
        if(largest == array[i])
         count++;
    }
    printf("Largest element present in the given array is : %d\n", largest);
    printf("Occurrence of the largest number in a dynamic array is : %d\n",count);
    return 0;
}