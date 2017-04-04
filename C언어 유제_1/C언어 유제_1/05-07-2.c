#include<stdio.h>
int main()
{
	int chicken, dog;
	for (chicken = 1; chicken <= 16; chicken++){
		for (dog = 1; dog <= 30; dog++){
			if (chicken * 2 + dog * 2 == 38 && chicken * 2 + dog * 4 == 60){
				printf("닭은 %d 마리, 개는 %d 마리입니다.", chicken, dog);
			}
		}
	}
	printf("\n");
}