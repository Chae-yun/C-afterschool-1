#include <stdio.h>
#pragma warning(disable:4996)
#define area(radian) radian*radian*3.14
int main()
{
	double radian;
	printf("���� ���̴� �������� �Է��Ͻÿ� : ");
	scanf("%lf", &radian);
	printf("���� ���̴� %.1lf �Դϴ�.\n", area(radian));
}