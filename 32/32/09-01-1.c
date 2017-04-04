#include <stdio.h>
#pragma warning(disable:4996)

struct book{
	char title[50];
	char author[35];
	int pages;
	int price;
};

int main()
{
	struct book book1;
	printf("  도서 제목(string) : ");
	gets(book1.title);
	printf("  저자명(string) : ");
	gets(book1.author);
	printf("  전체 페이지수(int) : ");
	scanf("%d", &book1.pages);
	printf("  가격(int) : ");
	scanf("%d", &book1.price);
	printf("%s, %s, %dp, %d원\n", book1.title, book1.author, book1.pages, book1.price);
}