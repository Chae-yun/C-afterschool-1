#include <stdio.h>
#pragma warning(disable:4996)
int main()
{
	int a;
	printf("���ĺ� �ϳ��� �Է��ϼ��� : ");
	a = getch();
	putch(a - 1);
	putch(a + 1);
}