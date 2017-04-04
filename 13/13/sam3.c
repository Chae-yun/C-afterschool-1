#include<stdio.h>
#define PRINT1(x) printf("x=%d\n",x)
#define PRINT2(x) printf("#x=%d\n",x)
#define var(a,b) (a##b)
int main(void)
{
	int num = 10;
	int var(Total, Score);
	PRINT1(num);
	PRINT2(num);
	TotalScore = 256;
	printf("รัมก = %d\n", TotalScore);
	return 0;
}