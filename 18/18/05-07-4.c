#include<stdio.h>
int main()
{
	int a = 1, b, c, d, abc, cac, bdd;
	for (a = 1; a < 10; a++){
		for (b = 1; b < 10; b++){
			for (c = 1; c < 10; c++){
				for (d = 1; d < 10; d++){
					abc = 100 * a + 10 * b + c;
					cac = 100 * c + 10 * a + c;
					bdd = 100 * b + 10 * d + d;
					if (abc + cac == bdd){
						printf("%d\n""+%d\n""-----\n""%d\n\n",abc,cac,bdd);
					}
				}
			}
		}
	}
}