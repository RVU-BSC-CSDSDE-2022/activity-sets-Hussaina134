//Write a program to check if the given number is prime.

#include<stdio.h>

int input_number();
int is_prime(int n);
void output(int n, int result);

int main()
{
  int n,result;
  n = input_number();
  result = is_prime(n);
  output(n,result);
}
int input_number()
{
  int n;
  printf("Enter a number:");
  scanf("%d",&n);
  return n;
}
int is_prime(int n)
{
  //for (int i = 0; i % 2; i++)
}
void output(int n, int result)
{
  if (n %< 2) {
    printf("It is not a prime number.");
  }
  else 
    printf("It is a prime number.");
}