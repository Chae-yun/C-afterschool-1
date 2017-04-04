#include <stdio.h>
#pragma warning(disable:4996)
int main()
{
	int count = 0, password, right = 1234;
	do{
		printf("패스워드를 입력하시오 : ");
		scanf("%d", &password);
		count++;
		if (password == right){
			printf("로그인 되었습니다.\n");
			break;
		}
		printf("%d 번째로 로그인에 실패하셨습니다.\n", count);
	} while (count < 3);
}