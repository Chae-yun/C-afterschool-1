#include<stdio.h>
int main()
{
	int i=10, j=20, *a;
	a = &i;
	printf("i�� �ּ� : %p, a�� �� : %p, ", &i, a); //%p�� �ּ����
	printf("*a�� ����Ű�� ���� �� : %d\n", *a);
	a = &j;
	printf("j�� �ּ� : %p, a�� �� : %p, ", &j, a);
	printf("*a�� ����Ű�� ���� �� : %d\n", *a);
}