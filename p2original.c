#include<stdio.h>

int input_side()
{
  int a;
  printf("enter a value\n");
  scanf("%d",&a);
}
int check_scalene(int a, int b, int c)
{

  if(a!=b&&b!=c&&c!=a)
  {
    return 1;
  }
  else
  {
    return 2;
  }
  return 3;
}
void output(int a,int b,int c,int isscalene)
{
  if(isscalene=1)
  printf("the triangle is scalene");
  else 
  printf("the triangle s not scalene");
}
int main()
{
  int a,b,c,isscalene;
  a=input_side();
  b=input_side();
  c=input_side();
  check_scalene(a,b,c);
  output(a,b,c,isscalene);
  return 0;
}