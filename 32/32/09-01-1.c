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
	printf("  ���� ����(string) : ");
	gets(book1.title);
	printf("  ���ڸ�(string) : ");
	gets(book1.author);
	printf("  ��ü ��������(int) : ");
	scanf("%d", &book1.pages);
	printf("  ����(int) : ");
	scanf("%d", &book1.price);
	printf("%s, %s, %dp, %d��\n", book1.title, book1.author, book1.pages, book1.price);
}