#include<stdio.h>

int main(int argc, char* argv[]) //매개변수를 갖는 main함수
{
	int i; 
	printf("argc = %d\n", argc);
	for (i = 0; i < argc; i++) //명령행 인자 출력
		printf("argv[%d] = %s\n", i, argv[i]); //명령행 인자 출력
	return 0;
}