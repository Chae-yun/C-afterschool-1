#include<stdio.h>
#pragma warning(disable:4996)

struct vision{
	double left;
	double right;
};

struct vision exchange(struct vision);

int main()
{
	struct vision robot;
	printf("�κ�Ʈ�� �÷��� �Է��ϼ���(��, ��) : ");
	scanf("%lf%lf", &robot.left, &robot.right);
	robot = exchange(robot);
	printf("�ٲ� �κ�Ʈ�� �÷�(��, ��) : %.1lf, %.1lf\n", robot.left, robot.right);
	return 0;
}

struct vision exchange(struct vision robot) //����ü�� ������ ��쿡�� struct ����ü�� �� �տ� ���ش�
{
	double temp;
	temp = robot.left;
	robot.left = robot.right;
	robot.right = temp;
	return robot;
}