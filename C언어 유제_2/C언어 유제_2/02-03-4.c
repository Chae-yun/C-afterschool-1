#include <stdio.h>
int main()
{
	int x = 239405900, a, b, c;
	int num = x;
	a = x / 100000000;
	x = x % 100000000;
	b = x / 10000;
	c = x % 10000;
	printf("%d는 %d억 %d만 %d입니다.\n", num, a, b, c);
}