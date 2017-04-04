#include<stdio.h>
#pragma warning(disable:4996)
int main()
{
	char one[50];
	char two[50];
	int i, length;
	printf("첫번째 문자열을 입력하시오 : ");
	gets(one);
	printf("합치고 싶은 두번째 문자열을 입력하시오 : ");
	gets(two);
	length = strlen(one);
	for (i = 0; i < strlen(two); i++)
		one[length + i] = two[i];
	one[i + length] = '\0';
	for (i = 0; i < strlen(one); i++)
		printf("%c", one[i]);
	/*int i = 0, j = 0;
	char str1[100]="This is ";
	char str2[100]="sample string.";
	while(str1[i])
		i++;
	while(str2[j])
		str1[i++] = str2[j++];
	str1[i] = '\0'
	printf("%s\n",str1);*/
}