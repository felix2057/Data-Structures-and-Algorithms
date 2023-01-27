// 1. Write a program in C to check a given string is palindrome or not by using a
// dynamic array of n characters.
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void)
{
    // str holds raw input
    // str_san holds sanitized input
    char *str = (char *)malloc(50), *str_san;
    // i and k are the index counters
    // len is the length of the sanatized string
    int i = 0, k = 0, len;

    // get a string from the user
    printf("Enter a message: \n");
    // store it in str
    scanf("%s", str);

    // make str_san as small as possible
    str_san = (char *)malloc(strlen(str) + 1);

    // copy only letters into the sanitized string
    while (str[i] != '\0')
    {
        if (str[i] >= 'A' && str[i] <= 'Z')
        {
            str_san[k] = str[i] + 32; // changes uppercase to lowercase
            k++;
        }

        if (str[i] >= 'a' && str[i] <= 'z')
        {
            str_san[k] = str[i];
            k++;
        }

        i++;
    }

    // str is no longer needed
    free(str);

    // terminate sanitized string
    str_san[k] = '\0';

    // set len to the length of str_san
    len = strlen(str_san);

    // check for palindrominess
    for (i = 0; i < len; i++)
    {
        // if the first letter does not equal the last letter then it's not a palindrome
        if (str_san[i] != str_san[len - i - 1])
        {
            printf("not a palindrome");
            return 0;
        }
    }

    // it is now safe to free str_san
    free(str_san);

    // if we've made it this far, it's a palindrome
    printf("Palindrome");

    return 0;
}