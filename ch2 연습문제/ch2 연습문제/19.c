#include <stdio.h>
#include <math.h>
#pragma warning(disable:4996)
int main()
{
	int num;
	printf("������ �Է��Ͻÿ� : ");
	scanf("%d", &num);
	num = (num / 5 - num / 10) * 10;
	printf("�ݿø��ϸ� %d�Դϴ�.\n", num);

}