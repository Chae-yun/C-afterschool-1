#include<stdio.h>
#include<string.h>
int main()
{
	char str1[] = "abcde";
	char str2[10] = "";
	printf("str1의 길이 = %d\n", strlen(str1));
	printf("str2의 길이 = %d\n", strlen(str2));
	printf("문자열의 길이 = %d\n", strlen("Hello World"));
	return 0;
}
	