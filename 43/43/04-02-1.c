#include<stdio.h>
#define DEBUG 1 //0�̸� sum���� ����
int main()
{
	int i, sum = 0;
	for (i = 1; i <= 10; i++){
		sum += i;
#if DEBUG
		printf("%d ", sum); //���Ǻ������� => �ҽ������� �پ��
#endif
	}
	printf("sum = %d\n", sum);
}