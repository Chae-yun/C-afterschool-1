#include <stdio.h>
#pragma warning(disable:4996)
int main()
{
	int num;
	char choice;
	while (1){
		printf("������ �ϳ� �Է��Ͻÿ� : ");
		scanf("%d", &num);
		if (num % 2 == 0)
			printf("¦���Դϴ�.\n\n");
		else
			printf("Ȧ���Դϴ�.\n\n");
		printf("����Ͻðڽ��ϱ�?(y/n) : ");
		fflush(stdin);
		scanf("%c", &choice);
		if (choice == 'n' || choice == 'N')
			break;
		printf("\n");
	}
}