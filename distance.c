//WAP to find the distance between two point using 4 functions.
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
 
float distance(float x1, float x2, float y1, float y2)
{
    float distance;
    distance = sqrt((x1 - y1) * (x1 - y1) + (x2 - y2) * (x2 - y2));
    return distance;
}
float first_coordinate() 
{
    float  a, b;
    printf("\nEnter The Coordinates of Point A:\n");
    printf("\nX - Axis Coordinate: \t");
    scanf("%f", &a);
    printf("\nY - Axis Coordinate: \t");
    scanf("%f", &b);    
}
float second_coordinate() 
{
    float  c, d;
    printf("\nEnter The Coordinates of Point A:\n");
    printf("\nX - Axis Coordinate: \t");
    scanf("%f", &c);
    printf("\nY - Axis Coordinate: \t");
    scanf("%f", &d);    
}
float output(result)
float result ;
{
    printf("\nDistance between Points A and B: %f\n", result);
}

int main()
{
    float result, a, b, c, d;
    printf("\nEnter The Coordinates of Point A:\n");
    printf("\nX - Axis Coordinate: \t");
    scanf("%f", &a);
    printf("\nY - Axis Coordinate: \t");
    scanf("%f", &b);    
    printf("\nEnter The Coordinates of Point B:\n");
    printf("\nY - Axis Coordinate:\t");
    scanf("%f", &c);
    printf("\nY - Axis Coordinate: \t");
    scanf("%f", &d);
    result = distance(a, b, c, d);
    output(result);
    return 0;
}
