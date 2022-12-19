 // 6.WAP to sort rows of a dynamic matrix having m rows and n columns in ascending and columns in descending order.

#include <stdio.h>
#include <stdlib.h>

void main()
{
    int **array1, **array2;
    array1 = malloc(10 * sizeof(array1));
    for (int i = 0; i < 10; i++)
    {
        array1[i] = malloc(10 * sizeof(array1));
    }
    array2 = malloc(10 * sizeof(array2));
    for (int i = 0; i < 10; i++)
    {
        array2[i] = malloc(10 * sizeof(array2));
    }

    int x, m, n;
    printf("\nEnter the order of the matrix [m X n] : ");
    scanf("%d %d", &m, &n);

    printf("\nEnter the co-efficients of the matrix [m X n] : \n");
    for (int i = 0; i < m; ++i)
    {
        for (int j = 0; j < n; ++j)
        {
            scanf("%d", &array1[i][j]);
            array2[i][j] = array1[i][j];
        }
    }

    printf("The given matrix [m X n] is : \n");
    for (int i = 0; i < m; ++i)
    {
        for (int j = 0; j < n; ++j)
        {
            printf("%d  ", array1[i][j]);
        }
        printf("\n");
    }

    printf("After arranging rows in ascending order of matrix [m X n] : \n");
    for (int i = 0; i < m; ++i)
    {
        for (int j = 0; j < n; ++j)
        {
            for (int k = (j + 1); k < n; ++k)
            {
                if (array1[i][j] > array1[i][k])
                {
                    x = array1[i][j];
                    array1[i][j] = array1[i][k];
                    array1[i][k] = x;
                }
            }
        }
    }

    for (int i = 0; i < m; ++i)
    {
        for (int j = 0; j < n; ++j)
        {
            printf("%d  ", array1[i][j]);
        }
        printf("\n");
    }

    printf("After arranging the columns in descending order of matrix [m X n] : \n");
    for (int j = 0; j < n; ++j)
    {
        for (int i = 0; i < m; ++i)
        {
            for (int k = i + 1; k < m; ++k)
            {
                if (array2[i][j] < array2[k][j])
                {
                    x = array2[i][j];
                    array2[i][j] = array2[k][j];
                    array2[k][j] = x;
                }
            }
        }
    }

    for (int i = 0; i < m; ++i)
    {
        for (int j = 0; j < n; ++j)
        {
            printf("%d  ", array2[i][j]);
        }
        printf("\n");
    }

    free(array1);
    free(array2);
}