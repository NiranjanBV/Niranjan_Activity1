//WAP to find the distance between two points using structures and 4 functions.
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

struct Points 
{
    float x, y;
};
 
float distance(struct Points P, struct Points Q)
{
    float res ;
    res = sqrt((P.x - P.y) * (P.x - P.y) + (Q.x - Q.y) * (Q.x - Q.y));
    return res ;
}
 
int main()
{
    struct Points P, Q;
    printf("\nEnter The Coordinates of Point P:\n");
    printf("\nX - Axis Coordinate: \t");
    scanf("%f", &P.x);
    printf("\nY - Axis Coordinate: \t");
    scanf("%f", &P.y);  
    printf("\nEnter The Coordinates of Point Q:\n");
    printf("\nY - Axis Coordinate:\t");
    scanf("%f", &Q.x);
    printf("\nY - Axis Coordinate: \t");
    scanf("%f", &Q.y);
    printf("\nDistance between Points P and Q is %f\n", distance(P,Q));
    return 0;
}
