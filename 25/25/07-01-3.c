#include<stdio.h>
int main()
{
	int x[10] = { 45, 77, 89, 38, 29, 58, 93, 84, 73, 66 };
	int sum = 0, i, *x1;
	x1 = &x[0]; //x1 = x;
	for (i = 0; i < 10; i++, x1++)
		sum += *x1; //x1�� ������ ����Ʈ ����ŭ �ּҰ� �����Ѵ�.
	printf("sum = %d\n", sum);
}