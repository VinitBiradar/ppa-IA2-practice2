#include<stdio.h>
void input(float *base,float *height)
{
  printf("enter the base and height of triangle: ");
  scanf("%f%f",base,height);
}
void find_area(float base,float height,float *area)
{
  
  *area= 0.5*base*height;
  
  }
void output(float base,float height,float area)
{
  printf("area of triangle %f with %f is %f",base,height,area);
}
int main()
{
  float base,height;
  input(&base,&height);
  float area;
  find_area(base,height,&area);
  output(base,height,area);
  return 0;
}