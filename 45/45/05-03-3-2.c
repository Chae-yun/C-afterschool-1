#include <stdio.h>
#pragma warning(disable:4996)
int main()
{
	int x, y, x_;
	printf("자연수를 입력하시오 : ");
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