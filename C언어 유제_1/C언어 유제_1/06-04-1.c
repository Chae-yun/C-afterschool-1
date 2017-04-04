#include<stdio.h>
#include<ctype.h>
#pragma warning(disable:4996)
int main()
{
	int i=0, alnum = 0, spacepunct = 0;
	char str[100];
	printf("영어로 된 문자열을 입력하시오 : ");
	gets(str);
	for (i = 0; str[i]; i++){
		if (isalnum(str[i]))
			alnum++;
		if (isspace(str[i]) || ispunct(str[i]))
			spacepunct++;
	}
	/*while (str[i]){
		if (isalnum(str[i]))
			alnum++;
		if (isspace(str[i]) || ispunct(str[i]))
			spacepunct++;
		i++;
	}*/
	printf("영숫자는 %d개이고, 공백또는 구두문자는 %d개 입니다.\n", alnum, spacepunct);
}