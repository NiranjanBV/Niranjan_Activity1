//Write a program to add two user input numbers using one function.
#include <stdio.h> 
float add(float a , float b);

int main()
{
    float a , b, c;
    printf("enter 1st number");
   scanf(" %f",&a);
   printf("enter 2nd number");
   scanf("%f",&b);
   c = add(a,b);
   printf(" Sum of %f and %f is %f",a,b,c);
   return 0;
}
float add(float a , float b)
{
    float sum;
    sum = a + b;
    return sum ;
}
