#include <stdio.h>
#pragma warning(disable:4996)
int main()
{
	int num, sum = 0, count = 1;
	printf("������ �ϳ� �Է��Ͻÿ� : ");
	scanf("%d", &num);

	for (count = 1; count <= num; count++){
		sum += count;
	}
	printf("�� ���� %d�̰�, ", sum);
	sum = 0, count = 1;

	while (count <= num){
		if (count % 2 == 1){
			sum += count;
		}
		count++;
	}
	printf("Ȧ���� ���� %d�̰�, ", sum);
	sum = 0, count = 1;

	do{
		if (count % 2 == 0){
			sum += count;
		}
		count++;
	} while (count <= num);
	printf("¦���� ���� %d�Դϴ�.\n", sum);
}