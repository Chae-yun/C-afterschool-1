#include <stdio.h>
#include <math.h>
#include "Point.h"

void PrintPoint(POINT *p){
	printf("(%d, %d)\n", p->x, p->y);
}

void MovePoint(POINT *p, int dx, int dy){
	p->x += dx;
	p->y += dy;
}

double GetDistance(POINT *p1, POINT *p2){
	int dx = p2->x - p1->x;
	int dy = p2->y - p1->y;
	return sqrt(dx*dx + dy*dy);
}