#include <stdio.h>
#pragma warning(disable:4996)
#define M2PY(m) 0.3025*m
#define PY2M(p) 3.305785*p
int main()
{
	double m, p;
	printf("제곱미터 입력 : ");
	scanf("%lf", &m);
	printf("평 입력 : ");
	scanf("%lf", &p);
	printf("%.1lf 제곱미터는 %.1lf 평\n", m, M2PY(m));
	printf("%.1lf 평은 %.1lf 제곱미터\n", p, PY2M(p));
}