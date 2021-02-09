//WAP to find the sum of two fractions.
#include <stdio.h>
struct input 
{
float first_fraction , second_fraction;
};
float answer(struct input S1)
{
float sum;
sum = S1.first_fraction + S1.second_fraction;
return sum;
}
float main()
{
struct input S1;
printf("enter the value of first fraction :");
scanf("%f",&S1.first_fraction);
printf("enter the value of second fraction :");
scanf("%f",&S1.second_fraction);
printf("the sum of %f and %f is %f ",S1.first_fraction,S1.second_fraction , answer(S1));
}
