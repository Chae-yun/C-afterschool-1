#include<stdio.h>
#define DEBUG 1 //0이면 sum값만 찍힘
int main()
{
	int i, sum = 0;
	for (i = 1; i <= 10; i++){
		sum += i;
#if DEBUG
		printf("%d ", sum); //조건부컴파일 => 소스사이즈 줄어듦
#endif
	}
	printf("sum = %d\n", sum);
}