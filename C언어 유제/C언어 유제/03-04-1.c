#include <stdio.h>
#include <math.h>
#pragma warning(disable:4996)
int main()
{
	double a, b, c, root, root2, d;
	printf("3���� ��� �Է�(a,b,c) : ");
	scanf("%lf%*c%lf%*c%lf", &a, &b, &c);
	d = b*b - 4.*a*c;
	(d < 0.0) ? printf("���\n") : ((d == 0.0) ? printf("�߱�\n") : printf("2�� �Ǳ�\n"));
	(d == 0.0) ? (root = -b / (2.*a)) :
		(root = (-b + sqrt(d)) / (2.*a), root2 = (-b - sqrt(d)) / (2.*a));
	(d == 0.0) ? printf("%f\n", root) : printf("%f %f\n", root, root2);
}