#include <stdio.h>
#include <stdlib.h>
#pragma warning(disable:4996)

struct login_info{
	char id[20];
	char passwd[20];
};

int main()
{
	FILE *fp;
	struct login_info *arr = NULL;
	int size;

	fp = fopen("d.txt", "w");
	if (fp == NULL){
		printf("������� ���� ����.\n");
		return 1;
	}

	printf("�� ���� ȸ���� ������ �Է��Ͻǰǰ���? : ");
	scanf("%d", &size);
	fprintf(fp, "%d\n", size);
	arr = calloc(size, 40);
	
	for (int i = 0; i < size; i++){
		scanf("%s %s", arr[i].id, arr[i].passwd);
		fprintf(fp, "%s %s\n", arr[i].id, arr[i].passwd);
	}
	fclose(fp);
}
