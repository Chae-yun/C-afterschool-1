#include<stdio.h>
#include<math.h>
#pragma warning(disable:4996)

struct line{
	struct point{
		int x, y;
	}start, finish;
};

int main()
{
	struct line ln;
	printf("두 점 사이의 거리를 구하고 싶은 두 점의 좌표를 입력하시오.\n첫번째 점 : ");
	scanf("%d %d", &ln.start.x, &ln.start.y);
	printf("두번째 점 : ");
	scanf("%d %d", &ln.finish.x, &ln.finish.y);
	int dx = ln.finish.x - ln.start.x;
	int dy = ln.finish.y - ln.start.y;
	printf("%lf",sqrt(dx*dx + dy*dy));
	return 0;
}