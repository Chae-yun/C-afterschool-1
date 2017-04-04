#include <stdio.h>
#include <math.h>
#pragma warning(disable:4996)
int main()
{
	double a, b, c, root, root2, d;
	printf("3개의 계수 입력(a,b,c) : ");
	scanf("%lf%*c%lf%*c%lf", &a, &b, &c);
	d = b*b - 4.*a*c;
	(d < 0.0) ? printf("허근\n") : ((d == 0.0) ? printf("중근\n") : printf("2개 실근\n"));
	(d == 0.0) ? (root = -b / (2.*a)) :
		(root = (-b + sqrt(d)) / (2.*a), root2 = (-b - sqrt(d)) / (2.*a));
	(d == 0.0) ? printf("%f\n", root) : printf("%f %f\n", root, root2);
}