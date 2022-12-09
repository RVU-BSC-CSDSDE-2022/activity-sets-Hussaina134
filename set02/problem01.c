//Write a program to find the area of a triangle.
#include <stdio.h>
void input(float base, float height);
void find_area(float base , float height, float *area);
void output(float base, float height, float area);

int main()
{
  float base,height;
  float area=0;
  find_area(base,height,&area);
  output(base,height,area);
  return 0;
}
void input(float base, float height)
{
  printf("Enter base of triangle: ");
  scanf("%f",&base);
  printf("Enter height of triangle: ");
  scanf("%f",&height);
  
}
void find_area(float base , float height, float *area)
{
  *area = height*base/2;
}
void output(float base, float height, float area)
{
  printf("The area of the traingle with base %f and height %f is %f",base,height,area);
}
