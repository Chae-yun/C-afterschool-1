#include <stdio.h>
#pragma warning(disable:4996)
int main()
{
	char bin[50];
	printf("2������ �Է��Ͻÿ� : ");
	scanf("%[01]", bin);
	printf("�Էµ� 2���� : %s\n", bin);
	fflush(stdin);
}