#include<stdio.h>
#include<string.h>
#pragma warning(disable:4996)
int main()
{
	char d[15] = "love";
	char s[6] = "holic";
	strcat(d, s); //d�� s�� ����
	printf("strcat : %s\n", d);
	strncat(d, s, 3); //d�� s�� ù n(3)���� ���ڿ��� ���� (������ d�� �̹� �پ loveholichol�� �ȴ�)
	printf("strcat : %s\n", d);
	return 0;
}