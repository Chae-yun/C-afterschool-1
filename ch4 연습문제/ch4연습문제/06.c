#include <stdio.h>
#pragma warning(disable:4996)
#define EVEN_ODD(x) x%2==0
int main()
{
	int a;
	printf("������ �Ѱ� �Է��Ͻÿ� : ");
	scanf("%d", &a);
	if (EVEN_ODD(a))
		printf("¦���Դϴ�.\n");
	else
		printf("Ȧ���Դϴ�.\n");
}