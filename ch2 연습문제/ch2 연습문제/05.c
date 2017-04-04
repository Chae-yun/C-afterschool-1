#include <stdio.h>
#include <math.h>
#pragma warning(disable:4996)
int main()
{
	double a, area;
	printf("정삼각형의 한 변 : ");
	scanf("%lf", &a);
	area = sqrt(3.) / 4.*a*a;
	printf("삼각형의 면적 = %f\n", area);
}