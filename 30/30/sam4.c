#include<stdio.h>

void swap(int *x, int *y);

int main()
{
	int a = 10;
	int b = 20;
	printf("swap ���� a = %d, b = %d\n", a, b);
	swap(&a, &b);
	printf("swap ���� a = %d, b = %d\n", a, b);
	return 0;
}

void swap(int *x, int *y)
{
	int temp;
	temp = *x;
	*x = *y;
	*y = temp;
}//���뿡 ���� ���� : call by reference (������)(�̰�)

/*void swap(int x, int y)
{
	int temp;
	temp = x;
	x = y;
	y = temp;
}���� ���� ���� : call by value*/