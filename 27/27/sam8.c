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
	printf("�� �� ������ �Ÿ��� ���ϰ� ���� �� ���� ��ǥ�� �Է��Ͻÿ�.\nù��° �� : ");
	scanf("%d %d", &ln.start.x, &ln.start.y);
	printf("�ι�° �� : ");
	scanf("%d %d", &ln.finish.x, &ln.finish.y);
	int dx = ln.finish.x - ln.start.x;
	int dy = ln.finish.y - ln.start.y;
	printf("%lf",sqrt(dx*dx + dy*dy));
	return 0;
}