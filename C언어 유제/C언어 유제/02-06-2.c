#include <stdio.h>
#pragma warning(disable:4996)
int main()
{
	char ID[20], at[2], server[20], dotnoise[10];
	printf("E-mail을 입력하세요 : ");
	scanf("%[^@]%[@]%[^.]%[^\n]", ID, at, server, dotnoise);
	printf("ID : %s\n서버 : %s\n", ID, server);
}