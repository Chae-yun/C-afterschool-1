#include <stdio.h>
#pragma warning(disable:4996)
int main()
{
	char name = "";
	fputs("�̸��� �Է��Ͻÿ� : ", stdout);
	gets(name);
	printf("�Էµ� �̸� : ");
	puts(name);
}