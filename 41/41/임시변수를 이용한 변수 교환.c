#include<stdio.h>

void swap(int x, int y);
void swap1(int x, int y);
int main()
{
	int x = 450, y = 341, temp;
	printf("교환 전 : x=%d, y=%d\n", x, y);
	swap(x, y);
	printf("swap 함수 전 : x=%d, y=%d\n", x, y);
	swap(&x, &y);
	printf("swap1 함수 후 : x=%d, y=%d\n", x, y);
}
void swap(int x, int y)
{
	int temp = 0;
	temp = x;
	x = y;
	y = temp;
	printf("교환 후 : x=%d, y=%d\n", x, y);
}

void swap1(int *a, int *b)
{
	int temp = 0;
	temp = *a;
	*a = *b;
	*a = temp;
	printf("교환 후 : x=%d, y=%d\n", *a, *b);
}
