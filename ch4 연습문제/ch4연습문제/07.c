#include <stdio.h>
#pragma warning(disable:4996)
#define IS_EQUAL(x) x==b
int main()
{
	int a, b;
	printf("�� ������ �Է��Ͻÿ� : ");
	scanf("%d %d", &a, &b);
	if (IS_EQUAL(a))
		printf("�����ϴ�.\n");
	else
		printf("�ٸ��ϴ�.\n");
}