#include<stdio.h>

typedef struct point{
	int x;
	int y;
}POINT;

void PrintPoint(const POINT *p);
void MovePoint(POINT *p, int dx, int dy);

int main()
{
	POINT p1 = { 100, 200 };
	POINT p2 = { 300, 400 };
	printf("p1 = ");
	PrintPoint(&p1);
	printf("p2 = ");
	PrintPoint(&p2);
	MovePoint(&p1, 10, 10);
	printf("����� p1�� ��ǥ : ");
	PrintPoint(&p1);
}

void PrintPoint(const POINT *p)
{
	printf("(%d, %d)\n", p->x, p->y);
}

void MovePoint(POINT *p, int dx, int dy)
{
	p->x += dx;
	p->y += dy;
}