#include<stdio.h>
#include<string.h>
#pragma warning(disable:4996)
int main()
{
	/*char s1[] = "abcdefg";
	char s2[] = "012";
	strncpy(s1, s2, strlen(s2));  //s2�� ù n(strlen(s2))���� ���ڿ��� s1�� ����(��ü�ϱ�)
	printf("%s\n", s1);
	return 0;*/

	/*char s1[] = "abcdefg";
	char s2[] = "012";
	memmove(s1 + 3, s2, strlen(s2)); //s2�� ù n(strlen(s2))���� ���ڿ��� s1+3�� ����(��ü�ϱ�)
	printf("%s\n", s1);
	return 0;*/

	char s1[] = "abcdefg";
	char s2[] = "012";
	memcpy(s1 + 3, s2, strlen(s2)); //s2�� ù n(strlen(s2))���� ���ڿ��� s1+3�� ����(��ü�ϱ�)
	printf("%s\n", s1);
	return 0;
}