#include <stdio.h>
typedef struct book{
	char name[20];
	char publisher[15];
	int money;
}BOOK;
int main()
{
	BOOK books[5] = { { "�̻��� ������ �ٸ���", "â��", 12000 },
							{ "�鼳����", "���е���", 12500 },
							{ "�ŵ�����", "�Ķ���", 9700 },
							{ "���ڴ� ������ ����", "������", 10000 },
							{ "�ξ����", "������Ͽ콺", 11400 } };
	for (int i = 0; i < 5; i++){
		printf("%s, %s, %d\n", books[i].name, books[i].publisher, books[i].money);
	}
}