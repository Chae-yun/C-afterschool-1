#include<stdio.h>

void swap(int *x, int *y);

int main()
{
	int a = 10;
	int b = 20;
	printf("swap 전의 a = %d, b = %d\n", a, b);
	swap(&a, &b);
	printf("swap 후의 a = %d, b = %d\n", a, b);
	return 0;
}

void swap(int *x, int *y)
{
	int temp;
	temp = *x;
	*x = *y;
	*y = temp;
}//내용에 의한 전달 : call by reference (포인터)(이거)

/*void swap(int x, int y)
{
	int temp;
	temp = x;
	x = y;
	y = temp;
}값에 의한 전달 : call by value*/