#include <stdio.h>
#pragma warning(disable:4996)
int main()
{
	int a,b,sum=0;
	printf("������ �Ѱ� �Է��Ͻÿ� : ");
	scanf("%d", &a);
	for (b = 1; b <= a; b++){
		sum += b;
	}
	printf("1���� %d������ ���� %d\n", a, sum);
	b = 1, sum=0;
	while (b <= a){
		if (b % 2 != 0)
			sum += b;
		b++;
	}
	printf("1���� %d���� Ȧ���� ���� %d\n", a, sum);
	b = 1, sum = 0;
	do{
		if (b % 2 == 0)
			sum += b;
		b++;
	} while (b <= a);
	printf("1���� %d���� ¦���� ���� %d\n", a, sum);
}