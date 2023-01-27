// Define a structure for representing a point in two-dimensional Cartesian co- ordinate
// system. Now, write a C program to perform the following tasks:
// a. Compute the distance between two given points. b. Compute the area of a triangle,
// given the co-ordinates of its three vertices.
#include <stdio.h>
#include <math.h>
#include <stdlib.h>
struct co_ordinate
{
    int x1, y1;
    int x2, y2;
    int x, y;
    int m, n;
    int a, b;
};
void distance_distance(struct co_ordinate dist);
void triangle_triangle(struct co_ordinate tri);
int main()
{
    struct co_ordinate distance;
    printf("ENTER CO-ORDINATES TO CALCULATE DISTANCE:\n");
    printf("enter x1,y1\n");
    scanf("%d %d", &distance.x1, &distance.y1);
    printf("enter x2,y2\n");
    scanf("%d %d", &distance.x2, &distance.y2);
    struct co_ordinate triangle;
    printf("ENTER CO-ORDINATES TO CALCULATE AREA OF A TRIANGLE:\n");
    printf("enter x1,y1\n");
    scanf("%d %d", &triangle.x, &triangle.y);
    printf("enter x2,y2\n");
    scanf("%d %d", &triangle.a, &triangle.b);
    printf("enter x3,y3\n");
    scanf("%d %d", &triangle.m, &triangle.n);
    distance_distance(distance);
    triangle_triangle(triangle);
    return 0;
}
void distance_distance(struct co_ordinate dist)
{
    float d = sqrt(((dist.x2 - dist.x1) * (dist.x2 - dist.x1)) + ((dist.y2 - dist.y1) * (dist.y2 - dist.y1)));
    printf("\n",d);
}
void triangle_triangle(struct co_ordinate tri)
{
    float area =0.5 * ((tri.x * (tri.b - tri.n)) + (tri.a * (tri.n - tri.y)) + (tri.m * (tri.y - tri.b)));
    printf("%f sq. units\n",area);
}