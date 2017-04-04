#include<stdio.h>
#pragma warning(disable:4996)

int main()
{
	char m;
	printf("==========¸Þ´º=========\n");
	printf("(C)coffee\n");
	printf("(D)doughnut\n");
	printf("(H)hamburger\n");
	printf("(P)pizza\n");
	printf("(S)spaghetti\n");
	printf("(T)tea\n");
	printf("(Q)quit\n");
	printf("=======================\n");
	printf("What do you want? : ");
	scanf("%c", &m);

	switch (m){

	case 'C': case 'c':
		printf("Coffee is 5$.\n");
		break;

	case 'D': case 'd':
		printf("Doughnut is 0.5$\n");
		break;

	case 'H': case'h':
		printf("Hambuger is 3.5$\n");
		break;

	case 'P': case 'p':
		printf("Pizza is 8.5$.\n");
		break;

	case 'S': case 's':
		printf("Spaghetti is 9.9$.\n");
		break;

	case 'T': case 't':
		printf("Tea is 5.9\n");
		break;

	case 'Q': case 'q':
		printf("Quit\n");
	}
}