#include <stdio.h>
int main()
{
	int x = 1, y = 1, z = 0;
	printf("1, 1, ");
	for (;;){
		z = x + y;
		if (z < 0) //���� ū �������� Ŀ���� �Ǹ� ������ �ٲ�� ������ �̿�
			break;
		printf("%d, ", z);
		x = y;
		y = z;
	}
	printf("\n");
	printf("Ȳ�ݺ� = %f\n", (double)y / (double)x);
}