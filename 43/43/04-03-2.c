#include<stdio.h>
#include<math.h>
typedef struct{
	double real;
	double imag;
}complex;

int main()
{
	complex c;
	double mag;
	c.real = 3.5;
	c.imag = 5.0;
	mag = sqrt(c.real*c.real + c.imag*c.imag);
	printf("복소수의 크기 = %f\n", mag);
}