#include <stdio.h>
#pragma warning(disable:4996)
int main()
{
	char ID[20], at[2], server[20], dotnoise[10];
	printf("E-mail�� �Է��ϼ��� : ");
	scanf("%[^@]%[@]%[^.]%[^\n]", ID, at, server, dotnoise);
	printf("ID : %s\n���� : %s\n", ID, server);
}