#include <stdio.h>
#pragma warning(disable:4996)
int main()
{
	int year, month, day;
	printf("년 월 일을 입력하시오 : ");
	scanf("%d %d %d", &year, &month, &day);
	if (year%400 ==0 || year%100 != 0 && year%4==0){
		//leaf = 1; 이런걸 넣으면 아래서도 간단히 쓸수 있다. =>플래그비트?변수?  근데 나는 안됨ㅋ
		if (month == 4 || month == 6 || month == 9 || month == 11){
			if (day == 30)
				printf("다음날은 %d년 %d월 1일\n", year, month + 1);
			else if (day > 30)
				printf("잘못 입력하셨습니다.\n");
			else
				printf("다음날은 %d년 %d월 %d일\n", year, month, day + 1);
		}
		else if (month == 1 || month == 3 || month == 5 || month == 7 || month == 8 || month == 10){
			if (day == 31)
				printf("다음날은 %d년 %d월 1일\n", year, month + 1); //나니 1일 이게 플래그 변수???? 안들었당..ㅎ
			else if (day > 31)
				printf("잘못 입력하셨습니다.\n");
			else
				printf("다음날은 %d년 %d월 %d일\n", year, month, day + 1);
		}
		else if (month == 12){
			if (day >= 31)
				printf("다음날은 %d년 1월 1일\n", year + 1);
			else
				printf("다음날은 %d년 %d월 %d일\n", year, month, day + 1);
		}
		else if (month == 2){
			if (day >= 29)
				printf("다음날은 %d년 %d월 1일\n", year, month + 1);
			else
				printf("다음날은 %d년 %d월 %d일\n", year, month, day + 1);
		}
		else
			printf("잘못 입력하셨습니다.\n");
	}

	else{
		if (month == 4 || month == 6 || month == 9 || month == 11){
			if (day == 30)
				printf("다음날은 %d년 %d월 1일\n", year, month + 1);
			else if (day > 30)
				printf("잘못 입력하셨습니다.\n");
			else
				printf("다음날은 %d년 %d월 %d일\n", year, month, day + 1);
		}
		else if (month == 1 || month == 3 || month == 5 || month == 7 || month == 8 || month == 10){
			if (day == 31)
				printf("다음날은 %d년 %d월 1일\n", year, month + 1);
			else if (day > 31)
				printf("잘못 입력하셨습니다.\n");
			else
				printf("다음날은 %d년 %d월 %d일\n", year, month, day + 1);
		}
		else if (month == 12){
			if (day >= 31)
				printf("다음날은 %d년 1월 1일\n", year + 1);
			else
				printf("다음날은 %d년 %d월 %d일\n", year, month, day + 1);
		}
		else if (month == 2){
			if (day >= 28)
				printf("다음날은 %d년 %d월 1일\n", year, month + 1);
			else
				printf("다음날은 %d년 %d월 %d일\n", year, month, day + 1);
		}
		else
			printf("잘못 입력하셨습니다.\n");
	}
}
