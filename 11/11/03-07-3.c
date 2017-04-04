#include <stdio.h>
#pragma warning(disable:4996)
int main()
{
	int choice;
	double tf, tc;
	printf("1 : 화씨 -> 섭씨\n");
	printf("2 : 섭씨 -> 화씨\n");
	scanf("%d", &choice);
	switch (choice*1){
	case 1:
		printf("화씨온도를 입력하시오 : ");
		scanf("%lf", &tf);
		tc = (tf - 32) * 5. / 9.;
		printf("화씨온도 %5.1lf는 섭씨온도 %5.1lf입니다.\n",tf,tc);
		break;
	case 2:
		printf("섭씨온도를 입력하시오 : ");
		scanf("%lf", &tc);
		tf = 9. / 5. * tc + 32;
		printf("섭씨온도 %lf는 화씨온도 %lf입니다.\n",tc,tf);
		break;
	default:
		printf("잘못된 입력입니다.\n");
	}
}