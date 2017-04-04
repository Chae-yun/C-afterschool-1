#include <stdio.h>
#pragma warning(disable:4996)
int main()
{
	int num;
	double start, finish;
	printf("1. Kilometers -> Miles\n");
	printf("2. Kilometers -> Feet\n");
	printf("3. Miles -> Kilometers\n");
	printf("4. Miles -> Feet\n");
	printf("5. Feet -> Miles\n");
	printf("6. Feet -> Kilometers\n");
	printf("0. Quit\n");
	printf("번호를 선택하시오 : ");
	scanf("%d", &num);
	switch (num){
		case 1: 
			printf("변환하고 싶은 km를 입력하시오 : ");
			scanf("%lf", &start);
			finish = start*0.62137;
			printf("%lfkm는 %lfmiles입니다.\n", start, finish); break;
		case 2:
			printf("변환하고 싶은 km를 입력하시오 : ");
			scanf("%lf", &start);
			finish = start*3280.8;
			printf("%lfkm는 %lffeet입니다.\n", start, finish); break;
		case 3:
			printf("변환하고 싶은 miles를 입력하시오 : ");
			scanf("%lf", &start);
			finish = start*1.6093;
			printf("%lfmiles는 %lfkm입니다.\n", start, finish); break;
		case 4:
			printf("변환하고 싶은 miles를 입력하시오 : ");
			scanf("%lf", &start);
			finish = start*5280;
			printf("%lfmiles는 %lffeet입니다.\n", start, finish); break;
		case 5:
			printf("변환하고 싶은 feet를 입력하시오 : ");
			scanf("%lf", &start);
			finish = start*0.000304;
			printf("%lffeet는 %lfkm입니다.\n", start, finish); break;
		case 6:
			printf("변환하고 싶은 feet를 입력하시오 : ");
			scanf("%lf", &start);
			finish = start*0.000189;
			printf("%lffeet는 %lfkm입니다.\n", start, finish); break;
	}
}