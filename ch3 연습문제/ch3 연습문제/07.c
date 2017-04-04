#include <stdio.h>
#pragma warning(disable:4996)
int main()
{
	//int a=182, b=13, c=67, d=109, e=93, f;
	int a, b, c, d, e, f, g, h;
	printf("정수 5개를 입력하시오 : ");
	scanf("%d %d %d %d %d", &a, &b, &c, &d, &e);
	/*f = (a > ((b > ((c > ((d > e) ? e : d)) ? ((d > e) ? e : d) : c)) ? ((c > ((d > e) ? e : d)) ? ((d > e) ? e : d) : c) : b)) ?
	((b > ((c > ((d > e) ? e : d)) ? ((d > e) ? e : d) : c)) ? ((c > ((d > e) ? e : d)) ? ((d > e) ? e : d) : c) : b) : a;*/
	f = a > b ? b : a;
	g = c > f ? f : c;
	h = e > g ? g : e;
	printf("최솟값은 %d\n", h);
}