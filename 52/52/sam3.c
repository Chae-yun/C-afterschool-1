#include <stdio.h>
#pragma warning(disable:4996)
int main()
{
	int sum = 0;
	int num;
	while (1) {
		printf("숫자를 입력하시오 (종료는 ctrl + c) : ");
		if (scanf("%d", &num) == -1) //== EOF
			break;
		fflush(stdin);
		sum += num;
	}
	printf("총 숫자의 합은 %d입니다.\n", sum);
}