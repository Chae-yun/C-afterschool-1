#include <stdio.h>
#pragma warning(disable:4996)
#define M2PY(m) 0.3025*m
#define PY2M(p) 3.305785*p
int main()
{
	double m, p;
	printf("�������� �Է� : ");
	scanf("%lf", &m);
	printf("�� �Է� : ");
	scanf("%lf", &p);
	printf("%.1lf �������ʹ� %.1lf ��\n", m, M2PY(m));
	printf("%.1lf ���� %.1lf ��������\n", p, PY2M(p));
}