//Write a program to find the sum of n different numbers using 4 functions
#include<stdio.h>

int main()
{
    int n, sum = 0, i, array[n];

    printf("Enter the number of integers you want to add: ");
    scanf("%d", &n);

    printf("Enter %d integers ", n);

    for(i = 0; i < n; i++)
    {
        scanf("%d", &array[i]);
        sum += array[i];   
    }

    printf("Sum = %d", sum);
    return 0;
}
