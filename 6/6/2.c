#include <stdio.h>
#pragma warning(disable:4996)
int main()
{
	double num1, num2, add, sub;
	printf("�Ǽ� 2���� �Է��ϼ��� : ");
	scanf("%lf %lf", &num1, &num2); //������ %lf
	add = num1 + num2;
	sub = num1 - num2;
	printf("�Ǽ� 2���� ���� ���� %lf�Դϴ�.\n�Ǽ� 2���� �� ���� %lf�Դϴ�.", add, sub);
}