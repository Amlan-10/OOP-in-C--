#include <stdio.h>
#include <stdlib.h>
int main()
{
int rows, columns, **list;
printf("\n Enter the no of rows and columns:");
scanf("%d %d", &rows, &columns);
if (rows < 1 || columns <1)
{
printf("Incorrect Value");
return;
}
list = (int **) malloc(rows * sizeof(int *));
if (!list)
{
printf("Insufficient Memory");
return;
}
for (int i=0; i<rows; ++i)
{
list[i] = (int *) malloc(columns * sizeof(int));
}
if (!list)
{
printf("Insufficient Memory");
return;
}
/* Allow the users to enter values and then display it*/
/* print the values */
free(list);
return 0; 
}