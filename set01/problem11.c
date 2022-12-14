#include <stdio.h>
struct _complex {
	float real;
	float imaginary;
};
typedef struct _complex Complex;

Complex input_complex();
Complex add_complex(Complex a, Complex b);
void output(Complex a, Complex b, Complex sum);

int main()
{
    Complex a;
    Complex b;
    Complex sum;
    a = input_complex();
    b = input_complex();
  sum = add_complex(a,b); // need to save the returned
  output(a,b,sum);
    return 0;
}
Complex input_complex()
{
  Complex c;
  printf("Enter the real and imaginary number.\n");
  scanf("%f%f",&c.real,&c.imaginary);
  return c;
}

Complex add_complex(Complex a, Complex b)
{
  Complex sum;
  sum.real=a.real+b.real;
  sum.imaginary=a.imaginary+b.imaginary;
  return sum;
}
void output(Complex a, Complex b, Complex sum)
{
  
  printf("The sum of %f and %f is %f\n", a.real,b.real,sum.real);
    printf("The sum of %f and %f is %f\n",a.imaginary ,b.imaginary,sum.imaginary);
}