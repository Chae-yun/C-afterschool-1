#include<stdio.h>
#include<string.h>
#include<ctype.h>
#pragma warning(disable:4996)
int main()
{
	int a;
	char str[50] = "The 16 men and 21 women ate 3 pigs";
	char num[20] = { 0, 1, 2, 3, 4, 5, 6, 7, 8, 9 };
	for (int i = 0; i < strlen(str); i++){
		if (isdigit(str[i]))
			printf("%d ",i);
	}
}
