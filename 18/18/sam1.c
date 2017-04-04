#include<stdio.h>
void PrintHello(void)
{
	printf("Hello World\n");
}
void PrintLine(void)
{
	int i;
	for (i = 0; i < 20; i++){
		printf("-");
	}
	printf("\n");
}
int main()
{
	PrintLine();
	PrintHello();
	PrintLine();
	return 0;
}