//Write a program to add two user input numbers using one function.
#include <stdio.h> 
int add(int a , int b);

int main()
{
    int a , b, c;
   scanf(" %d, %d" , &a , &b ) ;
   c = add( a+b);
   printf(" Sum of %d and %d is %d " a,b,c );
   return 0
}
int add(int a , int b)
{
    int sum;
    sum = a + b;
    return sum ;
}
