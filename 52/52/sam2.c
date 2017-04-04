#include <stdio.h>
#pragma warning(disable:4996)
int main()
{
	int count = 0;
	char character;
	while(1) {
		printf("문자를 입력하시오 (종료는 ctrl + z) : ");
		if (scanf("%c", &character) == EOF)
			break;
		fflush(stdin);
		count++;
	}
	printf("총 문자 수는 %d입니다.", count);
}