#include <stdio.h>
#pragma warning(disable:4996)
int main()
{
	char birth[7], dash[2], gender, etc[7];
	printf("�ֹε�Ϲ�ȣ�� �Է��Ͻÿ� : ");
	scanf("%[^-]%[-]%c%[^\n]", birth, dash, &gender, etc);
	switch (gender){
		case '1':
		case '3':
			printf("������ �����Դϴ�.\n"); break;
		case '2':
		case '4':
			printf("������ �����Դϴ�.\n"); break;
		case '5':
		case '7':
			printf("�ܱ��� �����Դϴ�.\n"); break;
		case '6':
		case '8':
			printf("������ �����Դϴ�.\n"); break;
	}
}