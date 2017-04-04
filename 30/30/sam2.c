#include<stdio.h>
#include<stdlib.h>

int main(int argc, char* argv[])
{
	int i, lhs, rhs;
	char op;
	lhs = atoi(argv[1]);
	op = argv[2][0];
	rhs = atoi(argv[3]);

	switch (op){
		case '+':
			printf("%d + %d = %d\n", lhs, rhs, lhs + rhs); break;
		case '-':
			printf("%d - %d = %d\n", lhs, rhs, lhs - rhs); break;
		case '*':
			printf("%d * %d = %d\n", lhs, rhs, lhs * rhs); break;
		case '/':
			printf("%d / %d = %d\n", lhs, rhs, lhs / rhs); break;
		default:
			printf("잘못 입력하셨습니다.\n");
	}
	return 0;
}