#include<stdio.h>
#include<ctype.h>
#pragma warning(disable:4996)
int main()
{
	int i = 0;
	char str[100];
	int result[30] = { 0 };
	printf("영 문자열을 입력하시오 : ");
	gets(str);
	while (str[i]){
		if (str[i] >= 'a' && str[i] <= 'z')
			result[str[i] - 'a']++;
		if (str[i] >= 'A' && str[i] <= 'Z')
			result[str[i] = 'A']++;
		i++;
	}
	for (i = 0; i < 26; i++)
		printf("%c : %d\n", i + 'a', result[i]);
}

//97-122