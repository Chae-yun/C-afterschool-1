#include<stdio.h>
typedef struct point{
	int x;
	int y;
}POINT;

/*void PrintPoint(POINT p)
{
	printf("(%d, %d)\n", p.x, p.y);
}

int main()
{
	POINT p1 = { 100, 200 };
	PrintPoint(p1);
}

//값에 의한 전달방법이므로 복사만 되고 원본은 바뀌지 않음*/

void PrintPoint(POINT *p)
{
	printf("(%d, %d)\n", p->x, p->y);
}

int main()
{
	POINT p1 = { 100, 200 };
	PrintPoint(&p1);
}

//포인터에 의한 전달방법이므로 원본이 바뀜