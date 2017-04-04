#include<stdio.h>

double ary_avg(int *arr);

int main()
{
	int ary[5] = { 75, 80, 92, 88, 98 };
	double res;
	res = ary_avg(ary);
	printf("배열의 평균은 : %.2lf\n", res);
	return 0;
}

double ary_avg(int *arr)
{
	int i, sum = 0;
	double res;
	for (i = 0; i < 5; i++)
		sum += arr[i];
	res = sum / 5.;
	return res;
}