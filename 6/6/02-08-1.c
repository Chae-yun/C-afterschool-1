#include <stdio.h>
int main()
{
	int a = 29, b = 7, c;
	double x = 5.3, y;
	c = (a / b)*x;
	y = (a / b)*x;
	printf("%d\n", (a / b));
	printf("%lf\n", (double)(a / b)); //괄호 안에서 정수 정수로 했기 때문에 4로 나옴
	printf("c=%d, x=%f\n", c, y);
	c = (a / x)*b;
	y = (a / x)*b;
	printf("c=%d, x=%f\n", c, y);
}