#include<stdio.h>
int main()
{
	int i;
	int str[15];
	for (i = 0; i < 10; i++){
		str[i] = i * 100;
		printf("%d ", str[i]);
	}
}
