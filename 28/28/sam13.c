#include<stdio.h>
int main()
{
	double *ap;
	int i;
	ap = calloc(5, sizeof(double)); //�ʱ�ȭ �Ǽ� 0
	//ap = malloc(5 * sizeof(double));  �ʱ�ȭ�� �� �Ǽ� �����Ⱚ
	for (i = 0; i < 5; i++)
		printf("%lf\n", ap[i]);
}