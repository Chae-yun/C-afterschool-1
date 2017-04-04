#include <stdio.h>
int main()
{
	int a = 29, b = 7, c;
	double x = 5.3, y,z;
	y = (a / b)*x; //묵시적 형 변환
	z = ((double)a / (double)b)*x; //명시적 형 변환
	printf("y=%f, z=%f\n", y, z);
	y = (a / x)*b; //묵시적 형 변환
	z = (a / (int)x)*b; //명시적 형 변환
	printf("y=%f, z=%f\n", y, z);
}