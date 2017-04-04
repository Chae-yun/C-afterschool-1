#include <stdio.h>
#pragma warning(disable:4996)
int calculate(int, int);
int main()
{
	int n1, n2;
	printf("정수 2개를 입력하시오 : ");
	scanf("%d%d", &n1, &n2);
	printf("정답 : %d", calculate(n1, n2));
}
int calculate(int a, int b){
	int small, big, sum = 0;
	if (a < b){
		small = a;
		big = b;
	}
	else{
		small = b;
		big = a;
	}
	for (; small <= big; small++){
		sum += small;
	}
	return sum;
}