//WAP to find the distance between two points using structures and 4 functions.
#include<stdio.h>
#include<math.h>

struct S1 
{
    float x, y;
};
typedef struct S1 Point;

Point input(int n)
{
    Point P;
    printf("Enter the value of x%d coordinate: ",n);
    scanf("%f", &P.x);
    printf("Enter the value of y%d coordinate: ",n);
    scanf("%f", &P.y); 
    return P;
} 

float Distance(Point P ,Point Q)
{
    float distance;
    distance = sqrt((P.x - Q.x) * (P.x - Q.x) + (P.y-Q.y) *(P.y-Q.y));
    return distance;
}
void output(Point P,Point Q,float distance)
{
    printf("Distance between point ( %f %f) and point ( %f %f) is  %f\n",P.x,P.y,Q.x,Q.y,distance); 
    return ;
}
int main()
{
    Point P,Q;
    float R ; 
    P = input(1);
    Q = input(2);
    R = Distance(P,Q);
    output(P,Q,R);
    
    return 0;
}

