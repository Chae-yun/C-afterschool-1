#include<stdio.h>
#include<string.h>
#pragma warning(disable:4996)
int main()
{
	char *p = "abcde"; //초기화
	printf("p = %s\n", p);
	printf("p = %p\n", p);
	printf("p = %p\n", "abcde");
	p[0] = 'A'; //실행에러발생  왜????????????
	strcpy(p, "hello"); //실행에러발생 왜??????????
	return 0;
}