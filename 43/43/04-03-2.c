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
	printf("���Ҽ��� ũ�� = %f\n", mag);
}