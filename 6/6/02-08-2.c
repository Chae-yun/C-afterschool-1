#include <stdio.h>
int main()
{
	int a = 29, b = 7, c;
	double x = 5.3, y,z;
	y = (a / b)*x; //������ �� ��ȯ
	z = ((double)a / (double)b)*x; //����� �� ��ȯ
	printf("y=%f, z=%f\n", y, z);
	y = (a / x)*b; //������ �� ��ȯ
	z = (a / (int)x)*b; //����� �� ��ȯ
	printf("y=%f, z=%f\n", y, z);
}