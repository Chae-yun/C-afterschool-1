#include<stdio.h>
#include<stdlib.h>
#pragma warning(disable:4996)
int main()
{
	int n, m;
	int (*arr)[100] = NULL; //????�𸣰ڴ�����
	int i, j, k;
	printf("�迭�� ��1ũ��� ��2ũ�⸦ �Է��ϼ��� : ");
	scanf("%d %d", &n, &m);
	arr = malloc(sizeof(int)*n*m);
	k = 1;
	for (i = 0; i < n; i++){
		for (j = 0; j < m; j++)
			arr[i][j] = k++;
	}
	printf("<%d x %d ũ���� �迭>\n", n, m);
	for (i = 0; i < n; i++){
		for (j = 0; j < m; j++)
			printf("%3d ", arr[i][j]);
		printf("\n");
	} 
	free(arr);
	return 0;
}