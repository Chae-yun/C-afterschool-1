#include<stdio.h>
#pragma warning(disable:4996)
#define PI 3.14159
#define LIMIT 100.0
#define MSG "passed!"
#define ERR_PRN printf("������ ������ϴ�!\n")
int main()
{
	double radius, area;
	printf("�������� �Է��Ͻÿ� : ");
	scanf("%lf", &radius);
	area = PI*radius*radius;
	if (area > LIMIT){
		ERR_PRN;
	}
	else{
		printf("���� ���� : %.2lf (%s)\n", area, MSG);
	}
	return 0;
}