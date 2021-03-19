#include<stdio.h>

typedef struct {
    int num;
    int den;
}
fraction;

fraction input(int n) {
    fraction u;
    printf("Enter the value of the numerator %d:\n", n);
    scanf("%d", & u.num);
    printf("Enter the value of the denominator %d:\n", n);
    scanf("%d", & u.den);
    return u;
}

int gcd(int a, int b) {
    while (a!=b){
        if(a>b)
        a=a-b;
        else 
        b=b-a;
    }
    return a;
}

fraction answer(fraction first, fraction second) {
    fraction third;
    third.den = (first.den * second.den) ;
    third.num = (first.num) * (second.den) + (second.num) * (first.den);
    int common_factor = gcd(third.num, third.den);
    third.den = third.den / common_factor;
    third.num = third.num / common_factor;
    return third;
}
void output(fraction first, fraction second, fraction third) {
    printf("Addition of fraction (%d/%d) and (%d/%d) is (%d/%d) \n", first.num, first.den, second.num, second.den, third.num, third.den);

}

int main() {
    fraction first, second, sum;
    first = input(1);
    second = input(2);
    sum = answer(first, second);
    output(first, second, sum);
    return 0;
}
