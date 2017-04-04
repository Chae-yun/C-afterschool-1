#include "common.h"
#include "phoneFunc.h"
#define MAX 3
 
//텍스트파일 A를 지우고 시작해야 함!!

int main()
{
	PHONEDATA p[MAX];
	FILE *ifp, *ofp;
	int i = 0;
	int choice = 1;
	printf("최대 %d명 입력할 수 있습니다.\n\n", MAX);
	while (choice != 0){
		choice = SelectMenu();
		switch (choice){
		case 0:
			printf("종료합니다.\n");
			break;
		case 1:
			ifp = fopen("A.txt", "a");
			if (ifp == NULL){
				printf("w파일 개방 실패\n");
				return 1;
			}
			if (AddData(p, MAX, i) == 1){
				fprintf(ifp, "%s %s\n", p[i].name, p[i].phoneNum);
				i++;
			}
			fclose(ifp);
			break;
		case 2:
			ofp = fopen("A.txt", "r");
			if (ofp == NULL){
				printf("r파일 개방 실패\n");
				return 1;
			}
			for (int j = 0; j < i; j++){
				fscanf(ofp, "%s %s\n", p[j].name, p[j].phoneNum);
			}
			PrintData(p, i);
			fclose(ofp);
			break;
		case 3:
			ofp = fopen("A.txt", "r");
			if (ofp == NULL){
				printf("r파일 개방 실패\n");
				return 1;
			}
			for (int j = 0; j < i; j++){
				fscanf(ofp, "%s %s\n", p[j].name, p[j].phoneNum);
			}
			if (Search(p, i) == 0)
				printf("없습니다.\n\n");
			fclose(ofp);
			break;
		case 4:
			ifp = fopen("A.txt", "w");
			if (ifp == NULL){
				printf("w파일 개방 실패\n");
				return 1;
			}
			ofp = fopen("A.txt", "r");
			if (ofp == NULL){
				printf("r파일 개방 실패\n");
				return 1;
			}
			for (int j = 0; j < i; j++){
				fscanf(ofp, "%s %s\n", p[j].name, p[j].phoneNum);
			}
			DeletePhoneData(p, i);
			for (int j = 0; j < i; j++){
				fprintf(ifp, "%s %s\n", p[j].name, p[j].phoneNum);
			}
			fclose(ifp);
			fclose(ofp);
			i--;
			break;
		}
	}
}
