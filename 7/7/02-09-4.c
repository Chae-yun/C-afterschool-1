#include <stdio.h>
#pragma warning(disable:4996)
int main()
{
	char string[100];
	printf("���ڿ��� �Է��Ͻÿ� : ");
	gets(string);
	printf("�Էµ� ���ڿ�=");
	puts(string);
	fflush(stdout);
}