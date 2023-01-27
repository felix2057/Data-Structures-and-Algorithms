// WAP to find the frequncy of numbers in an array
#include <stdio.h>

int main()
{

    int a, b, size, count, arr[10], occr[10];

    printf("Enter number of elements you want to store in an array: ");
    scanf("%d", &size);

    printf("Enter elements of array: ");
    for (a = 0; a < size; a++)
    {
        scanf("%d", &arr[a]);
    }

    for (a = 0; a < size; a++)
    {
        count = 1;
        for (b = a + 1; b < size; b++)
        {

            if (arr[a] == arr[b])
            {
                count++;

                occr[b] = 0;
            }
        }

        if (occr[a] != 0)
        {
            occr[a] = count;
        }
    }
 
    printf("\noccurance of all elements of array : \n");
    for (a = 0; a < size; a++)
    {
        if (occr[a] != 0)
        {
            printf("%d - %d times\n", arr[a], occr[a]);
        }
    }

    return 0;
}