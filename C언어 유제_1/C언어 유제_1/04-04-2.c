#include <stdio.h>
#pragma warning(disable:4996)
#define area(width,height) width*height*1/2
int main()
{
	double width=2, height=5;
	printf("�ﰢ���� �غ��� 2�̰� ���̰� 5�϶� ���̴� %.1lf �Դϴ�.\n", area(width, height));
}