#include<stdio.h>
#include<ctype.h>
#pragma warning(disable:4996)
int main()
{
	int i, space = 0;
	char str[100];
	printf("����� �� ���ڿ��� �Է��Ͻÿ� : ");
	gets(str);
	for (i = 0; str[i]; i++){
		if (isspace(str[i]))
			space++;
	}
	printf("�� �ܾ��� ������ %d���Դϴ�.\n", space + 1);
}