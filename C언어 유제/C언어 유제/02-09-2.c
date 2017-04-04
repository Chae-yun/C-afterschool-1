#include <stdio.h>
int main()
{
	int i;
	int ch;
	for (i = 1; i <= 5; ++i)
	{
		printf("i=%d", i);
		ch = getchar();
		putch(ch);
	}
}