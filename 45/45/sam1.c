#include <stdio.h>
#pragma warning(disable:4996)
int main()
{
	int num;
	while (1){
		printf("정수를 하나 입력하시오 (음수 : 끝) : ");
		scanf("%d", &num);
		if (num < 0)
			break;
		else if (num % 2 == 0)
			printf("짝수입니다.\n\n");
		else
			printf("홀수입니다.\n\n");
	}
}