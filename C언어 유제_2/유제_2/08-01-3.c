#include <stdio.h>
#pragma warning(disable:4996)
int count(int num);
int main()
{
	int num;
	printf("���� ������ �Է��Ͻÿ� : ");
	scanf("%d", &num);
	printf("�� ������ �ڸ����� %d�Դϴ�.\n", count(num));
}
int count(int num){
	int count = 1;
	while (num / 10 != 0){
		num /= 10;
		count++;
	}
	return count;
}