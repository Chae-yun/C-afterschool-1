#include<stdio.h>
#pragma warning(disable:4996)
int main()
{
	int score;
	char grade[] = { 'F', 'F', 'F', 'F', 'F', 'F', 'D', 'C', 'B', 'A', 'A' };
	printf("������ �Է��Ͻÿ� : ");
	scanf("%d", &score);
	if (score<0 || score>100){
		printf("������ �߸��Ǿ����ϴ�.\n");
		return 0;
	}
	printf("%d : %c", score, grade[score / 10]);
	if ((score > 60 && score % 10 >= 5) || score == 100)
		printf("+\n");
}