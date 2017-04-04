#include<stdio.h>
#include<stdlib.h>
#define TRUE 1
#define FALSE 0
#define AND &
#define OR |
int main()
{
	printf("%4s %4s | %s\n", "x", "y", "x AND y");
	printf("--------------------------\n");
	printf("%4d %4d | %4d\n", FALSE, FALSE, FALSE AND FALSE);
	printf("%4d %4d | %4d\n", FALSE, TRUE, FALSE AND TRUE);
	printf("%4d %4d | %4d\n", TRUE, FALSE, TRUE AND FALSE);
	printf("%4d %4d | %4d\n", TRUE, TRUE, TRUE AND TRUE);
	printf("\n\n");
	printf("%4s %4s | %s\n", "x", "y", "x OR y");
	printf("--------------------------\n");
	printf("%4d %4d | %4d\n", FALSE, FALSE, FALSE OR FALSE);
	printf("%4d %4d | %4d\n", FALSE, TRUE, FALSE OR TRUE);
	printf("%4d %4d | %4d\n", TRUE, FALSE, TRUE OR FALSE);
	printf("%4d %4d | %4d\n", TRUE, TRUE, TRUE OR TRUE);
}