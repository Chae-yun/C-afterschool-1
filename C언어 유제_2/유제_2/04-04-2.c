#include <stdio.h>
#pragma warning(disable:4996)
#define area(width,height) width*height*1/2
int main()
{
	double width, height;
	printf("���ϰ� ���� �ﰢ���� �غ��� ���̸� �Է��Ͻÿ� : ");
	scanf("%lf %lf", &width, &height);
	printf("�ﰢ���� �غ��� %lf�̰� ���̰� %lf�϶� ���̴� %.1lf �Դϴ�.\n", width, height, area(width, height));
}