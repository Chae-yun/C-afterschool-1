#include <stdio.h>
#include <stdarg.h>
void printargs(int arg1, ...); //가변 인수를 사용하는 함수 원형 선언
int main()
{
	printf("s1 = ");
	printargs(1, 2, 3, 4, 5, -1);
	printf("s2 = ");
	printargs(100, 200, 300, -1);
}
void printargs(int arg1, ...) {
	va_list argptr;
	int i;
	va_start(argptr, arg1); //가변 인자 처리 시작
	for (i = arg1; i != -1; i = va_arg(argptr, int))
		printf("%d  ", i); //하나씩 가변 인자 얻기
	va_end(argptr); //가변 인자 처리 끝
	printf("\n");
}