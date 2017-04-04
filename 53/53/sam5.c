#include <stdio.h>
#pragma warning(disable:4996)
int main()
{
	char a, ret;
	while (1){
		printf("문자를 입력하시오 : ");
		ret = scanf("%c", &a);
		if (ret == EOF)
			break;
		if (a >= '0' && a <= '9')
			printf("숫자입니다.\n\n");
		else if (a >= 'A' && a <= 'Z')
			printf("대문자입니다.\n\n");
		else if (a >= 'a' && a <= 'z')
			printf("소문자입니다.\n\n");
		else
			printf("특수문자입니다.\n\n");
		fflush(stdin);
	}
}