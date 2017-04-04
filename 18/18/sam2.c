#include<stdio.h>
#pragma warning(disable:4996)
void PrintSumAndProduct(int a, int b){
	printf("%d + %d = %d\n", a, b, a + b);
	printf("%d * %d = %d\n", a, b, a * b);
}

int main()//int는 생략가능, 생략하면 int로 인식
{
	int x, y;
	PrintSumAndProduct(10, 20);
	printf("정수를 입력하시오 : ");
	scanf("%d %d", &x, &y);
	PrintSumAndProduct(x, y);
	return 0;
}