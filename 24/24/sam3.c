#include<stdio.h>
#include<string.h>
#pragma warning(disable:4996)
int main()
{
	char d[15] = "love";
	char s[6] = "holic";
	strcat(d, s); //d에 s를 연결
	printf("strcat : %s\n", d);
	strncat(d, s, 3); //d에 s의 첫 n(3)개의 문자열을 연결 (지금은 d가 이미 붙어서 loveholichol이 된다)
	printf("strcat : %s\n", d);
	return 0;
}