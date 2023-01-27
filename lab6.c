// Given an unsorted dynamic array of size n, WAP to find and display the number of 
//elements between two elements a and b (both inclusive)
#include <stdio.h>

int main(void) 
{
    int arr1[] = { 1, 2, 2, 7, 5, 4 };
    size_t n = sizeof( arr1 ) / sizeof( *arr1 );
    
    int a = 2, b = 5;
    
    size_t count = 0;
    int lower_limit = 0, upper_limit = 0;
    
    for ( size_t i = 0; i < n; i++ )
    {
        if ( a <= arr1[i] && arr1[i] <= b )
        {
            ++count;
            lower_limit |= arr1[i] == a;
            upper_limit |= arr1[i] == b;
        }
    }
    
    count += !lower_limit + !upper_limit;
    
    printf( "Number of elements between %d and %d is %zu\nv", a, b, count );
    
    a = 6; b = 15;
    
    count = 0;
    lower_limit = 0; upper_limit = 0;
    
    for ( size_t i = 0; i < n; i++ )
    {
        if ( a <= arr1[i] && arr1[i] <= b )
        {
            ++count;
            lower_limit |= arr1[i] == a;
            upper_limit |= arr1[i] == b;
        }
    }
    
    count += !lower_limit + !upper_limit;
    
    printf( "Number of elements between %d and %d is %zu\n", a, b, count );
    
    return 0;
}