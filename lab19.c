// Write a program in C to find the largest number and counts the occurrence of the
// largest number in a dynamic array of n integers using a single loop.
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <ctype.h>

int main()
{
   int count = 1;
   int position = 0;
   int arrayNum[0];
   int max = arrayNum[0];
   int N = 15;
   int pos;
   int p;

   for (p = 1; p < N; ++p)
   {
      if (arrayNum[p] > max) // Find a bigger number
      {
         max = arrayNum[p];
         pos = p;
         count = 1;
      }
      else if (arrayNum[p] == max) // Another occurrences of the same number
         count++;
   }
   printf("Max element in the array in the location %d and its value %d\n", position, max);

   for (p = 0; p < 15; p++)
   {
      if (arrayNum[p + 1] == arrayNum[p])
         continue;
      else
         printf("Number %d: %d occurences\n", arrayNum[p]);
   }
   return 0;
}
