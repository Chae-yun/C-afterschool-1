#include <stdio.h>
#pragma warning(disable:4996)
int main()
{
	int num;
	int thousands, tens;
	printf("6�ڸ� ������ �Է��ϼ��� : ");
	scanf("%d", &num);
	thousands = num / 1000;
	tens = num % 1000;
	printf("%d,%d\n", thousands, tens);
	return 0;
}