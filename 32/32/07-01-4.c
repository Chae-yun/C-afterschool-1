#include <stdio.h>
#define ROW 3 //3행 : 매크로 지정
#define COL 3 //3열 : 매크로 지정
int main()
{
	int x[ROW][COL] = { 1, 2, 3, 4, 5, 6, 7, 8, 9 };
	int y[ROW][COL] = { 9, 8, 7, 6, 5, 4, 3, 2, 1 };
	int z[ROW][COL];
	int i, j, *xx, *yy, *zz;
	xx = x;
	yy = y;
	zz = z;
	for (int i = 0; i < ROW*COL; i++, xx++, yy++, zz++)
		*zz = *xx + *yy;
	zz = z;
	for (int i = 0; i < ROW; i++){
		for (int i = 0; i < COL; i++)
			printf("%d  ", *zz++);
		printf("\n");
	}
}