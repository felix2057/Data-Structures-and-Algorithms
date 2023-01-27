// Write a program in C to add two distances (in km-meter) by passing structure to
// a function.
#include <stdio.h>

struct Distance
{
    int kilometer;
    float meter;
} d1, d2, result;

int main()
{
    // take first distance input
    printf("Enter 1st distance\n");
    printf("Enter kilometer: ");
    scanf("%d", &d1.kilometer);
    printf("Enter meter: ");
    scanf("%f", &d1.meter);

    // take second distance input
    printf("\nEnter 2nd distance\n");
    printf("Enter kilometer: ");
    scanf("%d", &d2.kilometer);
    printf("Enter meter: ");
    scanf("%f", &d2.meter);

    // adding distances
    result.kilometer = d1.kilometer + d2.kilometer;
    result.meter = d1.meter + d2.meter;

    // convert inches to feet if greater than 12
    while (result.meter >= 1000.0)
    {
        result.meter = result.meter - 1000.0;
        ++result.kilometer;
    }
    printf("\nSum of distances = %d\'-%.1f\"", result.kilometer, result.meter);
    return 0;
}