#include <stdio.h>
int main()
{
	char x = 'a';
	printf("%c, ", x - 32);  //32는 ASCII코드에서 'a'와 'A' 사이의 거리이다.
	printf("%c, ", x);
	printf("%c, ", 65);    //대문자 A는 ASCII코드 값 65이다.
	printf("%d%c", x - 'A', '\n');
}