#include <stdio.h>
#pragma warning(disable:4996)
int main()
{
	int height;
	printf("키 : ");
	scanf("%d", &height);
	if (height < 120)
	{
		printf("키가 작습니다.\n");
		printf("이 놀이 기구는 탈 수 없습니다.\n");
		printf("키가 %dcm더 커야 합니다.\n", 120 - height);
	}
	else
	{
		printf("환영합니다. 즐거운 시간되시기 바랍니다.\n");
		printf("놀이 기구를 탑승하시고 반드시 안전벨트를 매십시오.\n");
	}
}