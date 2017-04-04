#include<stdio.h>
#include<string.h>
#pragma warning(disable:4996)
int main()
{
	char str[] = "almost every programmer should know memset";
	memset(str, '-', 6);
	puts(str);
}