#include <stdio.h>
int main()
{
	double a = 3., b = 4., c = 5., s;
	s = (a + b + c) / 2.;
	s = sqrt(s*(s - a)*(s - b)*(s - c));
	printf("삼각형의 면적=%f\n", s);
}