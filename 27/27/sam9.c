#include<stdio.h>
#pragma warning(disable:4996)

struct quad{
	int x, y, width, height;
}info;

int main()
{
	int length;
	printf("���簢���� ������ ��ǥ, ��, ���̸� �Է��Ͻÿ�.\n");
	printf("��ǥ : ");
	scanf("%d %d", &info.x, &info.y);
	printf("�� : ");
	scanf("%d", &info.width);
	printf("���� : ");
	scanf("%d", &info.height);
	printf("��ǥ : {%d, %d}, �� : %d, ���� : %d\n", info.x, info.y, info.width, info.height);
	length = (info.width + info.height) * 2;
	printf("���簢���� �ѷ��� %d�Դϴ�.\n", length);
}