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
		found = -1; //플래그변수
		for (i = 0; i < num; i++){
			if (strcmp(id, arr[i].id) == 0){
				found = i;
				break;
			}
		}
		if (found == -1){
			char yn;
			printf("등록 되지 않은 ID입니다. 회원 가입을 하시겠습니까? (Y/N) : ");
			scanf("%c", &yn);
			fflush(stdin);
			if (yn == 'Y' || yn == 'y'){
				printf("ID를 입력하시오 : ");
				gets(arr[num].id);
				printf("패스워드를 입력하세요 : ");
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
				printf("로그인 되었습니다.\n");
			else
				printf("패스워드가 틀립니다.\n");
		}
	}
	return 0;
}