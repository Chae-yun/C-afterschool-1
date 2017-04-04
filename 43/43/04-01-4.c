#include<stdio.h>
#define output(x) printf("%d %d\n", x ## 1, x ## 2) //#2개는 결합, #1개는 문자열로 변환?
int main()
{
	int count1, count2, i1, i2;
	count1 = 10;
	count2 = 20;
	i1 = 99;
	i2 = -10;
	output(count);
	output(i);
}