#include <stdio.h>
#pragma warning(disable:4996)
int main()
{
	int a, b, sum;
	printf("16������ �� ���� ������ �Է��Ͻÿ� : ");
	scanf("%x%x", &a, &b);
	sum = a + b;
	printf("���� ���\n8���� : %o, 10���� : %d, 16���� : %x\n", sum, sum, sum);
}