#include <stdio.h>
#pragma warning(disable:4996)
void zzachol(int);
int zzac = 0, hol = 0;
int main()
{
	int n;
	printf("������ �Է��Ͻÿ� : ");
	scanf("%d", &n);
	zzachol(n);
	printf("�ڿ��� �߿��� ¦���� �� : %d\n", zzac);
	printf("�ڿ��� �߿��� Ȧ���� �� : %d\n", hol);
}
void zzachol(int n){
	for (int i = 1; i <= n; i++){
		if (i % 2 == 0)
			zzac += i;
		else
			hol += i;
	}
}