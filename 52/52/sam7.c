#include <stdio.h>
#pragma warning(disable:4996)
void zzachol(int, int, int);
int main()
{
	int n, zzac = 0, hol = 0;
	printf("������ �Է��Ͻÿ� : ");
	scanf("%d", &n);
	zzachol(n, &zzac, &hol);
	printf("�ڿ��� �߿��� ¦���� �� : %d\n", zzac);
	printf("�ڿ��� �߿��� Ȧ���� �� : %d\n", hol);
}
void zzachol(int n, int *zzac, int *hol){
	for (int i = 1; i <= n; i++){
		if (i % 2 == 0)
			*zzac += i;
		else
			*hol += i;
	}
}