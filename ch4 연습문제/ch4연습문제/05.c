#include <stdio.h>
#define SWAP(x,y) temp=x; x=y; y=temp
#pragma warning(disable:4996)
int main()
{
	int x, y, temp=0;
	printf("��ȯ�� �� ������ �Է��Ͻÿ� : ");
	scanf("%d %d", &x, &y);
	SWAP(x,y);
	printf("��ȯ ����� x = %d, y = %d\n", x, y);
}