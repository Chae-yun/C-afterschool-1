#include <stdio.h>
#pragma warning(disable:4996)
void multiple(int num);
int main()
{
	int num, ret;
	while (1){
		printf("�ڿ����� �Է��Ͻÿ� : ");
		ret = scanf("%d", &num);
		if (ret == EOF)
			break;
		printf("��� : ");
		multiple(num);
		printf("\n");
	}
}
void multiple(int num){
	for (int i = 1; i <= num; i++){
		if (num%i == 0)
			printf("%d  ", i);
	}
}