#include <stdio.h>
#pragma warning(disable:4996)
int main()
{
	char a;
		printf("�����ڸ� �Է��Ͻÿ� : ");
		scanf("%c", &a);
		if (a >= 'A' && a <= 'Z')
			printf("�빮���Դϴ�.\n");
		else if (a>='a' && a <= 'z')
			printf("�ҹ����Դϴ�.\n");
		else
			printf("�����ڰ� �ƴմϴ�.\n");
}