#include <stdio.h>
#pragma warning(disable:4996)
int main()
{
	int num;
	while (1){
		printf("������ �ϳ� �Է��Ͻÿ� (���� : ��) : ");
		scanf("%d", &num);
		if (num < 0)
			break;
		else if (num % 2 == 0)
			printf("¦���Դϴ�.\n\n");
		else
			printf("Ȧ���Դϴ�.\n\n");
	}
}