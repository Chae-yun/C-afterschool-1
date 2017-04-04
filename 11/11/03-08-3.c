#include <stdio.h>
int main()
{
	char ch = 'A';
loop:
	printf("%c", ch);
	ch++;
	if (ch <= 'Z')
		goto loop;
}