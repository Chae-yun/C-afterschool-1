#include <stdio.h>
int main()
{
	char b_name[5][20] = { "이상한 나라의 앨리스", "백설공주", "신데렐라", "잠자는 숲속의 공주", "인어공주" };
	char publisher[5][15] = { "창비", "문학동네", "파랑새", "하하하", "위즈덤하우스" };
	int money[5] = { 12000, 12500, 9700, 10000, 11400 };
	for (int i = 0; i < 5; i++){
		printf("%s, %s, %d\n", b_name[i], publisher[i], money[i]);
	}
}