#include<stdio.h>
#pragma warning(disable:4996)

int main()
{
	char c, str1[20], str2[20];
	printf("����, ���ڿ�1, ���ڿ�2 �Է�: ");
	fflush(stdin);
	scanf("%c %s %s", &c, str1, str2);
	printf("c=%c, str1=%s, str2=%s\n", c, str1, str2);
}