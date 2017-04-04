#include <stdio.h>
#pragma warning(disable:4996)
int main()
{
	/*int num;
	printf("양의 정수를 입력하시오 : ");
	scanf("%d", &num);
	while (num){
		printf("%d", num % 10);
		num = num / 10;
	}*/
	int num, a = 0;
	printf("양의 정수를 입력하시오 : ");
	scanf("%d", &num);
	while (num){
		a = a * 10;
		a = a + num % 10;
		num = num / 10;
	}
	printf("%d\n", a);
}