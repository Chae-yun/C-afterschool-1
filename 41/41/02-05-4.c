#include<stdio.h>

#pragma warning (disable:4996)
int main()
{
	int x, y;
	printf("input: ");
	scanf("%d%*c%d", &x, &y);
	printf("%%d==>x: %d, y:%d\n", x, y);
	fflush(stdin);
	printf("input: ");
	scanf("%i%*c%i", &x, &y);
	printf("%%i==>x:%d, y:%d\n", x, y);
}