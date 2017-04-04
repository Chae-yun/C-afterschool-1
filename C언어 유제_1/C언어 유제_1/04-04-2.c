#include <stdio.h>
#pragma warning(disable:4996)
#define area(width,height) width*height*1/2
int main()
{
	double width=2, height=5;
	printf("삼각형의 밑변이 2이고 높이가 5일때 넓이는 %.1lf 입니다.\n", area(width, height));
}