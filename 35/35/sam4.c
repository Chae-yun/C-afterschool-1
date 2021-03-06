#include <stdio.h>
#include <string.h>
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
	int data, count = 0;
	char id[20], passwd[20], answer;

	fp = fopen("d.txt", "r");
	if (fp == NULL){
		printf("입력파일 개방 실패.\n");
		return 1;
	}

	fscanf(fp, "%d", &data);
	printf("패스워드 파일을 읽었습니다. %d명의 사용자 정보가 있습니다.\n", data);

	arr = malloc(sizeof(struct login_info)*data);

	while (1){
		count = 0;
		printf("ID를 입력하세요 : ");
		scanf("%s", id);
		printf("패스워드를 입력하세요 : ");
		scanf("%s", passwd);
		for (int i = 0; i < data; i++){
			fscanf(fp, "%s %s", arr[i].id, arr[i].passwd);
			if (strcmp(arr[i].id, id) == 0 && strcmp(arr[i].passwd, passwd) == 0)
				count = 1;
		}
		if (count == 1)
			printf("LOGIN OK!\n");
		else
			printf("LOGIN FAILED!\n");
		fflush(stdin);
		printf("계속 하시겠습니까? (Y/N) : ");
		scanf("%c", &answer);
		if (answer == 'n' || answer == 'N')
			break;
	}
	fclose(fp);
}