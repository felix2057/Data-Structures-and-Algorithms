//WAP to sort an array of n floats in an ascending order using selection sort
#include <stdio.h>
void selection_sort();
int a[30], n;
void main()
{
    int i;
    printf("\nEnter size of an array: ");
    scanf("%f", &n);
    printf("\nEnter elements of an array:\n");
    for(i=0; i<n; i++)
        scanf("%f", &a[i]);
    selection_sort();
    printf("\n\nAfter sorting:\n");
    for(i=0; i<n; i++)
        printf("\n%f", a[i]);
    getch();
}
void selection_sort()
{
    int i, j, min, temp;
    for (i=0; i<n; i++)
    {
        min = i;
        for (j=i+1; j<n; j++)
        {
            if (a[j] < a[min])
                min = j;
        }
        temp = a[i];
        a[i] = a[min];
        a[min] = temp;
    }
}