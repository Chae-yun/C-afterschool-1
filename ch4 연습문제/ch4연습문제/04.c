#include <stdio.h>
#pragma warning(disable:4996)
#define DECISION(a,b,c) b*b-4*a*c
int main()
{
	double a, b, c;
	printf("ax^2+bx+c=0�� a, b, c�� �Է��Ͻÿ� : ");
	scanf("%d %d %d", &a, &b, &c);
	if (DECISION(a, b, c) < 0)
		printf("����Դϴ�.\n");
	else
		printf("�Ǳ��Դϴ�.\n");
}