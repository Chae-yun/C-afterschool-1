#include <stdio.h>
#include <math.h>

typedef struct point{
	int x, y;
}POINT;

double Distance(POINT *pt1, POINT *pt2){
	double distance;
	distance = sqrt(pow(pt2->x - pt1->x, 2) + pow(pt2->y - pt1->y, 2));
	return distance;
}

int main()
{
	POINT pt1 = { 100, 100 };
	POINT pt2 = { 130, 140 };
	double dist;
	dist = Distance(&pt1, &pt2);
	printf("두 점 사이의 거리 : %f\n", dist);
	return 0;
}