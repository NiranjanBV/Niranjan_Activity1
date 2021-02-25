//WAP to find the sum of n fractions.
#include <stdio.h>
struct fraction{
    int numerator[100];
    int denominator[100];
}frac;
void answer(int n, int numer[],int denom[])
{
    int result_num = 0;
    int result_denom = lcm(denom, n);
    for (int i = 0; i < n; i++) {
        result_num = result_num+ (numer[i]) * (result_denom/ denom[i]);
    }
    int gcd = GCD(result_num,result_denom);
 
    result_num =result_num/ gcd;
    result_denom = result_denom/gcd;
    printf("The answer is %d/%d", result_num,result_denom);
}
int lcm(int array[], int n)
{
    int x = array[0];
    for (int i = 1; i < n; i++) {
        x = ((array[i] * x)/ GCD(array[i], x));
    }
    return x;
}
int GCD(int a, int b)
{
    if (b == 0) 
    {
        return a;
    }
 
    return GCD(b, a % b);
}
int main()
{
    int n;
    printf("Enter number of fractions: ");
    scanf("%d", &n);
    int numer[n],denom[n];
    for(int i=0;i<n;i++)
    {
        printf("Enter numerator of %d fraction",(i+1));
        scanf("%d", &frac.numerator[i]);
        printf("Enter denominator of %d fraction",(i+1));
        scanf("%d", &frac.denominator[i]);
    }
    answer(n, frac.numerator, frac.denominator);
    return 0;
}
