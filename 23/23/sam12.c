#include<stdio.h>
#include<ctype.h>
#include<string.h>
#pragma warning(disable:4996)
int main()
{
	int i, j=0;
	char str[50], anstr[50];
	printf("영어로 된 문자열을 입력하시오 : ");
	gets(str);
	for (i = 0; i < strlen(str); i++){
		if (isspace(str[i]))
			str[i]=str[i];
		else{
			anstr[j] = str[i];
			j++;
		}
	}
	anstr[j] = '\0';
	printf("변경 후 문자열 : %s\n",anstr);
}