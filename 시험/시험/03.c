#include <stdio.h>
#pragma warning(disable:4996)
int main()
{
	int a;
	char b;
	do{
		printf("������ �ϳ� �Է��Ͻÿ� : ");
		scanf("%d", &a);
		fflush(stdin);
		if (a % 2 == 0)
			printf("%d�� ¦���Դϴ�.\n", a);
		else if (a % 2 != 0)
			printf("%d�� Ȧ���Դϴ�.\n", a);
		printf("����Ͻðڽ��ϱ�? (Y/N) : ");
		scanf("%c", &b);
		fflush(stdin);
	} while (b == 'Y');
}
