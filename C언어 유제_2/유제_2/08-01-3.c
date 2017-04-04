#include <stdio.h>
#pragma warning(disable:4996)
int count(int num);
int main()
{
	int num;
	printf("양의 정수를 입력하시오 : ");
	scanf("%d", &num);
	printf("이 정수의 자리수는 %d입니다.\n", count(num));
}
int count(int num){
	int count = 1;
	while (num / 10 != 0){
		num /= 10;
		count++;
	}
	return count;
}