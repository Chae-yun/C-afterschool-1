#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main()
{
	int *array, *ap, i, *max, *min;
	array = malloc(400); //���� 100��
	srand(time);
	ap = array;
	for (i = 0; i < 100; i++, ap++) //�����͸� �����ϸ鼭
		printf("%d  ", *ap = rand()); //100���� ���� �߻�
	ap = array;
	max = min = ap; //max, min �ʱⰪ�� �迭�� ù ��ҷ� ����
	ap++; //������ ����
	for (i = 1; i < 100; i++, ap++){ //1�� ��Һ��� ������ ��
		if (*ap > *max)
			max = ap; //max ������ ����
		if (*ap < *min)
			min = ap; //min ������ ����
	}
	printf("\nmax = %d, min = %d\n", *max, *min);
	free(array);
}