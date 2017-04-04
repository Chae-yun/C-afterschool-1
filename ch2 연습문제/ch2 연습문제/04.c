#include <stdio.h>
#pragma warning(disable:4996)
int main()
{
	double r, s, v, pie = 3.141592;
	printf("반지름을 입력하세요 : ");
	scanf("%lf", &r);
	s = 4 * pie*r*r;
	v = 4. / 3. * pie*r*r*r;
	printf("표면적은 %lf이고, 부피는 %lf이다.\n", s, v);
}