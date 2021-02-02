//Write a program to add two user input numbers using 4 functions.
#include<stdio.h>
int number1();
int number2();
int sum(float,float);

void main()
{
    float a = number1();
    float b = number2();
    float c = sum(a,b);
    printf("The sum of %f and %f is:- %f",a,b,c);
}
int number1()
{
    float x;
    printf("Enter first number:-");
    scanf("%f",&x);
    return x;
}

int number2()
{
    float y;
    printf("Enter second number:-");
    scanf("%f",&y);
    return y;
}
int sum(float p, float q)
{
    float f = p+q;
    return f;
}
