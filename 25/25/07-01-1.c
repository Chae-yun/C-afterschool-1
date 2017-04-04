#include<stdio.h>
int main()
{
	int i=10, j=20, *a;
	a = &i;
	printf("i의 주소 : %p, a의 값 : %p, ", &i, a); //%p는 주소출력
	printf("*a가 가리키는 곳의 값 : %d\n", *a);
	a = &j;
	printf("j의 주소 : %p, a의 값 : %p, ", &j, a);
	printf("*a가 가리키는 곳의 값 : %d\n", *a);
}