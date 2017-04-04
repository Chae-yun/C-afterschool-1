#include <stdio.h>
#pragma warning(disable:4996)
int main()
{
	int num, sum = 0, count = 1;
	printf("정수를 하나 입력하시오 : ");
	scanf("%d", &num);

	for (count = 1; count <= num; count++){
		sum += count;
	}
	printf("총 합은 %d이고, ", sum);
	sum = 0, count = 1;

	while (count <= num){
		if (count % 2 == 1){
			sum += count;
		}
		count++;
	}
	printf("홀수의 합은 %d이고, ", sum);
	sum = 0, count = 1;

	do{
		if (count % 2 == 0){
			sum += count;
		}
		count++;
	} while (count <= num);
	printf("짝수의 합은 %d입니다.\n", sum);
}