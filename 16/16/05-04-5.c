#include <stdio.h>
#include <conio.h>
#pragma warning(disable:4996)
int main()
{
	int chr;
	do{
		chr = getch();
		printf("%d ", chr);
		if (chr == 0 || chr == 0xe0)
		{
			chr = getch();
			printf("Ȯ��Űcode = %d\n", chr);
		}
		else
			printf("�ƽ�Űcode = %d\n", chr);
		if (chr == 27)
			break;
	} while (1);
}