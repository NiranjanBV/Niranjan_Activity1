//WAP to find the sum of n fractions.
#include <stdio.h>
struct fractions
{ 
  int num,denom;
};
int num_of_frac()
{
  int n;
  printf("enter the number of fractions");
  scanf("%d",&n);
return n;
}
int input_frac(n)
{
  struct fractions frac[n];
  for( i = 1 ; i <= n ; i++)
   {
      printf("enter numerator for fraction %d",i);
      scanf("%d",&frac[i].num);
      printf("enter denominator for fraction %d",i);
      scanf("%d",&frac[i].denom);
    }
addition(frac[n])
}
lcm = LCM(frac[n]);
void sum(struct fractions frac[n] )
{
for(i = 1 ; i <= n ; i++)
{
frac[i].denom = lcm;
frac[i].num = frac[i].num * lcm / frac[i].denom;
}
result(frac[n])
}
void result(struct frac[n])
{
printf("the sum of %d fractions is %d/%d",frac[i].num,frac[i].denom);
}
int main()
{
  int n = num_of_frac();
  input_frac()
  sum()
  result()
}
