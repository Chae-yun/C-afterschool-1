#include<stdio.h>
#include<string.h>
#pragma warning(disable:4996)
int main()
{
	char str[20] = "abcde";
	strcat(str, "12345");
	printf("str = %s\n", str);
	return 0;
}