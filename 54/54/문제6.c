#include <stdio.h>
typedef struct book{
	char name[20];
	char publisher[15];
	int money;
}BOOK;
int main()
{
	BOOK books[5] = { { "이상한 나라의 앨리스", "창비", 12000 },
							{ "백설공주", "문학동네", 12500 },
							{ "신데렐라", "파랑새", 9700 },
							{ "잠자는 숲속의 공주", "하하하", 10000 },
							{ "인어공주", "위즈덤하우스", 11400 } };
	for (int i = 0; i < 5; i++){
		printf("%s, %s, %d\n", books[i].name, books[i].publisher, books[i].money);
	}
}