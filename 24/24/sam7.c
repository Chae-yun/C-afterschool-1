#include<stdio.h>
#include<string.h>
#pragma warning(disable:4996)
int main()
{
	char *s1 = "9456123";
	char *s2 = "4096257";
	char *s3 = "8563271";
	int length;
	printf("s1 : %s\n", s1);
	printf("s2 : %s\n", s2);
	length = strspn(s1, s2);
	printf("����� ���ڿ��� ���� : %d\n", length);
	printf("s1 : %s\n", s1);
	printf("s3 : %s\n", s3);
	length = strcspn(s1, s3);
	printf("������� �ʴ� ���ڿ��� ���� : %d\n", length);
	return 0;
}