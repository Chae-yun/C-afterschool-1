#include <stdio.h>
#pragma warning(disable:4996)
void multiple(int num);
int main()
{
	int num, ret;
	while (1){
		printf("자연수를 입력하시오 : ");
		ret = scanf("%d", &num);
		if (ret == EOF)
			break;
		printf("약수 : ");
		multiple(num);
		printf("\n");
	}
}
void multiple(int num){
	for (int i = 1; i <= num; i++){
		if (num%i == 0)
			printf("%d  ", i);
	}
}