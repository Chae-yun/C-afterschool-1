#include<stdio.h>
#pragma warning(disable:4996)

int main()
{
	int a, b, c;
	printf("2차 방정식의 3개의 계수를 입력해주세요 : ");
	scanf("%d %d %d", &a, &b, &c);

	if (b*b - 4 * a*c == 0){
		printf("중근\n");
	}
	else if (b*b - 4 * a*c > 0){
		printf("두 개의 실근\n");
	}
	else{
		printf("허근\n");
	}
}