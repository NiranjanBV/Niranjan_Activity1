//Write a program to find the sum of n different numbers using 4 functions
#include <stdio.h>
int total_num()
{
    int n;
    printf("Enter the total number of numbers you would like to add\n");
    scanf("%d",&n);
    return n;
}

int numbers(int n, int a[n])
{
    printf("enter the elements you want to add\n");
    int i;
    for( i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    return 0;
}

int addition(int n, int a[n])
{
    int sum=0,i;
    for(i=0;i<n;i++) {
        sum = sum + a[i];
    }
    return sum;
}

int output(int n, int a[n], int sum)
{
    printf("The sum is %d",sum);
    return 0;
}

int main()
{
    int n,sum;
    n = total_num();
    int a[n];
    numbers(n,a);
    sum=addition(n,a);
    output(n,a,sum);
    return 0;
}
