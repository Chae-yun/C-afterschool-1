#include<stdio.h>
#include<string.h>
#include<windows.h> //cls
#pragma warning(disable:4996)

struct member{
	char name[20];
	char gender;
	int age;
	char level[20];
	int sno;
};

int main()
{
	struct member members[5] = { { "ȫ�浿", 'M', 49, "����", 101 }, 
												{ "�̸���", 'M', 25, "���", 102 }, 
												{ "�Ӳ���", 'M', 39, "����", 103 },
												{ "������", 'F', 28, "����", 104 }, 
												{ "������", 'M', 43, "�̻�", 105 } };
	int i;
	int choice, sno;
	char name[20];
	printf("1. ���\n2. �̸�\n");
	printf("� ������� ������ �˻����� �����Ͻÿ� : ");
	scanf("%d", &choice);
	system("cls");//�����ϸ� ����ȭ�� �����ϰ� �ϰ� �� ȭ������
	//getch();//�� ȭ�� �Ѿ �� �ƹ�Ű�� ������ �Ѿ��
	if (choice == 1){
		printf("�����ȣ�� �Է��Ͻÿ� : ");
		scanf("%d", &sno);
		for (i = 0; i < 5; i++){
			if (members[i].sno == sno)
				printf("\n�̸� : %s\n���� : %c\n���� : %d\n���� : %s\n",
				members[i].name, members[i].gender, members[i].age, members[i].level);
		}
	}
	else if (choice == 2){
		printf("�̸��� �Է��Ͻÿ� : ");
		scanf("%s", name);
		for (i = 0; i < 5; i++){
			if (strcmp(members[i].name, name) == 0)
				printf("\n�����ȣ : %d\n���� : %c\n���� : %d\n���� : %s\n",
				members[i].sno, members[i].gender, members[i].age, members[i].level);
		}
	}
}