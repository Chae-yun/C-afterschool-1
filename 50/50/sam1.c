/*#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main()
{
	int lotto[6];
	srand(time(0));
	for (int i = 0; i < 6; i++){
		loop:
		lotto[i] = rand() % 45 + 1;
		for (int j = 0; j < i; j++){
			if (lotto[i] == lotto[j])
				goto loop;
		}
		printf("%d   ", lotto[i]);
	}
}*/

#include <stdio.h>
int main()
{
	printf("┌──────────┐\n");
	printf("│채윤 공부 열심히 해 │\n");
	printf("│채윤 공부 열심히 행 │\n");
	printf("│채윤 공부 열심히 햄 │\n");
	printf("│채윤 공부 열심히 햅 │\n");
	printf("│채윤 공부 열심히 핸 │\n");
	printf("│채윤 공부 열심히 헷 │\n");
	printf("└──────────┘ \n");
}