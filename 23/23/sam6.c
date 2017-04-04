#include<stdio.h>
#include<string.h>
#pragma warning(disable:4996)
int main()
{
	/*int i = 0;
	char answer[20];
	char fruits[][20] = { "apple", "greengrape", "dragonfruit", "orange", "melon" };
	printf("내가 좋아하는 과일을 맞춰보시오 : ");
	gets(answer);
	while (1){
		if (strcmp(answer, fruits[i]) == 0){
			printf("빙고!!\n");
			break;
		}
		else
			i++;
	} 아닌 거 입력하면 다시 안받고 중지*/
	int i = 0;
	char answer[20];
	char fruits[][20] = { "apple", "greengrape", "dragonfruit", "orange", "melon" };
	printf("내가 좋아하는 과일을 맞춰보시오 : ");
	gets(answer);
	while (1){
		if (strcmp(answer, fruits[i]) == 0){
			printf("빙고!!\n");
			break;
		}
		else
			i++;
		if (i == 4){
			if (strcmp(answer, fruits[i]) == 0){
				printf("빙고!!\n");
				break;
			}
			else{
				printf("땡!!\n다시 내가 좋아하는 과일을 맞춰보시오 : ");
				i = 0;
				gets(answer);
			}
		}
	}
}