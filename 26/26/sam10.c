#include<stdio.h>
#include<stdlib.h>
#pragma warning(disable:4996)
int main()
{
	int n, m;
	int (*arr)[100] = NULL; //????모르겠댜ㅑㅑ
	int i, j, k;
	printf("배열의 제1크기와 제2크기를 입력하세요 : ");
	scanf("%d %d", &n, &m);
	arr = malloc(sizeof(int)*n*m);
	k = 1;
	for (i = 0; i < n; i++){
		for (j = 0; j < m; j++)
			arr[i][j] = k++;
	}
	printf("<%d x %d 크기의 배열>\n", n, m);
	for (i = 0; i < n; i++){
		for (j = 0; j < m; j++)
			printf("%3d ", arr[i][j]);
		printf("\n");
	} 
	free(arr);
	return 0;
}