#include <stdio.h>
#pragma warning(disable:4996)
void sort(int *arr);
int main()
{
	int num[5];
	for (int i = 0; i < 5; i++){
		printf("%d번째 숫자 : ", i + 1);
		scanf("%d", &num[i]);
	}
	sort(num);
	printf("정렬결과 : ");
	for (int i = 0; i < 5; i++)
		printf("%d  ", num[i]);
}
void sort(int *arr){
	int temp;
	for (int i = 0; i < 4; i++){
		for (int j = i + 1; j < 5; j++){
			if (arr[i]>arr[j]){
				temp = arr[i];
				arr[i] = arr[j];
				arr[j] = temp;
			}
		}
	}
}