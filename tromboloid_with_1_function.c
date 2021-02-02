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
  float form1 = h * b * d;
  float form2 = d / b;
  float form3 = form1 + form2;
  float form4 = form3 / 3;
  return form4;
}
