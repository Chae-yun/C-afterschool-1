#include<stdio.h>
#include<string.h>
#pragma warning(disable:4996)
int main()
{
	char *s1 = "salad";
	char *s2 = "salary";
	int ptr;
	ptr = strcmp(s1, s2); //s1�� s2�� ���� ���ؼ� s1�� ������ ���� s2�� ������ ���
	printf("strcmp�� �� : %d\n", ptr);
	ptr = strncmp(s1, s2, 4);
	//s1�� s2�� �տ� n(4)���� ���ؼ� ������ 0 s1�� ������ ���� s2�� ������ ���
	printf("strncmp���\n");
	if (ptr > 0)
		printf("���ڿ� s1�� s2���� ũ��.\n");
	else if (ptr < 0)
		printf("���ڿ� s1�� s2���� �۴�.\n");
	else
		printf("���ڿ� s1�� s2�� ����.\n");
	return 0;
}