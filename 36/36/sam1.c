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

	printf("�� ���� ȸ���� ������ �Է��Ͻǰǰ���? : ");
	scanf("%d", &size);
	arr = calloc(size, 40);

	for (int i = 0; i < size; i++){
		scanf("%s %s", arr[i].id, arr[i].passwd);
	}

	fp = fopen("password.dat", "wb");
	if (fp == NULL){
		printf("������� ���� ����.\n");
		return 1;
	}
	else{
		fwrite(&size, sizeof(int), 1, fp); //�� ��
		fwrite(arr, sizeof(struct login_info), size, fp); //������� ����
		fclose(fp);
	}
}
