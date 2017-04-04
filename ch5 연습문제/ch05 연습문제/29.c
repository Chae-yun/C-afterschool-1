#include <stdio.h>
int main()
{
	int a, b = 0;
	while (b <= 25){
		a = 65;
		while (a <= 65 + b){
			printf("%c", a);
			a++;
		}
		printf("\n");
		b++;
	}
}