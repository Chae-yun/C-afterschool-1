#include<stdio.h>
#include<string.h>
#pragma warning(disable:4996)
int main()
{
	char *p = "abcde"; //�ʱ�ȭ
	printf("p = %s\n", p);
	printf("p = %p\n", p);
	printf("p = %p\n", "abcde");
	p[0] = 'A'; //���࿡���߻�  ��????????????
	strcpy(p, "hello"); //���࿡���߻� ��??????????
	return 0;
}