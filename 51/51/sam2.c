#include <stdio.h>

typedef struct point{
	int x;
	int y;
}POINT;

void PrintPoint(POINT *p){
	printf("(%d, %d)\n", p->x, p->y);
}

/*int main()
{
	POINT p1 = { 100, 200 };
	PrintPoint(p1);
}���� ���� ���� ���*/

int main()
{
	POINT p1 = { 100, 200 };
	PrintPoint(&p1);
}//�ּҷ� �����ϴ� ���� ���