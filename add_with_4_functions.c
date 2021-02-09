//Write a program to add two user input numbers using 4 functions.
#include <stdio.h>

float sum(float a, float b)
{
   float sum;
    sum = a+b;
    return sum;
}

float input()
{
    float n;
    printf("Enter the numbers:\n");
    scanf("%f",&n);
    return n;
}

float output(float x, float y, float z)
{
    printf("The sum of %f and %f is %f",x,y,z);
    return 0.0;
}

int main()
{
    float a,b,result;
    a=input();
    b=input();
    result= sum(a,b);
    output(a,b,result);
    return 0;
}
