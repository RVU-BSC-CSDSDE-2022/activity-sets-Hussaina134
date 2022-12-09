//Write a C program to find the square root of a number.
#include <stdio.h>
#include <math.h>

float input();
float square_root(float n);
void output(float n, float sqrroot);

int main()
{
  float n,sqrroot;
  n = input();
  sqrroot = square_root(n);
  output (n,sqrroot);
}

float input()
{
  float x;
  printf("Enter a number:\n");
  scanf("%f",&x);
  return(x); 
}
float square_root(float n)
{
   printf("%f\n", sqrt(n));
}
void output(float n, float sqrroot)
{
  printf("The square root of %f is %f",n,sqrt(n));
}