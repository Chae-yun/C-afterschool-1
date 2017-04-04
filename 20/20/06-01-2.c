#include <stdio.h>
#pragma warning(disable:4996)
int main()
{
	int Array[5], i;
	for (i = 0; i < 5; i++){
		printf("%d번째 데이터 입력 : ", i);
		scanf("%d", &Array[i]);
	}//for1
	for (i = 0; i < 5; i++){
		printf("Array[%d] = %d\n", i, Array[i]);
	}//for2
}