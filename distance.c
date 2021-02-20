//WAP to find the distance between two point using 4 functions.
#include<stdio.h>
#include <math.h>
float input(char *i,int *j)
{
    float u;
    printf("Enter the value of %c%d coordinate: ",*i,*j);
    scanf("%f",&u);
    return u;
}
float distance(float x1,float x2,float y1,float y2){
    float distance = sqrt((x2 - x1) * (x2 - x1) + (y2 - y1) * (y2 - y1));
    return distance;
}
void output(float x1,float x2,float y1,float y2,float distance)
{
   
    printf("Distance between (%f,%f) and (%f,%f) points is %f ",x1,y1,x2,y2,distance);
    
}
int main()
{
    char a = 'x',b = 'y' ;
    int c = 1,d = 2;
    float x1,y1,x2,y2,res;
    x1=input(&a,&c);
    y1=input(&b,&c);
    x2=input(&a,&d);
    y2=input(&b,&d);
    res=distance(x2,x1,y2,y1);
    output(x1,x2,y1,y2,res);
    return 0;
}
