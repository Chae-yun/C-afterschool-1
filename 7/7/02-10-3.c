#include <stdio.h>
#pragma warning(disable:4996)
int main()
{
	char id[50], at[2], server[50];
	printf("�̸����� �Է��ϼ��� : ");
	scanf("%[^@]%[@]%[^\n]", id, at, server);
	printf("���̵� : %s\n���� : %s\n", id, server);
	fflush(stdin);
}