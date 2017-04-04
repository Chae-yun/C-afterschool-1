#include <stdio.h>
int main()
{
	int hour, minute, second;
	hour = 5928 / 3600;
	minute = 5928 % 3600 / 60;
	second = 5928 % 3600 % 60;
	printf("5928초는 %d시 %d분 %d초이다.\n", hour, minute, second);
}