#include <stdio.h>
int main()
{
	char b_name[5][20] = { "�̻��� ������ �ٸ���", "�鼳����", "�ŵ�����", "���ڴ� ������ ����", "�ξ����" };
	char publisher[5][15] = { "â��", "���е���", "�Ķ���", "������", "������Ͽ콺" };
	int money[5] = { 12000, 12500, 9700, 10000, 11400 };
	for (int i = 0; i < 5; i++){
		printf("%s, %s, %d\n", b_name[i], publisher[i], money[i]);
	}
}