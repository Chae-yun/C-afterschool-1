#include <stdio.h>
#include <conio.h>
#pragma warning(disable:4996)
int main()
{
	int dan, y=1;
	printf("단을 입력하시오 : ");
	scanf("%d", &dan);
	while (y < 10){
		printf("%2d * %2d = %2d\n", dan, y, dan*y);
		y++;
	}
}