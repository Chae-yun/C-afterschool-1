#include <stdio.h>
int main()
{
	printf("%s : %d\n", "Red Devil", sizeof("Red Devil"));
	printf("%s : %d\n", "붉은 악마", sizeof("붉은 악마"));
	printf("%s : %d\n", "Korea", sizeof("Korea"));
	printf("%s : %d\n", "", sizeof("")); //널값 때문에 1나옴 (나머지들도)
}