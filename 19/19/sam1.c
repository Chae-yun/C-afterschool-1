#include<stdio.h>
void PrintCount(void);
int main()
{
	int count = 0;
	printf("main : count = %d\n", count);
	return 0;
}
void PrintCount(void){
	int count = 10;
	printf("PrintCount : count = %d\n", count);
}