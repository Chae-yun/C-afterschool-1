#include <stdio.h>
#pragma warning(disable:4996)
int gcd(int, int);
int main()
{
	int i, j;
	printf("최대공약수를 구할 두 수를 입력하시오 : ");
	scanf("%d%*c%d", &i, &j);
	printf("두 수의 최대공약수는 %d이다.\n", gcd(i, j));
	printf("48과 56의 최대공약수는 %d이다.\n", gcd(48, 56));
}
int gcd(int a, int b){
	int gcd;
	for (int i = 1; i <= a; i++){
		if (a%i == 0 && b%i == 0)
			gcd = i;
	}
	return gcd;
}