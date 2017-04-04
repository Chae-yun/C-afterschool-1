#include <stdio.h>
#include <stdlib.h>
#pragma warning(disable:4996)

int main()
{
	int arr1[10] = { 34, 90, 87, 65, 46, 21, 19, 53, 78, 2 };
	int arr2[10];
	int i;
	FILE *fp;
	fp = fopen("test.dat", "wb");
	if (fp == NULL){
		printf("파일 열기 실패\n");
		return -1;
	}
	fwrite(arr1, sizeof(int), 10, fp);
	fclose(fp);
	fp = fopen("test.dat", "rb");
	if (fp == NULL){
		printf("파일 열기 실패\n");
		return -1;
	}
	fread(arr2, sizeof(int), 10, fp);
	fclose(fp);
	for (i = 0; i < 10; i++)
		printf("%d ", arr2[i]); //test.dat 파일의 이상한 문자(원래 저 숫자들)를 다시 바꿔 출력
	printf("\n");
	return 0;
}