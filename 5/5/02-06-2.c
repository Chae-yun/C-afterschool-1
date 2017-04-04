#include <stdio.h>
#pragma warning(disable:4996)
int main()
{
	char string[100];
	printf("문자열을 입력하시오 : ");
	scanf("%s", string);
	printf("입력된 문자열 = %s\n", string);
	fflush(stdin);//저장된 값을 모두 버려라
	printf("문자열을 입력하시오 : ");
	scanf("%[^\n]", string);//엔터 전까지의 내용을 저장해라
	printf("입력된 문자열 = %s\n", string);
}
