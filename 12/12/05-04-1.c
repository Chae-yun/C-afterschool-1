#include <stdio.h>
#pragma warning(disable:4996)
int main()
{
	//��� �Է¹޴´�.
	/*int x;
	do{
		printf("����� �Է��Ͻÿ� : ");
		scanf("%d", &x);
	} while (x <= 0);
	printf("x=%d\n", x);*/
	int score;
	do{
		printf("0���� 100������ ������ �Է��Ͻÿ� : ");
		scanf("%d", &score);
	} while (score < 0 || score>100);
	printf("���� = %d\n", score);
}