#include <stdio.h>
#include <math.h>
#pragma warning(disable:4996)
int main()
{
	double a;
	printf("�Ǽ��� �Է��Ͻÿ� : ");
	scanf("%lf", &a);
	if (a < 0)
		a *= -1;
	a = sqrt(a);
	printf("�������� %lf�Դϴ�.", a);
}