#include <stdio.h>
#pragma warning(disable:4996)
int main()
{
	int num, count=1, sum=0, max, min;
	double average;
	printf("���͸� ġ�鼭 10���� ������ �Է��Ͻÿ� : ");
loop:
	scanf("%d", &num);
	if (count == 1){
		max = num;
		min = num;
	}
	sum += num;
	if (max < num)
		max = num;
	if (min > num)
		min = num;

	if (count < 10){
		count++;
		goto loop;
	}
	average = sum / (double)count;
	printf("���� %d, ����� %lf, �ִ��� %d, �ּڰ��� %d�Դϴ�.\n", sum, average, max, min);
}