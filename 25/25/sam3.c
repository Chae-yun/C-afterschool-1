#include<stdio.h>
int main()
{
	int arr[5] = { 10, 20, 30, 40, 50 };
	int *p = &arr[0]; //int*형 변수의 선언
	int i;
	/*for (i = 0; i < 5; i++, p++) //포인터 변수의 증가연산
		printf("%d\n", *p);*/
	for (i = 0; i < 5; i++) //포인터 변수의 증가연산
		printf("%d\n", *(p+i));
	return 0;
}