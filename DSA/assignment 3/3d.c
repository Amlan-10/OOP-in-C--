// 4.Write a program to replace every element in the dynamic array with the next greatest element present in the same array.

#include <stdio.h>
 
void nextGreatest(int arr[], int size)
{
  int max_from_right =  arr[size-1];

  arr[size-1] = -1;
 
  for(int i = size-2; i >= 0; i--)
  {
    int temp = arr[i];
 
    arr[i] = max_from_right;
 
    if(max_from_right < temp)
    {
       max_from_right = temp;
    }
  }
}
 
void printArray(int arr[], int size)
{
  int i;
  for (i=0; i < size; i++)
    printf("%d ", arr[i]);
  printf("\n");
}
 
int main()
{
  int arr[] = {18, 7, 14, 343, 985, 22};
  int size = sizeof(arr)/sizeof(arr[0]);
  nextGreatest (arr, size);
  printf ("The modified array is: \n");
  printArray (arr, size);
  return (0);
}
