#include <stdio.h>
#pragma warning(disable:4996)
int main()
{
	double r, s, v, pie = 3.141592;
	printf("�������� �Է��ϼ��� : ");
	scanf("%lf", &r);
	s = 4 * pie*r*r;
	v = 4. / 3. * pie*r*r*r;
	printf("ǥ������ %lf�̰�, ���Ǵ� %lf�̴�.\n", s, v);
}