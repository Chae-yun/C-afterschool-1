#include<stdio.h>
#pragma warning(disable:4996)

struct quad{
	int x, y, width, height;
}info;

int main()
{
	int length;
	printf("직사각형의 한점의 좌표, 폭, 높이를 입력하시오.\n");
	printf("좌표 : ");
	scanf("%d %d", &info.x, &info.y);
	printf("폭 : ");
	scanf("%d", &info.width);
	printf("높이 : ");
	scanf("%d", &info.height);
	printf("좌표 : {%d, %d}, 폭 : %d, 높이 : %d\n", info.x, info.y, info.width, info.height);
	length = (info.width + info.height) * 2;
	printf("직사각형의 둘레는 %d입니다.\n", length);
}