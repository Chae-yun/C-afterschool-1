#include <stdio.h>
int main()
{
	printf("  1 && 1 => %d\n", 1 && 1);
	printf("  0 && 1 => %d\n", 0 && 1);
	printf("10 && 15 => %d\n", 10 && 15);
	printf("  0 || 1 => %d\n", 0 || 1);
	printf("  0 || 0 => %d\n", 0 || 0);
	printf("10 || 15 => %d\n", 10 || 15);
	printf("     !10 => %d\n", !10);
}