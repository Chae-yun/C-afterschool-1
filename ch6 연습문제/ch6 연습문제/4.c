#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#include<string.h>
#pragma warning(disable:4996)
int main()
{
	int i;
	int score[10] = { 0, };
	char abc[10][3];
	srand(time(0));

	for (i = 0; i < 10; i++)
		score[i] = rand() % 101;
	for (i = 0; i < 10; i++){
		switch (score[i] / 5){
			case 20: case 19:
				strcpy(abc[i], "A+"); break;
			case 18:
				strcpy(abc[i], "A"); break;
			case 17:
				strcpy(abc[i], "B+"); break;
			case 16:
				strcpy(abc[i], "B"); break;
			case 15:
				strcpy(abc[i], "C+"); break;
			case 14:
				strcpy(abc[i], "C"); break;
			case 13:
				strcpy(abc[i], "D+"); break;
			case 12:
				strcpy(abc[i], "D"); break;
			default:
				strcpy(abc[i], "F"); break;
		}
	}
	for (i = 0; i < 10; i++)
		printf("%d : %s\n", score[i], abc[i]);
}
