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
  return 0;
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
  int count = 0;
for (int i = 1; i <= n;i++){
  if (n % i == 0)
  {
    count = count + 1;
  }
  }
  return count;
}
void output(int n, int result)
{
  if (result == 2) {
    printf("It is a prime number.");
  }
  else 
    printf("It is not a prime number.");
}