#include<stdio.h>
int main()
{
	int arr[5] = { 10, 20, 30, 40, 50 };
	int *p = &arr[2];
	printf("p[0] = %d\n", p[0]);
	printf("p[1] = %d\n", p[1]);
}