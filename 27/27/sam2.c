#include<stdio.h>

struct point{
	int x, y;
};

int main()
{
	struct point p1 = { 10, 20 };
	struct point p2 = { 30, 40 };
	struct point p3 = p1; //��� �� ��� �ʱ�ȭ ����
	struct point p4;
	printf("p3�� ��ǥ : %d, %d\n", p3.x, p3.y);
	p4 = p2; //��� �� ��� ���� ����
	printf("p4�� ��ǥ : %d, %d\n", p4.x, p4.y);
	return 0;
}
