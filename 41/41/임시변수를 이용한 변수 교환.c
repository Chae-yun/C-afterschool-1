#include<stdio.h>

void swap(int x, int y);
void swap1(int x, int y);
int main()
{
	int x = 450, y = 341, temp;
	printf("��ȯ �� : x=%d, y=%d\n", x, y);
	swap(x, y);
	printf("swap �Լ� �� : x=%d, y=%d\n", x, y);
	swap(&x, &y);
	printf("swap1 �Լ� �� : x=%d, y=%d\n", x, y);
}
void swap(int x, int y)
{
	int temp = 0;
	temp = x;
	x = y;
	y = temp;
	printf("��ȯ �� : x=%d, y=%d\n", x, y);
}

void swap1(int *a, int *b)
{
	int temp = 0;
	temp = *a;
	*a = *b;
	*a = temp;
	printf("��ȯ �� : x=%d, y=%d\n", *a, *b);
}
