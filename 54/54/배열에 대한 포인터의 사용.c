#include <stdio.h>
int main()
{
	int arr[5] = { 10, 20, 30, 40, 50 };
	int (*p)[5] = &arr;
	int i;
	for (i = 0; i < 5; i++)
		printf("%d ", (*p)[i]); //p[0][i] 또는 *((*p)+i)도 가능
}