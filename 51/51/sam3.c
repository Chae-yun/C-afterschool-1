#include <stdio.h>

typedef struct rect{
	int x1, y1;
	int x2, y2;
}RECT;

int GetArea(RECT *p){
	int width, height;
	width = p->x2 - p->x1;
	height = p->y2 - p->y1;
	return width*height;
}

int main()
{
	RECT p1 = { 10, 10, 40, 50 };
	printf("�� : (%d, %d), (%d, %d)\n", p1.x1, p1.y1, p1.x2, p1.y2);
	printf("���� : %d\n", GetArea(&p1));
}//�ּҷ� �����ϴ� ���� ���