#include <stdio.h>
#pragma warning(disable:4996)
int main()
{
	int a, b, c;
	printf("2�� �������� ��� 3���� �Է��Ͻÿ� : ");
	scanf("%d %d %d", &a, &b, &c);
	if (b*b - 4*a * c == 0)
		printf("�߱��Դϴ�.\n");
	else if (b*b - 4*a * c > 0)
		printf("�� ���� �Ǳ�\n");
	else
		printf("���\n");
}