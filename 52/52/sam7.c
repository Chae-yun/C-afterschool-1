#include <stdio.h>
#pragma warning(disable:4996)
void zzachol(int, int, int);
int main()
{
	int n, zzac = 0, hol = 0;
	printf("정수를 입력하시오 : ");
	scanf("%d", &n);
	zzachol(n, &zzac, &hol);
	printf("자연수 중에서 짝수의 합 : %d\n", zzac);
	printf("자연수 중에서 홀수의 합 : %d\n", hol);
}
void zzachol(int n, int *zzac, int *hol){
	for (int i = 1; i <= n; i++){
		if (i % 2 == 0)
			*zzac += i;
		else
			*hol += i;
	}
}