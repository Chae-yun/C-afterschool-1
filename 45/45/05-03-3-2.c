#include <stdio.h>
#pragma warning(disable:4996)
int main()
{
	int x, y, x_;
	printf("�ڿ����� �Է��Ͻÿ� : ");
	scanf("%d", &x);
	x_ = 1;
	while (x_ <= x){
		y = 1;
		while (y <= x_){
			printf("*");
			y++;
		}
		printf("\n");
		x_++;
	}
}