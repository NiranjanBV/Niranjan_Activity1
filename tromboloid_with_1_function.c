//Write a program to find the volume of a tromboloid using one function

#include<stdio.h>
int vol(int h , int d , int b);
int main();
    {
    int h , int d , int b;
printf("enter h,d,b in order");
    scanf("%d,%d,%d",&h,&d,&b);
    int volume = vol(h,d,b);
    printf("the volume of the tromboloid is %d", volume); 
    return 0;
   }
int vol(int h , int d , int b);
{
 return 1/3 * ((h * d * b ) + (d / b));
} 
