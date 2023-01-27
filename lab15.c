// Write a program in C by using appropriate user defined functions for the
// following:
// b) Find the largest element above the leading diagonal.
// c) Swap the major diagonal element to the minor diagonal element.
#include <stdio.h>
int main()
{
    int array1[10][10], i, j, m, n, sum = 0;
    printf("Enter no. of rows :: ");
    scanf("%d", &m);
    printf("\nEnter no. of cols :: ");
    scanf("%d", &n);
    printf("\nEnter values to the matrix :: \n");
    for (i = 0; i < m; i++)
    {
        for (j = 0; j < n; j++)
        {
            scanf("%d", &array1[i][j]);
        }
    }
    printf("\nThe Diagonals elements of a matrix are :: \n\n");
    /*check condition to print diagonals, matrix must be square matrix*/
    if (m == n)
    {
        /*print diagonals*/
        for (i = 0; i < m; i++)
        {
            for (j = 0; j < n; j++)
            {
                if (i == j)
                    printf("\t%d", array1[i][j]); /*print elements*/
                else
                    printf("\t"); /*print space*/
            }
            printf("\n\n"); /*after each row print new line*/
        }
    }
    else
    {
        printf("\nMatrix is not a Square Matrix.");
    }
    int k = 1;
    int max = array1[0][0];
    while (k != n)
    {
        if (max < array1[k][k])
            max = array1[k][k];
        k++;
    }
    printf("the Largest Number in leading diagonal is %d\n", max);
    for (int p = 0; p < m; p++)
    {
        int temp = array1[p][p];
        array1[p][p] = array1[p][(n - p) - 1];
        array1[p][(n - p) - 1] = temp;
    }

    printf("Matrix After Swapping Diagonals\n");
    for (i = 0; i < m; i++)
    {
        for (j = 0; j < n; j++)
        {
            printf("%d ", array1[i][j]);
        }
        printf("\n");
    }

    return 0;
}