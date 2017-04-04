#include <stdio.h>

struct student{
	char name[20];
	int korean, english;
};

void disp1(struct student aa){
	printf("%s %d %d \n", aa.name, aa.korean, aa.english);
}

void disp2(struct student *aa){
	printf("%s %d %d \n", aa->name, aa->korean, aa->english);
}

int main()
{
	struct student a = { "¾çÃ¤À±", 80, 90 };
	disp1(a);
	disp2(&a);
}