#include <stdio.h>
#pragma warning(disable:4996)
int main()
{
	int num;
	printf("���ڸ� �ϳ� �Է��Ͻÿ� : ");
	scanf("%d", &num);
	while (num > 0){
		num--;
		printf("*");
	}
	printf("\n");
}