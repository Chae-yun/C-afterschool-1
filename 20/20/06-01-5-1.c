#include<stdio.h>
int main() //선택정렬
{
	int i, j, temp;
	int stud[10] = { 45, 92, 88, 34, 88, 95, 82, 59, 70, 76 };
	printf(" 정 렬 전 : ");
	for (i = 0; i < 10; i++){
		printf("%d ", stud[i]);
	}
	printf("\n");

	for (i = 0; i < 9; i++){ //for (i = 0; i < 10; i++)
		for (j = i+1; j < 10; j++){ //for (j = 0; j < 10; j++)이라고 하면 큰거 부터 나온다.... 왜지
			if (stud[i] > stud[j]){ //큰거 먼저 하고 싶다면 부등호 반대로
				temp = stud[i];
				stud[i] = stud[j];
				stud[j] = temp;
			}//if
		}//for2
	}//for1

	printf("정렬 결과 : ");
	for (i = 0; i < 10; i++){
		printf("%d ", stud[i]);
	}//for3
	printf("\n");
}