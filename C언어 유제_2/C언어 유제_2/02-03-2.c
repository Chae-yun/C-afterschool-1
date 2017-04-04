#include <stdio.h>
int main()
{
	int hour, minute, second, t = 5928;
	int time = t;
	hour = t / 3600;
	t = t % 3600;
	minute = t / 60;
	second = t % 60;
	/*hour = t / 3600;
	minute = (t - hour * 3600) / 60;
	second = t - hour * 3600 - minute * 60;*/
	printf("%d초는 %d시 %d분 %d초이다.\n", time, hour, minute, second);
}