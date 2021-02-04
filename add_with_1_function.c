//Write a program to add two user input numbers using one function.
#include <stdio.h> 

int main()
{
    float a , b, c;
    printf("enter 1st number");
   scanf(" %f",&a);
   printf("enter 2nd number");
   scanf("%f",&b);
   c = a + b;
   printf(" Sum of %f and %f is %f",a,b,c);
}
