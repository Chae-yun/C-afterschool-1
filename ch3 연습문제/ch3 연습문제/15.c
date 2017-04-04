#include <stdio.h>
#pragma warning(disable:4996)
int main()
{
	int month;
	printf("월을 입력하시오 : ");
	scanf("%d", &month);
	switch (month){
		case 3:
		case 4:
		case 5:
			printf("봄입니다.\n"); break;
		case 6:
		case 7:
		case 8:
			printf("여름입니다.\n"); break;
		case 9:
		case 10:
		case 11:
			printf("가을입니다.\n"); break;
		case 12:
		case 1:
		case 2:
			printf("겨울입니다.\n"); break;
	}
}