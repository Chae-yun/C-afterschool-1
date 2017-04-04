#include<stdio.h>
#pragma warning(disable:4996)
int main()
{
	int number[20], y, m, d, g;
	char gender;
	printf("주민번호를 입력하십시오 : ");
	scanf("%s", number);
	sscanf(number, "%2d%2d%2d-%1d", &y, &m, &d, &g);
	if (g > 2)
		y += 2000;
	else
		y += 1900;
	printf("생일 : %d년 %d월 %d일 성별 : ", y, m, d);
	if (g % 2)
		printf("남자\n");
	else
		printf("여자\n");
}