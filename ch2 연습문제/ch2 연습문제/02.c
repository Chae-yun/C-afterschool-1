#include <stdio.h>
int main()
{
	long long distance = 149597870, speed = 299792458;
	long long minute, second;
	distance = distance * 1000;
	minute = distance / (speed*60);
	second = distance / speed - minute * 60;
	//printf("�¾� ���� ������ �����ϴ� �� �ɸ��� �ð��� %d�� %d���̴�.\n", minute, second);
	printf("�¾� ���� ������ �����ϴ� �� �ɸ��� �ð��� %d���̴�.\n", minute);
	printf("�¾� ���� ������ �����ϴ� �� �ɸ��� �ð��� %d���̴�.\n", second);
}