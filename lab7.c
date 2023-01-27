//WAP to print the next greater element (NGE) for every element. 
//The next greater element for an element x is the first greater element on the right side of x 
//in array. Elements for which no greater element exist, consider next greater element as -1. 
#include<stdio.h>
  
/* prints element and NGE pair for all elements of
arr[] of size n */
void printNGE(int arr[], int n)
{
    int next, i, j;
    for (i=0; i<n; i++)
    {
        next = -1;
        for (j = i+1; j<n; j++)
        {
            if (arr[i] < arr[j])
            {
                next = arr[j];
                break;
            }
        }
        printf("%d -- %dn", arr[i], next);
    }
}
  
int main()
{
    int arr[]= {11, 13, 21, 3};
    int n = sizeof(arr)/sizeof(arr[0]);
    printNGE(arr, n);
    return 0;
}