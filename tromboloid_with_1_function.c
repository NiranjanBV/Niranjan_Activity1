//Write a program to find the volume of a tromboloid using one function

#include<stdio.h>
float vol (float h,float d, float b);
int main ()
{
  float h, d, b;
  printf ("enter h,d,b in order");
  scanf ("%f %f %f", &h, &d, &b);
  float volume = vol (h, d, b);
  printf ("the volume of the tromboloid is %f", volume);
  return 0;
}

float vol (float h,float d, float b)
{
 return (0.333)*((h*d*b)+(d/b));
}
