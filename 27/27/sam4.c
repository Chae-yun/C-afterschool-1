#include<stdio.h>
#include<math.h>

struct point{
	int x, y;
};
 
double GetDistance(struct point* p1, struct point* p2);

int main()
{
	struct point pt1 = { 0, 0 };
	struct point pt2 = { 10, 10 };
	double distance;
	distance = GetDistance(&pt1, &pt2);
	printf("�� �� ������ �Ÿ� : %5.2f\n", distance);
	return 0;
}
double GetDistance(struct point* p1, struct point* p2)
{
	int dx = p2->x - p1->x; //x2-x1;
	int dy = p2->y - p1->y; //y2-y1;
	return sqrt(dx*dx + dy*dy); //��Ʈ �ȿ� (x2-x1)�� ���� ���ϱ� (y2-y1)�� ����
}