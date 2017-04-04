#include<stdio.h>
int main()
{
	double *ap;
	int i;
	ap = calloc(5, sizeof(double)); //초기화 되서 0
	//ap = malloc(5 * sizeof(double));  초기화가 안 되서 쓰레기값
	for (i = 0; i < 5; i++)
		printf("%lf\n", ap[i]);
}