#include <stdio.h>
#pragma warning(disable:4996)
void gob(int num);
int main()
{
	int num;
	printf("양의 정수를 입력하시오 : ");
	scanf("%d", &num);
	gob(num);
}
void gob(int num){
	printf("%d단\n", num);
	for (int i = 1; i <= 9; i++)
		printf("%d X %d = %d\n", num, i, num*i);
}