#include <stdio.h>
int main()
{
	int hour, minute, second;
	hour = 5928 / 3600;
	minute = 5928 % 3600 / 60;
	second = 5928 % 3600 % 60;
	printf("5928�ʴ� %d�� %d�� %d���̴�.\n", hour, minute, second);
}