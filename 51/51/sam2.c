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
}값에 의한 전달 방법*/

int main()
{
	POINT p1 = { 100, 200 };
	PrintPoint(&p1);
}//주소로 전달하는 전달 방법