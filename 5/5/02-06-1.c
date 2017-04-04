#include <stdio.h>
#pragma warning(disable:4996)
int main()
{
	double a, b, c;
	int d = 0;
	printf("3변의 길이 : ");
	d=scanf("%lf%*c%lf%*c%lf", &a, &b, &c);
	printf("a=%lf, b=%lf, c=%lf\n", a, b, c);
	printf("d=%d\n", d);
}