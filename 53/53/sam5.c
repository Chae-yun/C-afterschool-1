#include <stdio.h>
#pragma warning(disable:4996)
int main()
{
	char a, ret;
	while (1){
		printf("���ڸ� �Է��Ͻÿ� : ");
		ret = scanf("%c", &a);
		if (ret == EOF)
			break;
		if (a >= '0' && a <= '9')
			printf("�����Դϴ�.\n\n");
		else if (a >= 'A' && a <= 'Z')
			printf("�빮���Դϴ�.\n\n");
		else if (a >= 'a' && a <= 'z')
			printf("�ҹ����Դϴ�.\n\n");
		else
			printf("Ư�������Դϴ�.\n\n");
		fflush(stdin);
	}
}