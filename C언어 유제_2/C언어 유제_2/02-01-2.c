//문자 상수 출력 예
#include <stdio.h>
int main()
{
	const char w = 'A', x = 65, y = '\x41', z = '\101'; //기호상수(const)선언 y는 16진수, z는 8진수?
	printf("%c\n", w);
	/*%c는 문자상수 또는 문자변수의 출력형식을 의미한다.
	w는 문자형식으로 출력하라는 의미이다.
	\n은 줄을 바꾸라는 의미로 w의 내용을 문자로 출력하고 줄을 바꾼다.*/
	printf("%c\n", x);
	printf("%c", '\n'); //printf("\n");와 같다. '\n'이라는 문자를 출력
	printf("%c\n", y);
	printf("%c\n", z);
	printf("%c\n", 'A'); //변수로 지정하지 않고 상수 'A'와 같이 사용할 수 있다.
	printf("A\n"); //직접문자 'A'를 출력한다.
}