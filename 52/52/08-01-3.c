#include <stdio.h>
#pragma warning(disable:4996)
int gcd(int, int);
int main()
{
	int i, j;
	printf("�ִ������� ���� �� ���� �Է��Ͻÿ� : ");
	scanf("%d%*c%d", &i, &j);
	printf("�� ���� �ִ������� %d�̴�.\n", gcd(i, j));
	printf("48�� 56�� �ִ������� %d�̴�.\n", gcd(48, 56));
}
int gcd(int a, int b){
	int gcd;
	for (int i = 1; i <= a; i++){
		if (a%i == 0 && b%i == 0)
			gcd = i;
	}
	return gcd;
}