#include <stdio.h>
#pragma warning(disable:4996)
int main()
{
	char http[5], colon[2], slash[3], server[50];
	printf("URL을 입력하세요 : ");
	scanf("%[^:]%[:]%[/]%[^\n]",http,colon,slash,server);
	printf("프로토콜 : %s\n서버 : %s\n", http, server);
}