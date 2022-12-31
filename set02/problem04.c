//Write a program to find Sum of composite number in an array of different numbers entered by the user.

#include <stdio.h>
int input_array_size();
void input_array(int n, int a[n]);
int sum_composite_numbers(int n, int a[n]);
void output(int sum);

int main()
{
  int n,sum;
  int i;
  n = input_array_size();
  input_array(n,a[i]);
  sum = sum_composite_numbers(n,a[n]);
  output(sum);
  return 0;
}
int input_array_size()
{
  int n;
  printf("Enter the size of array:");
  scanf("%d",&n);
  return n;
}
void input_array(int n, int a[n])
{
  int i;
  for(i=0;i<n;i++){
    printf("Enter a number:",i+1);
    scanf("%d",&a[i]);
  }
}
int sum_composite_numbers(int n, int a[n])
{
  int i,sum=0;
  for(i=0;i<n;i++){
    if(is_composite(a[i])){
      sum = sum+a[i];
    }
  }
}
void output(int sum)
{
  if(sum==0){
    printf("No composite numbers in array.");
  }
  else{
    printf("Sum of composite numbers in array is %d",sum);
  }
}
