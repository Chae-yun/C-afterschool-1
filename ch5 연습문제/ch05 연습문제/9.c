#include <stdio.h>
#pragma warning(disable:4996)
int main()
{
	int num;
	printf("숫자를 하나 입력하시오 : ");
	scanf("%d", &num);
	while (num > 0){
		num--;
		printf("*");
	}
	printf("\n");
}