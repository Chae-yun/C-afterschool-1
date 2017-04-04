#include <stdio.h>
#include <string.h>
#include "a.h"
int Compare(const void *e1, const void *e2)
{
	STUDENT *p1 = (STUDENT*)e1;
	STUDENT *p2 = (STUDENT*)e2;
	return strcmp(p1->name, p2->name);
}
void PrintStudent(const STUDENT *std, int num)
{
	int i;
	for (i = 0; i < num; i++)
		printf("%-10s %5.1f\n", std[i].name, std[i].ave);
	printf("\n");
}