#include <stdio.h>
#pragma warning(disable:4996)
int main()
{
	int a, b;
	printf("������ �Է��Ͻÿ� : ");
	scanf("%d", &a);
	a = (a % 3 == 0) ? printf("%d 3�� ���\n", a) : printf("%d�� 3�� ����� �ƴ�\n", a);
}