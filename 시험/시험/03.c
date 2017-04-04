#include <stdio.h>
#pragma warning(disable:4996)
int main()
{
	int a;
	char b;
	do{
		printf("정수를 하나 입력하시오 : ");
		scanf("%d", &a);
		fflush(stdin);
		if (a % 2 == 0)
			printf("%d는 짝수입니다.\n", a);
		else if (a % 2 != 0)
			printf("%d는 홀수입니다.\n", a);
		printf("계속하시겠습니까? (Y/N) : ");
		scanf("%c", &b);
		fflush(stdin);
	} while (b == 'Y');
}
