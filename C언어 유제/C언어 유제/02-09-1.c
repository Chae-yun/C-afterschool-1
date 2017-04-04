#include <stdio.h>
#pragma warning(disable:4996)
int main()
{
	int a;
	printf("알파벳 하나를 입력하세요 : ");
	a = getch();
	putch(a - 1);
	putch(a + 1);
}