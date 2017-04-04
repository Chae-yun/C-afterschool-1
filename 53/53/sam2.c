#include <stdio.h>
#pragma warning(disable:4996)
void abc(int num);
int main()
{
	int n;
	printf("정수 n을 입력하시오 : ");
	scanf("%d", &n);
	abc(n);
}
void abc(int num){
	for (int a = 0; a <= 10; a++){
		for (int b = 0; b <= 10; b++){
			for (int c = 0; c <= 10; c++){
				if (a*b - c == num)
					printf("%d X %d - %d = %d\n", a, b, c, num);
			}
		}
	}
}