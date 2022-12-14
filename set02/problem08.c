//Write a program to find the triangle with smallest area in n given triangles.
#include <stdio.h>
typedef struct _triangle {
	float base, altitude, area;
} Triangle;
int input_n();
Triangle input_triangle();
void input_n_triangles(int n, Triangle t[n]);
void find_area(Triangle *t);
void find_n_areas(int n, Triangle t[n]);
Triangle find_smallest_triangle(int n, Triangle t[n]);
void output(int n, Triangle t[n], Triangle smallest);

int main()
{
  int n;
  n=input_n();
  Complex t[n];
  input_n_triangles(n,t);
}
int input_n()
{
 int n;
  printf("Enter the number of the array.\n");
  scanf("%d",&n);
  return n;
}
Triangle input_triangle()
{
  Triangle t;
  printf("Enter base,altitude:\n");
  scanf("%d%d",&t.base,&t.altitude);
  return t;
}
void input_n_triangles(int n, Triangle t[n])
{
  for (int i=0 ; i<n ; i++)
    {
      t[i] = input_triangle();
    }
}
void find_area(Triangle *t)
{
   //Complex *area;
  t->area = ((t->base * t->altitude))*0.5;
  //return *area;
}
