#include <stdio.h>
#pragma warning(disable:4996)
void gob(int num);
int main()
{
	int num;
	printf("���� ������ �Է��Ͻÿ� : ");
	scanf("%d", &num);
	gob(num);
}
void gob(int num){
	printf("%d��\n", num);
	for (int i = 1; i <= 9; i++)
		printf("%d X %d = %d\n", num, i, num*i);
}