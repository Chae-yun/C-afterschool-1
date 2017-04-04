#include <stdio.h>
#pragma warning(disable:4996)
double plus(double, double);
double minus(double, double);
double gob(double, double);
double nanugi(double, double);
int main()
{
	double a, b;
	printf("실수 두 개를 입력하시오 : ");
	scanf("%lf%lf", &a, &b);
	printf("합 : %lf", plus(a, b));
	printf("차 : %lf", minus(a, b));
	printf("곱 : %lf", gob(a, b));
	printf("나누기 : %lf", nanugi(a, b));
}
double plus(double a, double b){
	return a + b;
}
double minus(double a, double b){
	return a - b;
}
double gob(double a, double b){
	return a * b;
}
double nanugi(double a, double b){
	return a / b;
}
