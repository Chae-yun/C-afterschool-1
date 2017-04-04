#include <stdio.h>
#include "Point.h"

int main()
{
	POINT p1 = { 0, 0 };
	POINT p2 = { 300, 400 };
	printf("p1 = ");
	PrintPoint(&p1);
	printf("p2 = ");
	PrintPoint(&p2);
	printf("두 점 사이의 거리 : %f\n", GetDistance(&p1, &p2));
	MovePoint(&p2, 10, 10);
	printf("MovePoint 호출 후 p2 = ");
	PrintPoint(&p2);
	return 0;
}