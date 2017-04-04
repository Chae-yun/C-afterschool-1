#include<stdio.h>
#pragma warning(disable:4996)

int main()
{
	int s;
	printf("점수를 입력해주세요 : ");
	scanf("%d", &s);

	if (s <= 100 && s >= 90){
		printf("A\n");
	}

	else if (s < 90 && s >= 80){
		printf("B\n");
	}

	else if (s < 80 && s >= 70){
		printf("C\n");
	}

	else if (s < 70 && s >= 60){
		printf("D\n");
	}

	else if (s < 60 && s >= 0){
		printf("F\n");
	}
	else{
		printf("점수가 맞지 않습니다.\n");
	}
}