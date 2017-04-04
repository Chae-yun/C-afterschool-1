#include<stdio.h>
#include<string.h>
#pragma warning(disable:4996)
void str_insert(char *s1, char*s2, int loc);
int main()
{
	int loc;
	char s1[15] = "abcdefghij";
	char s2[4] = "012";
	printf("s1 = abcdefghij, s2 = 012\ns1 의 길이 : %d\n", strlen(s1));
	printf("끼워넣고 싶은 부분의 숫자를 입력하시오 : ");
	scanf("%d", &loc);
	str_insert(s1, s2, loc);
	printf("%s\n바뀐 s1의 길이 : %d\n", s1, strlen(s1));
}
void str_insert(char *s1, char*s2, int loc)
{
	int length1 = strlen(s1);
	int length2 = strlen(s2);
	memmove(s1 + loc + strlen(s2), s1 + loc, length1 - loc);
	memmove(s1 + loc, s2, length2);
} //대체가 아닌 삽입하는 방법