#include<stdio.h>
#include<ctype.h>
#pragma warning(disable:4996)
int main()
{
	int i = 0;
	char str[100];
	printf("변환하고 싶은 문자열을 입력하시오 : ");
	gets(str);
	for (i = 0; str[i]; i++){
		if (islower(str[i]))
			str[i] = toupper(str[i]);
		else if (isupper(str[i]))
			str[i] = tolower(str[i]);
	}
	puts(str);
}