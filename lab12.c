// Write a program in C to arrange the elements of a dynamic array such that all
// even numbers are followed by all odd numbers
#include <stdio.h>
#include <stdlib.h>

int main(void)
{

    int count,          /* integer amount from user     */
        odd_count = 0,  /* odd count (initialized zero) */
        even_count = 0, /* even count (initialized zero)*/
        *number,        /* declare pointers             */
        *evens,
        *odds;

    /* read in integer count from user (VALIDATE every input) */
    printf("enter the amount of numbers: ");
    if (scanf("%d", &count) != 1)
    {
        fputs("error: invalid integer input.\n", stderr);
        return 1;
    }

    /* allocate count integers each pointer (VALIDATE every allocation) */
    if ((number = malloc(count * sizeof *number)) == NULL)
    {
        perror("malloc-number");
        return 1;
    }
    if ((evens = malloc(count * sizeof *evens)) == NULL)
    {
        perror("malloc-evens");
        return 1;
    }
    if ((odds = malloc(count * sizeof *odds)) == NULL)
    {
        perror("malloc-odds");
        return 1;
    }

    for (int i = 0; i < count; i++)
    { /* loop count times for input */
        printf("enter number %2d: ", i + 1);
        if (scanf("%d", &number[i]) != 1)
        { /* validate EVERY input */
            fputs("error: invalid integer input.\n", stderr);
            return 1;
        }
        if (number[i] % 2 == 0) /* assign, increment evens count */
            evens[even_count++] = number[i];
        else /* same for odds */
            odds[odd_count++] = number[i];
    }

    puts("\n numbers\n--------"); /* output each array on its own */
    for (int i = 0; i < count; i++)
        printf("%8d\n", number[i]);

    puts("\n   evens\n--------");
    for (int i = 0; i < even_count; i++)
        printf("%8d\n", evens[i]);

    puts("\n    odds\n--------");
    for (int i = 0; i < odd_count; i++)
        printf("%8d\n", odds[i]);

    /* output all arrays together */
    puts("\nnumbers      even      odd\n-------- -------- --------");
    for (int i = 0; i < count; i++)
    { /* loop printing number */
        printf("%8d", number[i]);
        if (i < even_count)
        {                             /* if i < even_count */
            printf(" %8d", evens[i]); /* output evens */
            if (i < odd_count)        /* if odds too, output them */
                printf(" %8d\n", odds[i]);
            else
                putchar('\n'); /* no more odds output '\n' */
        }
        else if (i < odd_count) /* if only odds left, output */
            printf("%18d\n", odds[i]);
        else
            putchar('\n');
    }

    free(number); /* making the allocated space in memory */
    free(evens);
    free(odds);
}