#include<stdio.h>
#include<string.h>
int main()
{
	int i;
	char c[30] = "Programming is imagination!";
	for (i = 0; i < strlen(c); i++)
		printf("%s\n", &c[i]);
}