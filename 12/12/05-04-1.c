#include <stdio.h>
#pragma warning(disable:4996)
int main()
{
	//계속 입력받는다.
	/*int x;
	do{
		printf("양수를 입력하시오 : ");
		scanf("%d", &x);
	} while (x <= 0);
	printf("x=%d\n", x);*/
	int score;
	do{
		printf("0에서 100사이의 정수를 입력하시오 : ");
		scanf("%d", &score);
	} while (score < 0 || score>100);
	printf("점수 = %d\n", score);
}