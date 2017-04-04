#include <stdio.h>
int main()
{
	int a, b, c, aa, bb, cc, cba;
	a = 0;
	while (a < 10){
		a++;
		b = 0;
		while (b < 10){
			b++;
			c = 0;
			while (c < 10){
				c++;
				aa = a * 10 + a;
				bb = b * 10 + b;
				cc = c * 10 + c;
				cba = c * 100 + b * 10 + a;
				if (aa + bb + cc == cba){
					printf("%7d\n + %4d\n + %4d\n---------\n = %4d\n\n", aa, bb, cc, cba);
					printf("A = %d, B = %d, C = %d", a, b, c);
				}
			}
		}
	}
}