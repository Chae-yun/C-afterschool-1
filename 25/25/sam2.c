#include<stdio.h>
int main()
{
	int array[10] = { 100, 200, 300, 400, 500, 600, 700, 800, 900, 1000 };
	int *ap, i;
	ap = &array[0];
	for (i = 0; i < 10; i++, ap++)
		printf("%p : %04x : %4d\n", ap, *ap, *ap);
}