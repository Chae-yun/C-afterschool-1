#include <stdio.h>
int main()
{
	int number = 1547852365, b, c, d;
	b = number / 100000000;
	c = number / 10000-b*10000;
	d = number - b * 100000000 - c * 10000;
	printf("%d�� %d�� %d�� %d�Դϴ�.\n", number, b, c, d);
}