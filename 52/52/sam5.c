#include <stdio.h>
#pragma warning(disable:4996)
double plus(double, double);
double minus(double, double);
double gob(double, double);
double nanugi(double, double);
int main()
{
	double a, b;
	printf("�Ǽ� �� ���� �Է��Ͻÿ� : ");
	scanf("%lf%lf", &a, &b);
	printf("�� : %lf", plus(a, b));
	printf("�� : %lf", minus(a, b));
	printf("�� : %lf", gob(a, b));
	printf("������ : %lf", nanugi(a, b));
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
