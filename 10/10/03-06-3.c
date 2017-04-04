#include <stdio.h>
#pragma warning(disable:4996)
int main()
{
	int i, j, k;
	printf("세 변의 값을 입력하시오 : ");
	scanf("%d%*c%d%*c%d%*c", &i, &j, &k);
	if (i + j < k || i + k < j || j + k < i)
		printf("삼각형이 아님\n");
	else if (i == j && j == k && k == i)
		printf("정삼각형\n");
	else if (i == j || j == k || k == i)
		printf("이등변삼각형\n");
	else if (i*i + j*j == k*k || j*j + k*k == i*i || k*k + i*i == j*j)
		printf("직각삼각형\n");
	else
		printf("일반삼각형\n");
}