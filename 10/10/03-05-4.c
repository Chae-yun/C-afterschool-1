#include <stdio.h>
#pragma warning(disable:4996)
int main()
{
	int height;
	printf("Ű : ");
	scanf("%d", &height);
	if (height < 120)
	{
		printf("Ű�� �۽��ϴ�.\n");
		printf("�� ���� �ⱸ�� Ż �� �����ϴ�.\n");
		printf("Ű�� %dcm�� Ŀ�� �մϴ�.\n", 120 - height);
	}
	else
	{
		printf("ȯ���մϴ�. ��ſ� �ð��ǽñ� �ٶ��ϴ�.\n");
		printf("���� �ⱸ�� ž���Ͻð� �ݵ�� ������Ʈ�� �Žʽÿ�.\n");
	}
}