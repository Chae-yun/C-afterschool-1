#include<stdio.h>
#pragma warning(disable:4996)

struct customer{
	char name[20], sex[4], adress[30], tel[15];
	int age;
};

int main()
{
	int i;
	struct customer gogak[3];
	printf("3���� �� ������ �Է��ϼ���.\n");
	for (i = 0; i < 3; i++){
		printf("�̸� : ");
		gets(gogak[i].name);
		printf("���� : ");
		scanf("%d", &gogak[i].age);
		printf("���� (�� or ��) : ");
		fflush(stdin);
		gets(gogak[i].sex);
		printf("�ּ� : ");
		gets(gogak[i].adress);
		printf("��ȭ��ȣ : ");
		gets(gogak[i].tel);
		printf("\n");
	}
	for (i = 0; i < 3; i++)
		printf("%s %d %s %s %s\n", gogak[i].name, gogak[i].age, gogak[i].sex, gogak[i].adress, gogak[i].tel);
}