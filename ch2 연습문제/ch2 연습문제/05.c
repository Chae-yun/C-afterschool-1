#include <stdio.h>
#include <math.h>
#pragma warning(disable:4996)
int main()
{
	double a, area;
	printf("���ﰢ���� �� �� : ");
	scanf("%lf", &a);
	area = sqrt(3.) / 4.*a*a;
	printf("�ﰢ���� ���� = %f\n", area);
}