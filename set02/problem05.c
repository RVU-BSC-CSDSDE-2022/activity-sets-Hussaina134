 //Write a program to find GCD _(HCF)_ of two numbers.
 
#include <stdio.h>
int input();
int find_gcd(int a, int b);
void output(int a, int b, int gcd);

int main()
{
  int a,b,gcd;
  a = input();
  b = input();
  gcd = find_gcd(a,b);
  output(a,b,gcd);
  return 0;
}

int input()
{ 
  int a,b;
  printf("Enter a number:\n");
  scanf("%d",&a);
  printf("Enter a number:\n");
  scanf("%d",&b);
  return a,b;
}
int find_gcd(int a, int b)
{ 
    int hcf,count=0;
  for (int i = 1; i <= a || i <= b; i++)
    {
      if (a % i == 0 && b % i == 0)
        hcf = i;
          {
    count = count + 1;
  } }
  return count;
}
void output(int a, int b, int gcd)
{
  if (gcd == 2){
    printf("The HCF of %d and %d is %d.",a,b,gcd);
  }
  else 
    printf("The GCD of %d and %d is %d.",a,b,gcd);
}