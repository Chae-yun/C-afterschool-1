#include <stdio.h>
int main()
{
	int week, day;
	week = 365 / 7;
	day = 365 - 7 * week;
	printf("365���� %d���ϰ� %d���Դϴ�.\n", week, day);
}