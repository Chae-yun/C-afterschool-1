#include <stdio.h>
#pragma warning(disable:4996)
int main()
{
	int num, answer = 1;
	printf("팩토리얼을 구할 정수를 한 개 입력하시오  : ");
	scanf("%d", &num);
	for (int i = num; i >= 1; i--){
		answer *= i;
	}
	if (num == 0){
		printf("0의 팩토리얼은 1입니다.\n");
	}
	else{
		printf("%d의 팩토리얼은 %d입니다.\n", num, answer);
	}
}