#include "common.h"
#include "phoneFunc.h"
#define MAX 3
 
//�ؽ�Ʈ���� A�� ����� �����ؾ� ��!!

int main()
{
	PHONEDATA p[MAX];
	FILE *ifp, *ofp;
	int i = 0;
	int choice = 1;
	printf("�ִ� %d�� �Է��� �� �ֽ��ϴ�.\n\n", MAX);
	while (choice != 0){
		choice = SelectMenu();
		switch (choice){
		case 0:
			printf("�����մϴ�.\n");
			break;
		case 1:
			ifp = fopen("A.txt", "a");
			if (ifp == NULL){
				printf("w���� ���� ����\n");
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
				printf("r���� ���� ����\n");
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
				printf("r���� ���� ����\n");
				return 1;
			}
			for (int j = 0; j < i; j++){
				fscanf(ofp, "%s %s\n", p[j].name, p[j].phoneNum);
			}
			if (Search(p, i) == 0)
				printf("�����ϴ�.\n\n");
			fclose(ofp);
			break;
		case 4:
			ifp = fopen("A.txt", "w");
			if (ifp == NULL){
				printf("w���� ���� ����\n");
				return 1;
			}
			ofp = fopen("A.txt", "r");
			if (ofp == NULL){
				printf("r���� ���� ����\n");
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
