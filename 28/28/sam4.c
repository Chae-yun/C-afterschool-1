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
	printf("로보트의 시력을 입력하세요(좌, 우) : ");
	scanf("%lf%lf", &robot.left, &robot.right);
	robot = exchange(robot);
	printf("바뀐 로보트의 시력(좌, 우) : %.1lf, %.1lf\n", robot.left, robot.right);
	return 0;
}

struct vision exchange(struct vision robot) //구조체로 리턴할 경우에는 struct 구조체명 을 앞에 써준다
{
	double temp;
	temp = robot.left;
	robot.left = robot.right;
	robot.right = temp;
	return robot;
}