// WAP to program to read an array of integers and search for the element using linear search
#include <stdio.h>
int main()
{
    int a[20], i, x, n;
    printf("Enter the number of elements you want to print in an array\n");
    scanf("%d", &n);
    printf("Enter the elements of the array\n");
    for (i = 0; i < n; ++i)
        scanf("%d", &a[i]);
    printf("Enter element to search:\n");
    scanf("%d", &x);
    for (i = 0; i < n; ++i)
        if (a[i] == x)
            break;
    if (i < n)
        printf("Element found at index %d", i);
    else
        printf("Element couldn't be found");
    return 0;
}
