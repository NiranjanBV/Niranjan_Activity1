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
  printf("Height(h) ?\n");
  h = input();
  printf("Breadth(b) ?\n");
  b = input();
  printf("Depth(d) ?\n");
  d = input();
  v=volume(h,b,d);
  output(v);
  return 0;
 }
