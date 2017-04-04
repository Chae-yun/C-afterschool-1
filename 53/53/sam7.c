#include <stdio.h>
#include <string.h>
#pragma warning(disable:4996)
int main()
{
	char t_word[10];
	char word[5][10];
	for (int i = 0; i < 5; i++){
		printf("%d번째 단어 : ", i + 1);
		scanf("%s", word[i]);
	}
	for (int i = 0; i < 4; i++){
		for (int j = i + 1; j < 5; j++){
			if (strlen(word[i])>strlen(word[j])){
				strcpy(t_word, word[i]);
				strcpy(word[i], word[j]);
				strcpy(word[j], t_word);
			}
		}
	}
	printf("정렬 후 : ");
	for (int i = 0; i < 5; i++)
		printf("%s  ", word[i]);
}