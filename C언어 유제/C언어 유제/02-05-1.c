#include <stdio.h>
int main()
#pragma warning(disable:4996)
{
	int tempC;
	double tempF;
	printf("원하는 섭씨 온도를 입력하세요");
	scanf("%d", &tempC);
	tempF = tempC*1.8 + 32.;
	printf("섭씨 %d도는 화씨 %f도 입니다.", tempC, tempF);
}