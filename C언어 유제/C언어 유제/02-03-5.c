#include <stdio.h>
int main()
{
	int week, day;
	week = 365 / 7;
	day = 365 - 7 * week;
	printf("365일은 %d주하고 %d일입니다.\n", week, day);
}