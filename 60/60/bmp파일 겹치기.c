#include <stdio.h>
#include <stdlib.h>
#pragma warning(disable:4996)
int main()
{
	int i, n, adr;
	unsigned char tt[60], buf1[32], buf2[32], file[20];
	FILE *fpi1, *fpi2, *fpo;
	if ((fpi1 = fopen("t1.bmp", "rb")) == NULL){
		printf("File not found\n", file);
		exit(0);
	}
	if ((fpi2 = fopen("t2.bmp", "rb")) == NULL){
		printf("File not found\n", file);
		exit(0);
	}
	if ((fpo = fopen("t1_or_t2.bmp", "wb")) == NULL){
		printf("File cannot create\n");
		exit(0);
	}
	fread(tt, 54, 1, fpi1);
	fread(tt, 54, 1, fpi2);
	fwrite(tt, 54, 1, fpo);
	while (fread(buf1, 32, 1, fpi1) != 0 && fread(buf2, 32, 1, fpi2)){
		for (i = 0; i < 32; i++)
			buf1[i] &= buf2[i];
		fwrite(buf1, 32, 1, fpo);
	}
	printf("File create!\n");
	fclose(fpi1);
	fclose(fpi2);
	fclose(fpo);
}