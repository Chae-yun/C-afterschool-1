#include <stdio.h>
int main()
{
	int x[5];
	int *p1 = x;
	int y[2][3];
	int(*p2)[3] = y;
	printf("p1 = %p, p2 = %p\n", p1, p2);
	p1++;
	p2++;
	printf("p1 = %p, p2 = %p\n", p1, p2);
	return 0;
}