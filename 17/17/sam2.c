#include <stdio.h>
#pragma warning(disable:4996)
int main()
{
	int num, answer = 1;
	printf("���丮���� ���� ������ �� �� �Է��Ͻÿ�  : ");
	scanf("%d", &num);
	for (int i = num; i >= 1; i--){
		answer *= i;
	}
	if (num == 0){
		printf("0�� ���丮���� 1�Դϴ�.\n");
	}
	else{
		printf("%d�� ���丮���� %d�Դϴ�.\n", num, answer);
	}
}