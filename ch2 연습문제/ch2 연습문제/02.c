#include <stdio.h>
int main()
{
	long long distance = 149597870, speed = 299792458;
	long long minute, second;
	distance = distance * 1000;
	minute = distance / (speed*60);
	second = distance / speed - minute * 60;
	//printf("태양 빛이 지구에 도달하는 데 걸리는 시간은 %d분 %d초이다.\n", minute, second);
	printf("태양 빛이 지구에 도달하는 데 걸리는 시간은 %d분이다.\n", minute);
	printf("태양 빛이 지구에 도달하는 데 걸리는 시간은 %d초이다.\n", second);
}