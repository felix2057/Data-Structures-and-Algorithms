// WAP to read an array of elements and search for an element using binary search
//  Binary Search in C

#include <stdio.h>

int Searchbinary(int array[], int x, int start, int end)
{
    while (start <= end)
    {
        int mid = start + (end - start) / 2;

        if (array[mid] == x)
            return mid;

        if (array[mid] < x)
            start = mid + 1;

        else
            end = mid - 1;
    }

    
}

int main(void)
{   int array[20],i,z,x, value;
    int n = sizeof(array) / sizeof(array[0]);
    printf("Enter the number of elements you want to print in an array\n");
    scanf("%d", &z);
    printf("Enter the elements of the array\n");
    for (i = 0; i < z; ++i)
        scanf("%d", &array[i]);
    printf("Enter element to search:\n");
    scanf("%d", &value);
    value = Searchbinary(array, x, 0, n - 1);
    if (value == -1)
        printf("Element couldn't be found");
    else
        printf("Element is found at index %d", value);
    return 0;
}