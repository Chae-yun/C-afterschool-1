#include <stdio.h>
#pragma warning(disable:4996)
int main()
{
	//int a=182, b=13, c=67, d=109, e=93, f;
	int a, b, c, d, e, f, g, h;
	printf("���� 5���� �Է��Ͻÿ� : ");
	scanf("%d %d %d %d %d", &a, &b, &c, &d, &e);
	/*f = (a > ((b > ((c > ((d > e) ? e : d)) ? ((d > e) ? e : d) : c)) ? ((c > ((d > e) ? e : d)) ? ((d > e) ? e : d) : c) : b)) ?
	((b > ((c > ((d > e) ? e : d)) ? ((d > e) ? e : d) : c)) ? ((c > ((d > e) ? e : d)) ? ((d > e) ? e : d) : c) : b) : a;*/
	f = a > b ? b : a;
	g = c > f ? f : c;
	h = e > g ? g : e;
	printf("�ּڰ��� %d\n", h);
}