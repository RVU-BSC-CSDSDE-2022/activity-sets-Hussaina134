//Write a program to find if a triangle is scalene.
#include <stdio.h>
int input_side();
int check_scalene(int a, int b, int c);
void output(int a, int b, int c, int isscalene);

int main()
{
  int a,b,c;
  int result;
  a = input_side();
  b = input_side();
  c = input_side();
  result = check_scalene(a,b,c);
  output(a,b,c,result);
}
int input_side()
{
  int a;
  printf("Enter sides: ");
  scanf("%d",&a);
 return a;
}
int check_scalene(int a, int b, int c)
{
	if ((a==b) || (b==c) || (c==a)){
    return 1;
} 
  else{
  return 2;}
}
void output(int a, int b, int c, int result)
  {
   if(result==1){
     printf("The triangle with sides %d %d and %d is not a scalene triangle",a,b,c);}
    else if(result==2){
     printf("The triangle with sides %d %d and %d is a scalene triangle",a,b,c);}
  }


