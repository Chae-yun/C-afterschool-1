#include<stdio.h>
#pragma warning (disable:4996)

int main()
{
	int a, b, c;
	printf("삼각형의 길이 세 개를 입력해주세요 : ");
	scanf("%d %d %d", &a, &b, &c);

	if (a + b < c || b + c < a || c + a < b){
		printf("삼각형이 아님\n");
	}

	else if (a == b && b == c&&c == a){
		printf("정삼각형\n");
	}

	else if (a == b || b == c || c == a){
		printf("이등변 삼각형\n");
	}

	else if ((a*a + b*b == c*c) || (b*b + c*c == a*a) || (c*c + a*a == b*b)){
		printf("직각 삼각형\n");
	}

	else{
		printf("일반삼각형\n");
	}
}