#include<stdio.h>
#pragma warning(disable:4996)
int main()
{
	int i =0, result = 0;
	char twonum[33],*bp;
	bp = twonum;
	printf("2������ �Է��Ͻÿ�<32�ڸ� ����> : ");
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