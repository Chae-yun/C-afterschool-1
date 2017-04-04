#include<stdio.h>
#include<string.h>
#pragma warning(disable:4996)
int main()
{
	char *s1 = "salad";
	char *s2 = "salary";
	int ptr;
	ptr = strcmp(s1, s2); //s1과 s2의 값을 비교해서 s1이 작으면 음수 s2가 작으면 양수
	printf("strcmp의 값 : %d\n", ptr);
	ptr = strncmp(s1, s2, 4);
	//s1과 s2의 앞에 n(4)개를 비교해서 같으면 0 s1이 작으면 음수 s2가 작으면 양수
	printf("strncmp결과\n");
	if (ptr > 0)
		printf("문자열 s1이 s2보다 크다.\n");
	else if (ptr < 0)
		printf("문자열 s1이 s2보다 작다.\n");
	else
		printf("문자열 s1과 s2가 같다.\n");
	return 0;
}