#include <stdio.h>
#pragma warning(disable:4996)
int main()
{
	int x;
	printf("������ �Է��Ͻÿ� : ");
	scanf("%d", &x);
	if (x < 0)
		printf("%d : ����", x);
	else
		printf("%d : ���\n", x);
}