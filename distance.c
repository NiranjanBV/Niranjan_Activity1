//WAP to find the distance between two point using 4 functions.
#include <stdio.h>
#include <math.h>

int main()
{
int distance ;
int x1 , y1 , x2 , y2 ;
printf("enter the coordinates of 1st point"); 
scanf("%d %d", &x1 , &y1);
printf("enter the coordinates of 2nd point");
scanf("%d %d", &x2 , &y2);
distance = sqrt((x1 - y1) * (x1 - y1) + (x2 - y2) * (x2 - y2));
printf("distance = %d ", distance);
}
