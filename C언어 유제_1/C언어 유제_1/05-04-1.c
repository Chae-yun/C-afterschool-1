#include <stdio.h>
#pragma warning(disable:4996)
int main()
{
	int count = 0, password, right = 1234;
	do{
		printf("�н����带 �Է��Ͻÿ� : ");
		scanf("%d", &password);
		count++;
		if (password == right){
			printf("�α��� �Ǿ����ϴ�.\n");
			break;
		}
		printf("%d ��°�� �α��ο� �����ϼ̽��ϴ�.\n", count);
	} while (count < 3);
}