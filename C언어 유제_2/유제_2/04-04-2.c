#include <stdio.h>
#pragma warning(disable:4996)
#define area(width,height) width*height*1/2
int main()
{
	double width, height;
	printf("구하고 싶은 삼각형의 밑변과 높이를 입력하시오 : ");
	scanf("%lf %lf", &width, &height);
	printf("삼각형의 밑변이 %lf이고 높이가 %lf일때 넓이는 %.1lf 입니다.\n", width, height, area(width, height));
}