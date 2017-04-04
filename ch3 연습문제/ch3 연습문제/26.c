#include <stdio.h>
#pragma warning(disable:4996)
int main()
{
	char birth[7], dash[2], gender, etc[7];
	printf("주민등록번호를 입력하시오 : ");
	scanf("%[^-]%[-]%c%[^\n]", birth, dash, &gender, etc);
	switch (gender){
		case '1':
		case '3':
			printf("내국인 남자입니다.\n"); break;
		case '2':
		case '4':
			printf("내국인 여자입니다.\n"); break;
		case '5':
		case '7':
			printf("외국인 남자입니다.\n"); break;
		case '6':
		case '8':
			printf("내국인 남자입니다.\n"); break;
	}
}