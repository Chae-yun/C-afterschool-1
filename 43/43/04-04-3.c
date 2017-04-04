#include<stdio.h>
#include<math.h>
#define QUAD1(a,b,c) (-(b)+sqrt((b)*(b)-4*(a)*(c)))/(2*(a))
#define QUAD2(a,b,c) (-(b)-sqrt((b)*(b)-4*(a)*(c)))/(2*(a))
int main()
{
	double a = 1.0, b = 4.0, c = 3.0;
	printf("%6.2f, %6.2f\n", QUAD1(a, b, c), QUAD2(a, b, c));
}