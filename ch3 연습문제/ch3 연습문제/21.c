#include <stdio.h>
#pragma warning(disable:4996)
int main()
{
	int old;
	printf("���̸� �Է��Ͻÿ� : ");
	scanf("%d", &old);
	if (old <= 7)
		printf("�������� �Դϴ�.");
	else if (old <= 12)
		printf("500�� �Դϴ�.");
	else if (old <= 19)
		printf("700�� �Դϴ�.");
	else if (old <= 64)
		printf("1500�� �Դϴ�.");
	else if (old >= 65)
		printf("1000�� �Դϴ�.");
}