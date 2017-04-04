#include <stdio.h>
#pragma warning(disable:4996)
int main()
{
	int i = 1, num = 0;
loop:
	num += i * i;
	/*if (num > 2000){
		printf("2000이 넘을 때 i의 값은 %d이고 그때의 값은 %d이다.\n", i, num);
	}
	else{
		i++;
		goto loop;
	}*/
	if (num < 2000){
		i++;
		goto loop;
	}
	printf("2000이 넘을 때 i의 값은 %d이고 그때의 값은 %d이다.\n", i, num);
}