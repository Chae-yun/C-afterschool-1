#include<stdio.h>
#pragma warning(disable:4996)
void PrintSumAndProduct(int a, int b){
	printf("%d + %d = %d\n", a, b, a + b);
	printf("%d * %d = %d\n", a, b, a * b);
}

int main()//int�� ��������, �����ϸ� int�� �ν�
{
	int x, y;
	PrintSumAndProduct(10, 20);
	printf("������ �Է��Ͻÿ� : ");
	scanf("%d %d", &x, &y);
	PrintSumAndProduct(x, y);
	return 0;
}