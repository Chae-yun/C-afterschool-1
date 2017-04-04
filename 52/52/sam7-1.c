#include <stdio.h>
#pragma warning(disable:4996)
void zzachol(int);
int zzac = 0, hol = 0;
int main()
{
	int n;
	printf("정수를 입력하시오 : ");
	scanf("%d", &n);
	zzachol(n);
	printf("자연수 중에서 짝수의 합 : %d\n", zzac);
	printf("자연수 중에서 홀수의 합 : %d\n", hol);
}
void zzachol(int n){
	for (int i = 1; i <= n; i++){
		if (i % 2 == 0)
			zzac += i;
		else
			hol += i;
	}
}