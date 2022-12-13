//Write a program to find the area of a triangle.
#include <stdio.h>
void input(float base, float height);
void find_area(float base , float height, float *area);
void output(float base, float height, float area);

int main()
{
  float base,height;
  float area=0;
  input(base,height);
  return 0;
}
void input(float base, float height)
{
  float area;
  printf("Enter base of triangle: ");
  scanf("%f",&base);
  printf("Enter height of triangle: ");
  scanf("%f",&height);
  find_area(base,height,&area);
}
void find_area(float base , float height, float *area)
{
  *area = height*base/2;
  output(base,height,*area);
}
void output(float base, float height, float area)
{
  printf("The area of the traingle with base %f and height %f is %f",base,height,area);
}
