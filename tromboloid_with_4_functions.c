//WAP to find the volume of a tromboloid using 4 functions.
#include <stdio.h>

float input()
{
    float x;
    scanf("%f",&x);
    return x;
}

float output(float v)
{
  printf("The volume of tromboloid is %f",v);
  return 0.0;
}

float volume(float h, float b, float d)
{
  float v;
  v = 0.3333 *((h*d*b)+(d/b));
  return v;
}

int main()
{
  float h,b,d,v;
  printf("Enter the Height(h) of the tromboloid ?\n");
  h = input();
  printf("Enter the Breadth(b) of the tromboloid?\n");
  b = input();
  printf("Enter theDepth(d) of the tromboloid ?\n");
  d = input();
  v=volume(h,b,d);
  output(v);
  return 0;
 }
