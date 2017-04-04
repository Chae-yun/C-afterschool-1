#include <stdio.h>
int main()
{
	int a = 10, b = 5, c = -9, d = 25;
	printf("a=%d, b=%d, c=%d, d=%d ÀÏ ¶§\n", a, b, c, d);
	printf("     a>b && a>c => %d\n", a > b && a > c);
	printf("     a>b && b>c => %d\n", a > b && b > c);
	printf("    a>b && c>=d => %d\n", a > b && c >=d);
	printf("     a>b || a>c => %d\n", a > b || a > c);
	printf(" a>=b || !(b>c) => %d\n", a >= b || !(b > c));
	printf("a>=b && !(c>=d) => %d\n", a >= b && !(c >= d));
}