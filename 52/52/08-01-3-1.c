#include <stdio.h>
#pragma warning(disable:4996)
int gcd(int, int); #include <stdio.h>
#pragma warning(disable:4996)
int lcd(int, int);
int main()
{
	int i, j;
	printf("최대공약수와 최소공배수를 구할 두 수를 입력하시오 : ");
	scanf("%d%*c%d", &i, &j);
	printf("두 수의 최대공약수는 %d이고, 최소공배수는 %d이다.\n", gcd(i, j), lcd(i, j));
	printf("48과 56의 최대공약수는 %d이고, 최소공배수는 %d이다.\n", gcd(48, 56), lcd(48, 56));
}
int gcd(int a, int b){
	int gcd;
	for (int i = 1; i <= a; i++){
		if (a%i == 0 && b%i == 0)
			gcd = i;
	}
	return gcd;
	/*유클리드호제법
	int z = 1;
	while (z != 0){
		z = a%b;
		a = b;
		b = z;
	}
	return a;*/

	/*나래방법
	while (a != b){
		if (a > b)
			a = a - b;
		else
			b = b - a;
	}
	return a;*/

	/*민선방법
	if (b == 0)
		return i;
	return gcd(j, i % j);*/
}
int lcd(int a, int b){
	for (int i = a; ; i++){
		if (i%a == 0 && i%b == 0)
			return i;
	}
	/*민선방법
	return (i * j) / gcd(j, i % j);*/
}