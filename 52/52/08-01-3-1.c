#include <stdio.h>
#pragma warning(disable:4996)
int gcd(int, int); #include <stdio.h>
#pragma warning(disable:4996)
int lcd(int, int);
int main()
{
	int i, j;
	printf("�ִ������� �ּҰ������ ���� �� ���� �Է��Ͻÿ� : ");
	scanf("%d%*c%d", &i, &j);
	printf("�� ���� �ִ������� %d�̰�, �ּҰ������ %d�̴�.\n", gcd(i, j), lcd(i, j));
	printf("48�� 56�� �ִ������� %d�̰�, �ּҰ������ %d�̴�.\n", gcd(48, 56), lcd(48, 56));
}
int gcd(int a, int b){
	int gcd;
	for (int i = 1; i <= a; i++){
		if (a%i == 0 && b%i == 0)
			gcd = i;
	}
	return gcd;
	/*��Ŭ����ȣ����
	int z = 1;
	while (z != 0){
		z = a%b;
		a = b;
		b = z;
	}
	return a;*/

	/*�������
	while (a != b){
		if (a > b)
			a = a - b;
		else
			b = b - a;
	}
	return a;*/

	/*�μ����
	if (b == 0)
		return i;
	return gcd(j, i % j);*/
}
int lcd(int a, int b){
	for (int i = a; ; i++){
		if (i%a == 0 && i%b == 0)
			return i;
	}
	/*�μ����
	return (i * j) / gcd(j, i % j);*/
}