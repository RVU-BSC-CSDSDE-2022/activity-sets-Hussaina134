//Write a program to find if a triangle is scalene.
#include <stdio.h>
int input_side();
int check_scalene(int a, int b, int c);
void output(int a, int b, int c, int isscalene);

int main()
{
  int a,b,c;
  int result = 0;
  a = input();
  b = input();
  c = input();
  result = check_scalene(a,b,c);
  output(a,b,c,isscalene);
}
int input_side()
{
  int a,b,c;
  printf("Enter side a: ");
  scanf("%d\n",&a);
  printf("Enter side b: ");
  scanf("%d\n",&b);
  printf("Enter side c: ");
  scanf("%d",&c);
  return a,b,c;
}
int check_scalene(int a, int b, int c)
{
	if ((a==b) && (a==c)){
    return 1;
}
{
	else ((b==a) && (b==c)){
    return 2;
}
{
	if ((c==a) && (c==b)){
    return 3;
}
{
  else 
  return 4;
}
void output(int a, int b, int c, int isscalene)
  {
   if(result==1)
    printf("%d is not a scalene triangle",a);
  if(result==2)
     printf("%d is not a scalene triangle",b);
    if(result==3)
     printf("%d is not a scalene triangle",c);
    else
     printf("%d is a scalene triangle",isscalene);
  }


