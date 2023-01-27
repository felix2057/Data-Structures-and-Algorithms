// Write a recursive program in C to print percentages from 1% to 50% of a integer
// number. User will ask to enter a number.
// Sample Input:
// N = 10
// Sample Output:
// 10*1/100, 10* 2/100, 10*3/100,…, 10*50/100
// 0.1,0.2, 0.3, …. , 5
#include <stdio.h>
void recur(int n, int i)
{
    float per;
    per = n * (i / 100.0);
    printf("%.1f, ", per);
    if (i < 50)
    {
        recur(n, i + 1);
    }
}
int main()
{
    int n;
    int i = 1;
    printf("Enter number : ");
    scanf("%d", &n);
    recur(n, 1);
}
