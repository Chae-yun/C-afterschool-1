#include<stdio.h>
#pragma warning(disable:4996)
int main()
{
	int i =0, result = 0;
	char twonum[33],*bp;
	bp = twonum;
	printf("2진수를 입력하시오<32자리 이하> : ");
	scanf("%[01]", twonum);
	while (*bp){
		result = result * 2 + twonum[i] - '0';
		printf("twonum[i] = %d\n", twonum[i]);
		printf("result = %d\n", result);
		i += 1;
		bp++;
		printf("\n");
	}
	printf("%s = %d\n", twonum, result);
}