// 10.WAP
// to swap all the elements in the 1st column with all the corresponding
// elements in the last column, and 2nd column with the second last column
// and 3rd with 3rd last etc. of a 2-D dynamic array. Display the matrix.

#include <stdio.h>
#include <stdlib.h>
int main()
{
    int **mat, row, col, i, j, temp;
    printf("Enter the number of rows: ");   
    scanf("%d", &row);
    mat = (int **)malloc(row * sizeof(int *));
    printf("Enter the number of coloumns: ");
    scanf("%d", &col);
    for (i = 0; i < row; i++) 
    {
        mat[i] = (int *)malloc(col * sizeof(int));
    }
    printf("Enter the elements in matrix:\n");
    for (i = 0; i < row; i++)
    {
        for (j = 0; j < col; j++)
        {
            printf("Enter the value in [%d][%d] position: ", i, j);
            scanf("%d", &mat[i][j]);
        }
    }
    printf("THE MATRIX IS:\n");
    for (i = 0; i < row; i++)
    {
        for (j = 0; j < col; j++)
        {
            printf("%d\t", mat[i][j]);
        }
        printf("\n");
    }

    for (i = 0; i < row / 2; i++)
    {
        for ( j = 0; j < col; j++)
        {
            temp = mat[j][i];
            mat[j][i] = mat[j][col - i - 1];
            mat[j][col - i - 1] = temp;
        }
    }
    printf("THE MODIFIED MATRIX IS:\n");
    for (i = 0; i < row; i++)
    {
        for (j = 0; j < col; j++)
        {
            printf("%d\t", mat[i][j]);
        }
        printf("\n");
    }

    return 0;
}