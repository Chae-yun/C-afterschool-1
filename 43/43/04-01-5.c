#include<stdio.h>
#define MKSTRING(str) # str
int main()
{
	int value;
	value = 10;
	printf("%s is %d\n", MKSTRING(value), value);
}