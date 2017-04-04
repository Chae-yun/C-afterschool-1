#include <stdio.h>
#pragma warning(disable:4996)
int main()
{
	int number, check, temp;
	printf("학번과 식별번호를 입력하시오 : ");
	scanf("%d %d", &number, &check);
	number *= 3;
	while (number >= 10){
		for (temp = 0; number > 0; number /= 10)
			temp += number % 10;
		number = temp;
	}
	if (number == check)
		printf("정상인 학번입니다.\n");
	else
		printf("정상인 학번이 아닙니다.\n");
}