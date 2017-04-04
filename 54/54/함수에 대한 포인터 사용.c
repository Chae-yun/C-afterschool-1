#include <stdio.h>
#pragma warning(disable:4996)
int GetFactorial(int n);
double Add(double x, double y);
int main()
{
	int(*pFunc)(int n) = &GetFactorial;
	double(*pf)(double, double) = Add;
	int num;
	printf("정수를 입력하세요 : ");
	scanf("%d", &num);
	printf("%d != %d\n", num, (*pFunc)(num));
	printf("0.5 + 1.3 = %lf\n", pf(0.5, 1.3));
	return 0;
}
int GetFactorial(int n){
	int fact = 1;
	for (int i = 1; i <= n; i++)
		fact *= i;
	return fact;
}
double Add(double x, double y){
	return x + y;
}