#include <stdio.h>
#pragma warning(disable:4996)
int main()
{
	char id[50], at[2], server[50];
	printf("이메일을 입력하세요 : ");
	scanf("%[^@]%[@]%[^\n]", id, at, server);
	printf("아이디 : %s\n서버 : %s\n", id, server);
	fflush(stdin);
}