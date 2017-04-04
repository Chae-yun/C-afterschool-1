#include <stdio.h>
#pragma warning(disable:4996)
int main()
{
	int a, b = 1;
	printf("정수를 입력하세요 : ");
	scanf("%d", &a);
	printf("%d의 약수 = ", a);
loop:
	if (a%b == 0){
		printf("%d", b);
		printf(" ");
	}
	b++;
	if (b <= a)
		goto loop;
}