#include<stdio.h>
#include<string.h>
#pragma warning(disable:4996)
int main()
{
	char *s = "This is a string";
	char *ptr1, *ptr2;
	char c1 = 'r', c2 = 's';
	ptr1 = strchr(s, c1);
	ptr2 = strrchr(s, c2);
	printf("s : %s\n", s);
	printf("strchr�� ���\n");
	if (ptr1)
		printf("���� %c�� ��ġ�ϴ� ù ��° ��ġ %d\n", c1, ptr1 - s);
	printf("strrchr�� ���\n");
	if (ptr2)
		printf("���� %c�� ��ġ�ϴ� ������ ��ġ %d\n", c2, ptr2 - s);
	return 0;
}