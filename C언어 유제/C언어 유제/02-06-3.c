#include <stdio.h>
#pragma warning(disable:4996)
int main()
{
	char http[5], colon[2], slash[3], server[50];
	printf("URL�� �Է��ϼ��� : ");
	scanf("%[^:]%[:]%[/]%[^\n]",http,colon,slash,server);
	printf("�������� : %s\n���� : %s\n", http, server);
}