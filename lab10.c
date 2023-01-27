// Let A be square dynamic matrix. WAP by using appropriate user defined functions
// for the following:
// a) Find the number of nonzero elements in A
// b) Find the sum of the elements above the leading diagonal.
// c) Display the elements below the minor diagonal. d) Find the product of the diagonal
#include <stdio.h>
int non_zero(int n, int a[n][n]);
int leading_diagonal(int n, int a[n][n]);
void minor_diagonal(int n, int a[n][n]);
void diagonal_product(int n, int a[n][n]);
int main()
{
    int n, i, j;
    printf("enter no. of elements\n");
    scanf("%d", &n);
    int a[n][n];
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n; j++)
        {
            printf("Enter element of index %d,%d:", i, j);
            scanf("%d", &a[i][j]);
        }
    }
    printf("MATRIX:\n");
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n; j++)
        {
            printf("%d \t", a[i][j]);
        }
        printf("\n");
    }
    int k = non_zero(n, a);
    printf("NUMBER OF NON-ZERO ELEMENTS:%d\n", k);
    int l = leading_diagonal(n, a);
    printf("SUM OF ELEMENTS ABOVE LEADING DIAGONAL:%d\n", l);
    minor_diagonal(n, a);
    diagonal_product(n, a);
    return 0;
}
int non_zero(int n, int a[n][n])
{
    int i, j, z = 0, c = 0;
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n; j++)
        {
            if (a[i][j] == 0)
                c++;
            else
                z++;
        }
    }
    return z;
}
int leading_diagonal(int n, int a[n][n])
{
    int i, j, s = 0;
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n; j++)
        {
            if (i <= j)
            {
                s += a[i][j];
            }
        }
    }
    return s;
}
void minor_diagonal(int n, int a[n][n])
{
    printf("ELEMENTS BELOW MINOR DIAGONAL ARE:\n");
    int i, j;
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n; j++)
        {
            if ((i + j) >= (n - 1))
                printf("%d ", a[i][j]);
            else
                printf(" ");
        }
        printf("\n");
    }
}
void diagonal_product(int n, int a[n][n])
{
    int i, j, m = 1;
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n; j++)
        {
            if ((i == j) || ((i + j) == (n - 1)))
                m *= a[i][j];
        }
    }
    printf("\nPRODUCT OF LEADING DIAGONAL AND MINOR DIAGONAL ELEMENTS ARE:%d\n", m);
    return 0;
}