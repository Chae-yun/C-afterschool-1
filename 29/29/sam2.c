#include<stdio.h>
#pragma warning(disable:4996)
 
struct login_info{
	char id[20];
	char passwd[20];
};

typedef struct  login_info LOGIN_INFO;

LOGIN_INFO arr[100];
int num = 0;

int main()
{
	char id[20], passwd[20];
	int i, found;
	while (1){
		printf("ID : ");
		gets(id);
		if (strcmp(id, ".") == 0)
			break;
		found = -1; //�÷��׺���
		for (i = 0; i < num; i++){
			if (strcmp(id, arr[i].id) == 0){
				found = i;
				break;
			}
		}
		if (found == -1){
			char yn;
			printf("��� ���� ���� ID�Դϴ�. ȸ�� ������ �Ͻðڽ��ϱ�? (Y/N) : ");
			scanf("%c", &yn);
			fflush(stdin);
			if (yn == 'Y' || yn == 'y'){
				printf("ID�� �Է��Ͻÿ� : ");
				gets(arr[num].id);
				printf("�н����带 �Է��ϼ��� : ");
				gets(arr[num].passwd);
				num++;
			}
			else
				continue;
		}
		else
		{
			printf("PASSWORD : ");
			gets(passwd);
			if (strcmp(passwd, arr[found].passwd) == 0)
				printf("�α��� �Ǿ����ϴ�.\n");
			else
				printf("�н����尡 Ʋ���ϴ�.\n");
		}
	}
	return 0;
}