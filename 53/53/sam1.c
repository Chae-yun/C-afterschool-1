#include <stdio.h>
#pragma warning(disable:4996)
void gogodan(int num);
int main()
{
	int num;
	printf("1 또는 2를 입력하시오 : ");
	scanf("%d", &num);
	gogodan(num);
}
void gogodan(int num){
	for (; num <= 9; num += 2){
		if (num == 1)
			continue;
		for (int i = 1; i <= 9; i++)
			printf("%d X %d = %d\n", num, i, num*i);
	}
}