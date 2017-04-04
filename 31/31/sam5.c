#include<stdio.h>
#include<math.h>

typedef struct point{
	int x;
	int y;
}POINT;

double Distance(const POINT *p1, const POINT *p2);

int main()
{
	POINT pt1 = { 100, 100 };
	POINT pt2 = { 130, 140 };
	double dist;
	dist = Distance(&pt1, &pt2);
	printf("두 점 사이의 거리 : %f\n", dist);
	return 0;
}

double Distance(const POINT *p1, const POINT *p2){
	double dist;
	dist = sqrt(pow((p2->x - p1->x), 2) + pow((p2->y - p1->y), 2));
	return dist;
}