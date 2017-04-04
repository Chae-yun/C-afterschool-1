#include <stdio.h>
#include <stdlib.h>
#pragma warning(disable:4996)
int main()
{
	int i, n, adr;
	unsigned char tt[60], buf[32], file[20];
	FILE *fpi, *fpo;
	printf("입력할 파일 이름 : ");
	scanf("%s", file);
	if ((fpi = fopen(file, "rb")) == NULL){
		printf("File not found\n", file);
		exit(0);
	}
	if ((fpo = fopen("reverse.bmp", "wb")) == NULL){
		printf("File cannot create\n");
		exit(0);
	}
	fread(tt, 54, 1, fpi);
	fwrite(tt, 54, 1, fpo);
	while (fread(buf, 32, 1, fpi) != 0){
		for (i = 0; i < 32; i++)
			buf[i] = ~buf[i];
		fwrite(buf, 32, 1, fpo);
	}
	printf("File create!\n");
	fclose(fpi);
	fclose(fpo);
}