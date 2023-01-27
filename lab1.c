// WAP to prgram to find out the smallest, largest, average and sum of elements stored in the array of
// n integers
#include <stdio.h>
int main()
{
   float average;
   int i, n, count = 0, sum = 0, squaresum = 0, num, min, max;

   printf("Please enter the number of numbers you wish to evaluate\n");
   scanf("%d", &n);

   printf("Please enter %d numbers\n", n);

   scanf("%d", &num);
   max = min = num;

   while (1)
   {
      if (num > max)
         max = num;
      if (num < min)
         min = num;

      sum = sum + num;
      squaresum = squaresum + (num * num);

      count++;
      if (count == n)
         break;
      scanf("%d", &num);
   }
   average = 1.0 * sum / n;

   printf("Your average is %.2f\n", average);
   printf("The sum of your squares is %d\n", squaresum);

   printf("Your maximum number is %d\n", max);
   printf("Your minimum number is %d\n", min);

   return (0);
}