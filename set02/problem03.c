//Write a program find whether a number is a composite number
#include <stdio.h>
int input_number();
int is_composite(int n);
void output(int n, int result);

int main()
{
  int n,result;
  input_number();
  result = is_composite(n);
  output(n,result);
  return 0;
}
int input_number()
{
int n;
printf("Enter a number:\n");
scanf("%d",&n);
  return n;
}
int is_composite(int n)
{
  int count = 0;
for (int i = 1; i <= n;i++)
  if (n % i == 0)
  {
    count = count + 1;
  }
  return count;
}
void output(int n, int result)
{
  if (result == 2){
  printf("%d is a prime number.", result);}
  else 
    printf("%d number is a composite number.",result);
  
}