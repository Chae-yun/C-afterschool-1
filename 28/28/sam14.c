#include<stdio.h>
#pragma warning(disable:4996)
int main()
{
	int *ip;
	int size = 5;
	int cnt = 0;
	int num;
	int i;
	ip = calloc(size, sizeof(int));
	while (1){
		printf("양수를 입력하세요 => ");
		scanf("%d", &num);
		if (num <= 0)
			break;
		if (cnt < size)
			ip[cnt++] = num;
		else{
			size += 5;
			ip = realloc(ip, size*sizeof(int)); //이전 데이터 자리까지 포함해서 할당
			ip[cnt++] = num;
		}
	}
	for (i = 0; i < cnt; i++)
		printf("%5d", ip[i]);
	free(ip);
	return 0;
}