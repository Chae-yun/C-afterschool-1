#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#pragma warning(disable:4996)
int main()
{
	int Q[5][3], collect, count = 0, i;
	for (i = 0; i < 5; i++){
		srand(time(0));
		Q[i][0] = rand() % 89 + 10;
		Q[i][1] = rand() % 89 + 10;
		printf("%d��° ���� %d + %d = ", (i + 1), Q[i][0], Q[i][1]);
		scanf("%d", &Q[i][2]);
	}
	printf("\n");
	for (i = 0; i < 5; i++){
		printf("%d�� : %d + %d = %3d", (i + 1), Q[i][0], Q[i][1], Q[i][2]);
		collect = Q[i][0] + Q[i][1];
		if (collect == Q[i][2]){
			printf("(O)\n");
			count++;
		}
		else
			printf("(X) --->%3d\n", collect);
	}
	printf("\n%d�� �¾ҽ��ϴ�.\n", count);
}