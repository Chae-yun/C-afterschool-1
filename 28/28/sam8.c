#include<stdio.h>
int main()
{
	char c = 'Q';
	char *char_pointer = &c;
	printf("%c %c\n", c, *char_pointer);
	c = '/';
	printf("%c %c\n", c, *char_pointer);
	*char_pointer = ')';
	printf("%c %c\n", c, *char_pointer);
} //같이 변하나 보다...