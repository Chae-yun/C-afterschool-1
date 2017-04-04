#include<stdio.h>
#define output(x) printf("%d%d\n",x##1,x##2)
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