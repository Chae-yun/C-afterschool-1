#include <stdio.h>
#include <conio.h>
#pragma warning(disable:4996)
int main()
{
	int dan, y;
	dan = 2;
	while (dan < 10){
		printf("%8d단\n", dan);
		y = 1;
		while (y < 10){
			printf("%2d * %2d = %2d\n", dan, y, dan*y);
			y++;
		}
		printf("\n\n");
		getch(); //아무키나 누르면 다음 줄 실행, 실행시키면 2단이 출력되고 아무키나 누르면 다음 단이 출력
		dan++;
	}
}